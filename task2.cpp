#include<iostream>
using namespace std;

float calculateAverage(float marksEng, float marksMaths, float marksChem, float marksSS, float marksBio);
string calculateGrade(float percentage);
main()
{
      float marksEng, marksMaths, marksChem, marksSS, marksBio;
      string name;
      cout<< "Enter student name: ";
      cin>> name;
      cout<< "Enter marks for English: ";
      cin>> marksEng;
      cout<< "Enter marks for Maths: ";
      cin>> marksMaths;
      cout<< "Enter marks for Chemistry: ";
      cin>> marksChem;
      cout<< "Enter marks for Social Science: ";
      cin>> marksSS;
      cout<< "Enter marks for Biology: ";
      cin>> marksBio;
      float percentage=calculateAverage(marksEng, marksMaths, marksChem, marksSS, marksBio);
      string result=calculateGrade(percentage);
      cout<< "Student Name: "<<name<<endl;
       cout<< "Percentage: "<<percentage<<"%";
      cout<< "Grade: "<<result<<endl;
      
   
}
float calculateAverage(float marksEng, float marksMaths, float marksChem, float marksSS, float marksBio)
{
    float sum=(marksEng+marksMaths+marksChem+marksSS+marksBio);
    float percentage=(sum/500)*100;
    return percentage;
     
}
string calculateGrade(float percentage)
{
     
    
  if(percentage>=90&&percentage<=100)
  {
    return "A+";
  }
if(percentage>=80&&percentage<=90)
  {
    return "A";
  }
  if(percentage>=70&&percentage<=80)
  {
    return "B+";
  }
  if(percentage>=60&&percentage<=70)
  {
    return "B";
  }
  if(percentage>=50&&percentage<=60)
  {
    return "C";
  }
  if(percentage>=40&&percentage<=50)
  {
    return "D";
  }
  if(percentage<40)
  {
    return "F";
  }
}