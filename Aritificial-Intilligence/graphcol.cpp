#include<iostream>
#define NODE 5
using namespace std;
void graphcoloring(){
    int graph[NODE][NODE]={
       {0, 0, 1, 0 ,1},
       {0, 0 ,1 ,1 ,1},
       {1, 1, 0, 1, 0},
       {0 ,1 ,1, 0 ,1},
       {1, 1, 0, 1, 0}
    };
    int color[NODE];
    color[0]=0;
    bool coloUsed[NODE];
    for(int i=1;i<NODE;i++)
      color[i]=-1;
    for(int i=0;i<NODE;i++)
       coloUsed[i]=false;
    for(int u=1;u<NODE;u++){
        for(int v=0;v<NODE;v++){
            if(graph[u][v]){
                if(color[v]!=-1){
                    coloUsed[color[v]]=true;
                }
            }
        }
        int col;
        //we must get 0 colors so colorused for 0th = false !false=true    0 
        for( col=0;col<NODE;col++){
            if(!coloUsed[col])
                break;
        }    
        
        color[u]=col;
        for(int v=0;v<NODE;v++){
            if(graph[u][v]){
                if(color[v]!=-1){
                    coloUsed[v]=false;
                }
            }
        }
    }
    for(int u=0;u<NODE;u++){
        cout<<"Color "<<u<<"is assigned with color "<<color[u]<<endl;
    }


}
int main(){
    graphcoloring();

    return 0;
}
