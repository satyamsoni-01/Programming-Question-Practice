#include<iostream>

using namespace std;

int main()
{  

    int N;
    cin>>N;
    int mat[N][N];

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    int temp=0;
    for(int i=0;i<N;i++)
    {  
        for(int j=i+1;j<N;j++)
        {
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
            temp=0;
            
        }
     
    }

   for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<mat[i][j]<<" ";
        }
      cout<<endl;  
    }


    return 0;
}