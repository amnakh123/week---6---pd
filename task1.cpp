#include<iostream>
using namespace std;

string decideActivity(string temp, string humidity);
main()
{
    string temp, humidity;
    cout<< "Enter temperature (warm or cold): ";
    cin>> temp;
    cout<< "Enter humididty (dry or humid): ";
    cin>> humidity;
    string result=decideActivity(temp, humidity);
    cout<< "Recommended activity: "<<result;
}
string decideActivity(string temp, string humidity)
{
   if(temp== "warm"&&humidity== "dry")
   {
     return "Play tennis";
   }
     if(temp== "warm"&&humidity== "humid")
   {
     return "Swim";
   }
     if(temp== "cold"&&humidity== "dry")
   {
     return "Play basketball";
   }
     if(temp== "warm"&&humidity== "humid")
   {
     return "Watch TV";
   }




}