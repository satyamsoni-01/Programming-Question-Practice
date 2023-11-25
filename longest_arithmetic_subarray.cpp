#include<iostream>

using namespace std;

int main()
{
   int N;
   cin>>N;
   int arr[N];
   for(int i=0;i<N;i++)
   {
     cin>>arr[i];

   }

   int  pre_count=0;
   int count=0;
   int pre_value=0;
 
   int pre_end=0;
   if( N==1)
   {  
      cout<<" Value of i"<<0<<" Count"<<count<<" pre_end " <<pre_end<<" pre_count "<<pre_count<<endl;
      cout<<arr[0];
   }
   else if(N==2)
   {   cout<<arr[0];
       cout<<arr[1];
       cout<<"value of i"<<1<<" Count"<<count<<" pre_end " <<pre_end<<" pre_count "<<pre_count<<endl;

   }

   else 
   {
       count=1;
       pre_count=1;
       pre_value=arr[1]-arr[0];

       pre_end=1;
   

     
       

    for(int i=2;i<N;i++)
   {   
       
       if(pre_value==arr[i]-arr[i-1])
       { 
        count++;
       }

       else if(pre_value!=arr[i]-arr[i-1])
       {
          if(pre_count<count)
          {
              pre_count=count;
              count=1;
              pre_end=i-1;
              pre_value=arr[i]-arr[i-1];
          }
          else
          {
               count=1;
               pre_value=arr[i]-arr[i-1];
          }
       }

       if(i==N-1)
       {
          if(pre_count<count)
          {
            pre_count=count;
            pre_end=i-1;
          }
       }

        cout<<"value of i"<<i<<" Count"<<count<<" pre_end " <<pre_end<<" pre_count "<<pre_count<<"Pre_value"<<pre_value<<endl;

   }


   }

    for(int j=0;j<N;j++)
   {
    cout<<arr[j];
   }

   cout<<endl;


   for(int j=pre_end-pre_count;j<=pre_end;j++)
   {
    cout<<arr[j];
   }

   cout<<"\n Number of max length"<<count+1

   

 
 

    return 0;
}