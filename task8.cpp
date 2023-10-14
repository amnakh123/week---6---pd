#include<iostream>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    string yearType;
    int holidays, hometownWeekends;
    cout<< "Enter year type: ";
    cin>> yearType;
    cout<< "Enter number of holidays: ";
    cin>> holidays;
    cout<< "Enter number of weekends: ";
    cin>> hometownWeekends;
    int result=calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout<<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int normalweekends=48-hometownWeekends;
    int holidayPlay=(holidays*2)/3;
    int weekendsPlay=(normalweekends*3)/4;
    int totalPlay=weekendsPlay+holidayPlay+hometownWeekends;
    if(yearType=="leap")
    {
      totalPlay = totalPlay+(totalPlay*0.15);
        return totalPlay;
    }
    if(yearType=="normal")
    {
        return totalPlay;
    }
}