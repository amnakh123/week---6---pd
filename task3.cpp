#include<iostream>
using namespace std;

string zodiacSign(int date, string month);
main()
{
    int date;
    string month;
    cout<< "Enter the day of birth: ";
    cin>> date;
    cout<< "Enter the month of birth (e.g., January, February): ";
    cin>> month;
    string result=zodiacSign(date, month);
    cout<< "Zodiac Sign: "<<result;
}
string zodiacSign(int date, string month)
{
    
    
        if((month=="March"&& date>=21&& date<=31)||(month=="April"&& date>=1 && date<=19))
       
            {
                  return "Aries";
            }
          
        
         if((month=="April"&& date>=20&& date<=30)||(month=="May"&& date>=1&& date<=20))
        {
            return "Taurus";
        }
        if((month=="May"&& date>=21 && date<=31)||(month=="June"&& date>=1 && date<=20))
            {
                return "Gemini";
            }                
         if((month=="june"&&day>=21&&day<=30)||(month=="July"&&day>=1&&day<=22))
{
    return "Cancer";
}
                
                if((month=="July"&& date>=23 && date<=31)||(month=="August"&& date>=1 && date<=22))
                    {
                        return "Leo";
                  }
                  if((month=="August"&& date>=23 && date<=30)||(month=="September"&& date>=1 && date<=22))
                    {
                        return "Virgo";
                    }
                    if((month=="September"&& date>=23 && date<=30)||(month=="October"&& date>=1 && date<=22))
                        {
                            return "Libra";
                        }
                        
                    if((month=="November"&& date>=1 && date<=21)||(month=="October"&& date>=23 && date<=31))
                        {
                            return "Scorpio";
                        }
                        
                    if((month=="November"&& date>=22 && date<=30)||(month=="December"&& date>=1 && date<=21))
                        {
                            return "Sagittarious";
                        }
                    if((month=="January"&& date>=1 && date<=19)||(month=="December"&& date>=22 && date<=31))
                        {
                            return "Capricorn";
                        }
                        if((month=="January"&& date>=20 && date<=31)||(month=="February"&& date>=1 && date<=18))
                        {
                            return "Aquarious";
                        }
}    

                    
                  