#include<iostream>

using namespace std;

int main()
{
   string c="satyam",r;
   string ch;
   int x=c.length();
   
   for(int i=x-1; i>=0;i--)
   {
    ch=c[i];
    r.append(ch);
   }

   cout<<r;




    return 0;
}