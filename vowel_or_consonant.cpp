#include<iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"alphabet is vowel"<<endl; 
    }
    else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"alphabet is vowel"<<endl;
    }
    else{
        cout<<"alphabet is consonant"<<endl;
    }
}