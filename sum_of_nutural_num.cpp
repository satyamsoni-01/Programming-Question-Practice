#include<iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int forsum=0,whilesum=0,dowhilesum=0;
    for(int i=0; i<=a;i++)
    {
        forsum+=i;
    }
    cout<<"for sum"<<forsum<<endl;

   
   do  
   {
    dowhilesum+=a;
    a=a-1;
   }while(a>0);

   cout<<"do while sum "<<dowhilesum<<endl;

    return 0;
}