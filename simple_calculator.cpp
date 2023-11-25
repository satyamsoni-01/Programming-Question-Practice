#include<iostream>

using namespace std;

int main()
{  
     cout<<" Enter a and b for calculation"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<" Enter operator "<<endl;
    char op;
    cin>>op;

    switch (op)
    {
    case '+': 
        cout<<a<<"+"<<b<<"="<<a+b;
       
        break;
     case '-': 
        cout<<a<<"-"<<b<<"="<<a-b;
       
        break;

     case '*': 
        cout<<a<<"*"<<b<<"="<<a*b;
       
        break;

     case '/': 
        cout<<a<<"/"<<b<<"="<<a/b;
       
        break;

   

   
       
               
    
    default:

        break;
    }


    return 0;
}