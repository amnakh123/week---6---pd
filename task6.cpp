#include<iostream>
using namespace std;

string calculateHotelPrices(string month, int noOfStays);
main()
{
    string month;
    int noOfStays;
    cout<< "Enter the month (May, June, July, August, September, October): ";
    cin>> month;
    cout<< "Enter the number of stays: ";
    cin>> noOfStays;
    cout<< calculateHotelPrices(month, noOfStays);
}
    string calculateHotelPrices(string month, int noOfStays)
    {
        double pricestudio, priceapartment;
        string result;
    if(month=="May"||month=="October")
    {
        pricestudio=50;
        priceapartment=65;
        if(noOfStays>7&&noOfStays<=14)
        {
            pricestudio=pricestudio-(pricestudio*0.05);
        }
        else if(noOfStays>14)
        {
              pricestudio=pricestudio-(pricestudio*0.3);
              priceapartment=priceapartment-(priceapartment*0.1);
        }
    }
       else if(month=="June"||month=="September")
    {
         pricestudio=75.2;
         priceapartment=68.7;
         if(noOfStays>14)
         {
            pricestudio=pricestudio-(pricestudio*0.2);
            priceapartment=priceapartment-(priceapartment*0.1);
         }
    }
       else if(month=="July"||month=="August")
    {
        pricestudio=76;
        priceapartment=77;
        if(noOfStays>14)
        {
            priceapartment=priceapartment-(priceapartment*0.1);
        }
    }
    float totalAmountApartment=priceapartment*noOfStays;
    float totalAmountStudio=pricestudio*noOfStays;
    result="Apartment: "+ to_string(totalAmountApartment) + "$.\nStudio: " + to_string(totalAmountStudio) + "$.";
    return result;
}
 
   
   