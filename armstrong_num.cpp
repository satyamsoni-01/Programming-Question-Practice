#include<iostream>

using namespace std;

int main()
{
   int n,copy_n,sum=0;
   cin>>n;
   copy_n=n;

   for(;n>0;n=n/10)
   {  int digit=n%10;
     sum=sum+digit*digit*digit;     ///  It doesn't work for ^ 
   }

   if(sum==copy_n)
   {
    cout<<"Armstrong number"<<endl;
   }

   else{
    cout<<"Not an armstrong number";
   }



    return 0;
}