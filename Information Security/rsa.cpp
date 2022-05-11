#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a,int b){
    int t;
    while(1){
        t=a%b;
        if(t==0){
            return b;
        }
        a=b;
        b=t;
        
    }
}
int main(){
    double p=13;
    double q=11;
    double n=p*q;
    double phi=(p-1)*(q-1);
    double e=7;
    double track;
    while(e<phi){
        track=gcd(e,phi);
        if(track==1){
            break;
        }else{e++;
        }
        
    }
    //d=e^-1 mod phi
    double d1=1/e;
    double d= fmod(d1,phi);
    
    double msg=17;
    //pub={e,n} pri={d,n}
    //c=msg^e mod n 
    //m=c^d mod n 
    double c=pow(msg,e);
    double m=pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);
    
    cout<<"original messge "<<msg<<endl;
    cout<<"public key {e,n} = {"<<e<<","<<n<<"}"<<endl;
    cout<<"private key {d,n} = {"<<d<<","<<n<<"}"<<endl;
    cout<<"Encrypted messgae "<<c<<endl;
    cout<<"Decrypted messgae "<<m;
    
    
    
    
    
    return 0;
    
}
