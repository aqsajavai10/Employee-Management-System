
#include<iostream>
using namespace std;
int main ()
{
    float mark1;
    string studentname;
    float mark2;
    float mark3;
    float mark4;
    float mark5;
    cout<<"Enter Biology marks: ";
    cin>>mark1;
    cout<<"Enter Physics marks: ";
    cin>>mark2;
    cout<<"Enter Chemistry marks: ";
    cin>>mark3;
    cout<<"Enter Maths marks: ";
    cin>>mark4;
    cout<<"Enter English marks: ";
    cin>>mark5;
    float avg=(mark1+mark2+mark3+mark4+mark5)/5;
    cout<<"Your result is: " <<avg;
    
    return 0;


}