#include<iostream>

using namespace std;

int main()
{  
    int n;

    cin>>n;

    int  reverse=0;

    for(;n>0;n=n/10)
    {
        int last_digit=n%10;
        reverse=reverse*10+last_digit;


    }

    cout<<reverse;


    return 0;
}