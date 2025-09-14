#include<iostream>
using namespace std;
int main ()
{
    float mark1;
    string studentname;
    float mark2;
    float mark3;
    cout<<"Enter Biology marks out of 100: ";
    cin>>mark1;
    cout<<"Enter Physics marks out of 100: ";
    cin>>mark2;
    cout<<"Enter Chemistry marks out of 100: ";
    cin>>mark3;
    float percentage=((mark1+mark2+mark3)/300)*100;
    cout<<"Your result is: " <<percentage;
    if(percentage>=90)
    {
        cout<<"Your grade is 'A'";
    }
    else if(percentage >=80 && percentage<90)
    {
        cout<<"Your grade is 'B'";
    }
    else if(percentage >=70 && percentage<80)
    {
        cout<< "Your grade is 'C'";
    }
    else if(percentage >=60 && percentage<70)
    {
        cout<< "Your grade is 'D'";
    }
    else if(percentage >=50 && percentage<60);
    {
        cout<<"Your grade is 'E'";
    }
    else if(percentage <50)
    {
        cout<<"You have failed :()"
    }
    
    else>50