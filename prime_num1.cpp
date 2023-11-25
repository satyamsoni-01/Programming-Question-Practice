#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
   
    for(int n=a;n<b;n++)
    {  int d;
       
            for(d=2; d<n;d++)
                { 
                     if(n%d==0 )
                       {
                           break;
                       } 

                             
                       
                }
             if(d==n)
             {
             cout<<n;
             }
       
                
                
    }
    
    
 

    return 0;
}