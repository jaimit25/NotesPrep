// ./helloworls on terminal to run the program manually 
//comman+shift +b 
//stop code control + alt + m macos

#include<iostream>
using namespace std;
int main(){
   

//operator
//Arthimetic 
// binary - ,+,*,/,%
// unary ++,--
// pre increment and post increment
//a++ and ++a
//++a will increment value instantly
//a++ a value is preserved temp. a will get increment before next statement is executed
int m=0;
int l=0;
int store;
++m;
store= l++;
cout<<store<<"  "<<m<<endl;


//pre and post increment
//ie 
int r=1;
// 1 +  2+1
r=r++ + ++r;
cout<<r<<endl;

//relational operator 
// == ,!=, >= ,<=,>,<


//logical operator
// && ,|| ,!


// Bitwise operator
//And,Or,Xor,ones,<<,>>
// a<<1 a*2^n
//a>>1 a/2^n


//assigment operator 
//+= ,*=, =, -=,/=


//miscellaneous operator
//sizeof(),
//ternary operator (condn?x:y),
//cast ,
//coma,
//(&) returns address of variable in memory,
//(*) pointer to a variable


//ie cast operator
char ch ='a';
cout<<(int)ch<<endl;

//ie comma operator
//in comma operator last value will always be assigned to the 
int val=(1,2,3);
cout<<val<<endl;




return 0;

}