#include<iostream>
using namespace std;

float amountDue(char service, char time, int min)
{
    float minutes=min-50;
    if((service == 'r'|| service == 'R')&&(min<=50))
    {
        float amount=10;
        return amount;
    }
    if((service == 'r'|| service == 'R')&&(min>50))
    {
        float amount=min*0.2;
        return amount;
    }
      if((service == 'p'|| service == 'P')&&(min>75)&&(time == 'd'||time== 'D'))
      {
        float amount=min*0.1;
        return amount;
      }
        if((service == 'p'|| service == 'P')&&(min<=75)&&(time == 'd'||time== 'D'))
        {
            float amount=25;
            return amount;
        }
     if((service == 'p'|| service == 'P')&&(min<=100)&&(time == 'n'||time== 'N'))
       {
        float amount=25;
        return amount;
       }   
               if((service == 'p'|| service == 'P')&&(min>100)&&(time == 'n'||time== 'N'))
               {
                float amount=min*0.05;
                return amount;
               }
}                             
               string ServiceType(char service)
               {
                if(service== 'p'||service== 'P')
                {
                    return "Premium";
                }
                   if(service== 'R'||service== 'r')
                   {
                    return "Regular";
                   }
               }
main()
{
    char service, time;
    int min;
    cout<< "Enter the service code (R/r for regular, P/p for premium): ";
    cin>> service;
     if(service == 'p'|| service == 'P')
     {
        cout<< "Enter time of the call (D/d for day, N/n for night): ";
        cin>> time;
        cout<< "Enter the number of minutes used: ";
        cin>> min;
        cout<< "Service Type: "<<ServiceType(service)<<endl;
        cout<< "Total Minutes Used: "<<min<<" minutes"<<endl;
        cout<< "Amount Due: $"<<amountDue(service, time, min)<<endl;
     }
       if(service == 'r'|| service == 'R')
     {
        
        
        cout<< "Enter the number of minutes used: ";
        cin>> min;
        cout<< "Service Type: "<<ServiceType(service)<<endl;
        cout<< "Total Minutes Used: "<<min<<" minutes"<<endl;
        cout<< "Amount Due: $"<<amountDue(service, time, min)<<endl;
     }
}

