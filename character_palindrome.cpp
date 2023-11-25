#include<iostream>

using namespace std;

int main()
{  
    int n;
    cin>>n;
   char name[n+1];
   cin>>name;
   bool check=0;
   for(int i=0;i<n/2;i++)
   {
    if(name[i]!=name[n-i-1])
    {
        check=1;
        break;
    }
   }

   if(check==1)
   {
    cout<<"not palindrome";
   }
   else
   {

   
   cout<<"palindrome";

   }


    return 0;
}