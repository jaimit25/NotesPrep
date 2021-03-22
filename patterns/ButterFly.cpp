// ./helloworls on terminal to run the program manually 
//comman+shift +b 
//stop code control + alt + m macos

#include<iostream>
using namespace std;
int main(){

int height;
cout<<"Enter Height Of Pyramid"<<endl;
cin>>height;
int i,j;

for(i=1;i<=height;i++){
for(j=1;j<=i;j++){
    cout<<"*";
}
for(j=1;j<=2*height-2*i;j++){
    cout<<" ";
}
for(j=1;j<=i;j++){
    cout<<"*";
}
cout<<endl;
}


for(i=height;i>0;i--){
for(j=height;j>0;j--){
cout<<"* ";
}
for(j=1;j>2*height-2*i;j++){
cout<<" ";
}
for(j=height;j>0;j--){
cout<<"* ";
}

cout<<endl;
}

return 0;
}