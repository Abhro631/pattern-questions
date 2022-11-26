#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,j;
for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
         if(i%2==0 && j%2==1)
         cout<<"0 ";
         else if(j%2==0 && i%2==1)
         cout<<"0 ";
         else
         cout<<"1 ";
    
}
cout<<endl;
}
}
