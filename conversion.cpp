#include<iostream>
#include<math.h>

using namespace std;

int num_reverse(int num)
{   int sum=0;
    while(num>0)
    {
        sum=sum*10+num%10;
        num/=10;
    }
}

string char_reverse(string a)
{   
    int len=0;
    for(int i=0;;i++ )
    {
        if(a[i]!='\0')
        {
           len++;
        }
        else
        {
            break;
        }
    }
    
    char temp;
    for(int j=0;j<=len/2;j++)
    {
        temp=a[j];
        a[j]=a[len-j-1];
        a[len-j-1]=temp;


    }

}

int to_decimal(int a, int b)
{
    int sum=0;
    int count=0;
    switch(b)
    {
             
    case  1 :    
                while(a>0)
                {
                   int rem=0;
                   rem=a%10;
                    a=a/10;
                   sum+=rem*pow(2,count);
                   count++;
                }
                
               break; 
    case  2 :    
                while(a>0)
                {
                   int rem=0;
                   rem=a%10;
                    a=a/10;
                   sum+=rem*pow(8,count);
                   count++;
                }
               break;
   
               


    }            
    return sum;
}



int decimal_to(int a)
{
    int sum=0;
   
    switch(a)
    {
             
    case  1 :    
                while(a>0)
                {
                   int rem=0;
                   rem=a%2;
                    a=a/2;
                   sum=sum*10+rem;
                  
                }
            sum=reverse(sum);
               break; 
    case  2 :    
                while(a>0)
                {
                   int rem=0;
                   rem=a%8;
                    a=a/8;
                   sum=sum*10+rem;
                }
                sum=reverse(sum);
               break;
          
    }            
    return sum;

}

string def_char_int_of_hexa(string a)
{
    if(a=="A")
    {
        return "10";
    }

    else if (a=="10")
    {
        return "A";
    }
        else if (a=="B")
    {
        return "11";
    }
        else if (a=="11")
    {
        return "B";
    }
        else if (a=="C")
    {
        return "12";
    }
        else if (a=="12")
    {
        return "C";
    }
        else if (a=="D")
    {
        return "13";
    }

        else if (a=="13")
    {
        return "D";
    }
        else if (a=="E")
    {
        return "14";
    }
        else if (a=="14")
    {
        return "E";
    }
        else if (a=="15")
    {
        return "F";
    }
        else if (a=="F")
    {
        return "15";
    }
    

}

string to_hexadecimal(int a)
{
       string hexa;
       int num=0;

       while(a>0)
       {
         int rem=a%16;
         

       } 
       
       
}




int main()
{  
     

    cout<<to_decimal(110,1);





    return 0;
}


