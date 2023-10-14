#include<iostream>
using namespace std;

string checkStudentStatus(int examHour, int examMin, int studentHour, int studentMin);
main()
{
    int examHour, examMin, studentHour, studentMin;
    cout<< "Enter Exam Starting Time (hour): ";
    cin>> examHour;
    cout<< "Enter Exam Starting Time (minutes): ";
    cin>> examMin;
    cout<< "Enter Student hour of arrival: ";
    cin>> studentHour;
     cout<< "Enter Student minutes of arrival: ";
    cin>> studentMin;
    cout<<checkStudentStatus(examHour, examMin, studentHour, studentMin);
    
}
string checkStudentStatus(int examHour, int examMin, int studentHour, int studentMin)
{
    int newExamMin=(examHour*60)+examMin;
    int newStudentMin=(studentHour*60)+studentMin;
    string result;
    if(newExamMin==newStudentMin)
    {
        result= "On time";
    }
    if(newExamMin>newStudentMin)
    {
        if((newExamMin-newStudentMin)<60)
        {
             result="Early\nTest:" +to_string(newExamMin-newStudentMin) + "\n" + to_string(newExamMin-newStudentMin) + " minutes before the start";
        }
        if((newExamMin-newStudentMin)>=60)
        {
            int newhours=(newExamMin-newStudentMin)/60;
            int newminutes=(newExamMin-newStudentMin)%60;
             result="Early\nTest:" +to_string(newExamMin-newStudentMin) + "\n" + to_string(newhours) + ":" + to_string(newminutes) + " hours before the start";
        }
            if(newExamMin<newStudentMin)
            {
                  if((newStudentMin-newExamMin)<60)
                  result="Late\nTest:" + to_string(newStudentMin-newExamMin) + "\n" + to_string(newStudentMin-newExamMin) + " minutes after the start";
            }
            
                  if((newStudentMin-newExamMin)>=60)
                  {
            
                  
                  int newhours=(newStudentMin-newExamMin)/60;
                  int newminutes=(newStudentMin-newExamMin)%60;
                  result="Late\nTest:" + to_string(newStudentMin-newExamMin) + "\n" + to_string(newhours) + ":" + to_string(newminutes) + " hours after the start";
                  }
                  return result;
    }
}
    

