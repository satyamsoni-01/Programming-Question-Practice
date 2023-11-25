#include<iostream>

using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   cout<<"Enter No of series want to print: ";
   int n;
   cin>>n;
   switch (n)
   { cout<<endl;
   case 0: 
   cout<<"None";
    break;

    case 1: 
    cout<<a<<endl;
    break;

    case 2:
      cout<<a<<endl<<b<<endl;
       break;   
     default:
       cout<<a<<endl<<b<<endl;
       int fib1=a;
       int fib2=b;
       int temp=0;
       for(int i=3;i<=n;i++)
       {  temp=fib2;
          fib2=fib2+fib1;
          fib1=temp;
          cout<<fib2<<endl;
       }
         break;
   }

   

 
    return 0;
}