#include<bits/stdc++.h>
using namespace std;

int main(){
    int p=7;
    int g=3;
    int Xa=2;
    int Xb=5;

    /*
    Ya=g^xa mod p
    Yb=g^xb mod p

    ska=yb^xa mod p
    skb=ya^xb mod p 


    */
   int Ya=pow(g,Xa);
   Ya=fmod(Ya,p);
   int Yb=pow(g,Xb);
   Yb=fmod(Yb,p);
   
   int ska=fmod(pow(Yb,Xa),p);
   //ska=fmod(ska,p);
   cout<<ska;

   int skb=fmod(pow(Ya,Xb),p);
//    skb=fmod(skb,p);
if(ska==skb){
    cout<<"Party A and B can communicate with each other ";
}
else{
    cout<<"They cannot communicate with each other ";
}
   cout<<skb;
}
