#include<iostream>

using namespace std;

int main()
{   
    cout<<"Are you want to know properties of triangle by angle or side \n For side tap 0 \n for angle tap 1"<<endl;
    int choice;
    cin>>choice;
    if(choice==0)
    {
        int sidea,sideb,sidec;
        cin>>sidea>>sideb>>sidec;
        if(sidea==sideb && sideb==sidec)
        {
            cout<<" triangle is Equilateral";
        }

        else if (sidea==sideb || sideb==sidec || sidec==sidea)
        {
            cout<<"Triangle is isosceles";
        }
        else
        {

         cout<<"triangle is scalene";
        }



    }

    else if(choice==1)
    {
        int angleA,angleB,angleC;
        cin>>angleA>>angleB>>angleC;
      

       
        if( angleA==90 || angleB==90 || angleC==90)
        {

         cout<<"triangle is right angled triangle";
        }
         else  if(angleA==angleB && angleB==angleC)
        {
            cout<<" triangle is Equilateral";
        }
         else if (angleA==angleB || angleB==angleC || angleC==angleA )
        {
            cout<<"Triangle is isosceles";
        }

        else
        {
          cout<<"Triangle is scalene triangle"; 
        }

        

    }

    else
    {
        cout<<"wrong choice";
    }

    return 0;
}