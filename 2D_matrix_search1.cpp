#include<iostream>

using namespace std;

int main()
{
   
   int n,m;

   cin>>n>>m;

   int mat[n][m];

   for(int i=0;i<n;i++)
   {
     for (int j=0;j<m;j++)
     {
           cin>>mat[i][j];
     }  

      
   }

   int val=0;
   cin>>val;

   bool check=0;

   int temp=min(n,m);
  
    for(int i=0;i<temp;i++)
    {
      if(mat[i][i]<val)
      {
         if(mat[n-1][i]>=val)
         {
            for(int p=i+1;p<n;p++)
            {
                if(mat[p][i]==val)
                {
                    check=1;
                    break;
                }


            }
         }

        if (mat[i][m-1]>=val)
         {
            for(int p=i+1;p<m;p++)
            {
                if(mat[i][p]==val)
                {
                    check=1;
                    break;
                }


            }
         }

        

      }

      else if(mat[i][i]==val)
      {
        check=1;
        break;
      }

    }
   

   if(check==1)
   {
    cout<<" Value is present";
   }

   else
   {
    cout<<" Value is not present";
   }

 

    return 0;
}


