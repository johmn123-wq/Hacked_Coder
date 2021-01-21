#include<bits/stdc++.h>

#define primeInv 838709685
#define m 1000000009
#define  p 97

using namespace std;
int arrr[1000]={0}; 
 long value(char ch ){
 return long(ch);
}

int this_hash(string a,string b){

int N=a.length();
int M=b.length();
long power[M];
 power[0]=1;
int count=0;

for(int i=1;i<M;i++){
     power[i]=(power[i-1]*p);
} 


long  hashA=0;
long hashB=0;

  for(int i=0;i<M;i++){
hashA=hashA+int(a[i])*power[i];
hashB=hashB+int(b[i])*power[i];

  }
 cout<<hashA<<" "<<hashB<<endl;

for(int i=0;i<=N-M;i++){
 
  if(hashA==hashB){
    count++;

  }
  

  if(i<N-M){
               
    hashA=(hashA-value(a[i]))/p;
 
    hashA=hashA+value(a[i+M])*power[M-1];
 cout<<endl<<hashA<<" ";
        }

      }

             return count;
}

int main(){

 string s,g;
 cin>>s;
 cin>>g;

 cout<<endl<<"count = "<<this_hash(s,g);

  return 0;
}
