#include<iostream>

using namespace std;

int main()
{   
    int mat1[3][4]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};

    int mat2[4][3]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    int mat[3][3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
                sum+=mat1[i][k]*mat2[k][j];

            mat[i][j]=sum;
            sum=0;
        }   

    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
             cout<<mat[i][j]<<" ";
        cout<<endl;    
    }


    return 0;
}