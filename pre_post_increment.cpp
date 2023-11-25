#include<iostream>

using namespace std;

int main()
{  
   int a=5;
   int b,c;
// b=5 a=5 
   b=a++;          //   post increment 
// b=5 a=6

//c=7 a=7
   c=++a;             //   pre increment
// c=7 a=7
                       // calculation of pre increment and post increment happen in left to right

   cout<<"b"<<b<<"c"<<c<<"a"<<a<<endl;


    return 0;
}