#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,j;
for(i=1;i<=n;i++){
   for(j=1;j<=i;j++){
         cout<<"*";
   }
   int s=2*n-2*i;
   for(int k=1;k<=s;k++){
       cout<<" ";
   }
   for(j=1;j<=i;j++){
         cout<<"*";
   }
cout<<endl;
}
for(i=n;i>=1;i--){
   for(j=1;j<=i;j++){
         cout<<"*";
   }
   int s=2*n-2*i;
   for(int k=1;k<=s;k++){
       cout<<" ";
   }
   for(j=1;j<=i;j++){
         cout<<"*";
   }
cout<<endl;
}
} 
