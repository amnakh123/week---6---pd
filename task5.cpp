#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    double price;
    if(dayOfWeek== "Sunday"||dayOfWeek== "Saturday")
    {
        if(fruit=="banana")
        {
             price=2.7*quantity;
        }
        if(fruit=="apple")
        {
             price=1.25*quantity;
        }
        if(fruit=="orange")
        {
             price=0.9*quantity;
        }
         if(fruit=="grapefruit")
        {
             price=1.6*quantity;
        }
        if(fruit=="kiwi")
        {
             price=3*quantity;
        }
        if(fruit=="pineapple")
        {
             price=5.6*quantity;
        }
        if(fruit=="grapes")
        {
             price=4.2*quantity;
        }
        return price;
    
    }
    if(dayOfWeek!= "Sunday"||dayOfWeek!= "Saturday")
    {
         if(fruit=="banana")
        {
             price=2.5*quantity;
        }
        if(fruit=="apple")
        {
             price=1.2*quantity;
        }
        if(fruit=="orange")
        {
             price=0.85*quantity;
        }
         if(fruit=="grapefruit")
        {
             price=1.45*quantity;
        }
        if(fruit=="kiwi")
        {
             price=2.7*quantity;
        }
        if(fruit=="pineapple")
        {
             price=5.5*quantity;
        }
        if(fruit=="grapes")
        {
             price=3.85*quantity;
        }
        return price;
    }
}
main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout<< "Enter the name of fruit: ";
    cin>> fruit;
    cout<< "Enter the day of week: ";
    cin>> dayOfWeek;
    cout<< "Enter the quantity of fruit: ";
    cin>> quantity;
    cout<< "Total price of fruit: $"<<calculateFruitPrice(fruit, dayOfWeek, quantity);
}