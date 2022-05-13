#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define V 5
#define HIGH 999999
int main(){
    int G[V][V]={
        {0,4,0,5,2},
        {4,0,1,3,0},
        {0,1,0,8,0},
        {5,3,8,0,2},
        {2,0,0,2,0}
    };
    int v_array[V];
    memset(v_array,false,sizeof(v_array));
    v_array[0]=true;
    int n_edges=0;
    cout<<"EDGES  :  WEIGHTS"<<endl;
    while(n_edges<V-1){
        int r=0,c=0;
        int min=HIGH;
        for(int i=0;i<5;i++){
            if(v_array[i]){
                for(int j=0;j<5;j++){
                    if(min>G[i][j]){
                        if(!v_array[j] && G[i][j]){
                            min=G[i][j];
                            r=i;
                            c=j;
                        }
                    }
                }
            }
        }
        cout<<r<<"-"<<c<<" : "<<G[r][c]<<endl;
        v_array[c]=true;
        n_edges++; 
    }cout<<endl;
    return 0;
}
