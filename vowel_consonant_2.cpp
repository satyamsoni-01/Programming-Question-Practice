#include<iostream>

using namespace std;

int main()
{   
   cout<<"Enter the alphabet";
   char ch;
   cin>>ch;

   switch (ch)
   {
        case 'a': 
              cout<<"It is vowel";
                break;
        case 'e': 
              cout<<"It is vowel";
                break;

        case 'i': 
              cout<<"It is vowel";
                break;

        case 'o': 
              cout<<"It is vowel";
                break;
        case 'u': 
              cout<<"It is vowel";
                break;                                             
   
   default:
       cout<<"It is consonant";
    break;
   }

    return 0;
}