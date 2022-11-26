#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,j;
for(i=1;i<=n;i++){
   for(j=1;j<=n;j++){
       if(j<=n-i){cout<<" ";}
       else{
         cout<<"*";
    
}
   }
cout<<endl;
}
} 
// Important logic
// Till when j<=n-i
// that is 1<=4,1<=3,1<=2,1<=1;
// it will print those no. of spaces there.
