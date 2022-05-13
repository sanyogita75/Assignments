#include<iostream>
#define N 4
using namespace std;
void printsolution(int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }
}
bool isSafe(int board[N][N],int row,int col){
    int i,j;
    for(int i=0;i<N;i++){
        if(board[row][i])
        return false;
    }
    for(i=row,j=col;i>=0 && j>=0; i--,j--){
        if(board[i][j])
        return false;
    }
    for(i=row,j=col; i<N && j>=0 ;i++,j--){
        if(board[i][j])
        return false;
    }
    return true;
}
bool solveUtil(int board[N][N],int col)
{
    if (col>=N)
      return true;
    for(int i=0;i<N;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;
            if(solveUtil(board,col+1)==true)
               return true;
            board[i][col]=0;
        }
    }





      return false;
}


bool solveNQ(){
    int board[N][N]={0};
    if(solveUtil(board,0)==false){
        cout<<"solution not exit";
        return false;
    }
    printsolution(board);
    return true;
}

int main(){
 solveNQ();
}
