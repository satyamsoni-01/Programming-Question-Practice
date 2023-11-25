#include<iostream>

using namespace std;

int main()
{
   int n, m;
   cin>>n>>m;
   int mat[n][m];

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>mat[i][j];
    }
   }

   int r=0,c=m-1;
   int val=0;
   cin>>val;

   bool test=0;

   while(c>=0 && r<n )
   {
    if(mat[r][c]==val)
    {
        test=1;
        break;
    }

    else if(mat[r][c]>val)
    {  
        c--;
        
    }

    else if(mat[r][c]<val)
    {
        r++;
    }
   }

if(test==1)
{
    cout<<"Value present";

}
else
{
    cout<<"value not present";
}

    return 0;
}