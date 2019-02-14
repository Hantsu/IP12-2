/*************************************************
 File:          IP12-2.cpp
 Author:        Max T.
 Navigator:     Robert C.
 Date:          2/14/19
 
 Description:  Teachers in most school districts are paid on a schedule that provides a salary based on their
                number of years of teaching experience. For example, a beginning teacher in the Government
                Camp School District might be paid $42,000 the first year. For each year of experience after this
                first year, up to 10 years, the teacher receives a 2% increase over the preceding value. Write a
                program that displays a salary schedule, in tabular format, for teachers in Government Camp.
                The inputs from the user are the starting salary (from $42,000 to $54,000), the percentage
                increase and the number of years in the schedule. Each row in the schedule should contain the
                year number and the salary for that year.
**************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Function prototypes
void instructions();                    // shows "salary schedule"
int yearsInCal();                   // Gets number of years in the schedule, user input
float beginSal();                   // gets starting sal
float salRaise ();                     // The percentage increase
float get_updatedSal (int, float, float);   // New Salary #

int main()      //main int 
{
    int years;
    float startingSal;
    float raise;
    float newSal;

    instructions();
    years = yearsInCal();
    startingSal = beginSal();
    raise = salRaise ();
    cout << "Years \t\tSalary" << endl;
    get_updatedSal(years, startingSal, raise);
}

// defining the functions below

void instructions()     // void functions for instructions
{
    cout << "\tSalary Schedule\n";
    return;}


int yearsInCal()        //function to get years in the calendar
{
    int years;
    do
    {
    cout << "Enter the number of years in the schedule, up to 10 years: " <<endl;
    cin >> years;
    }
     while (years < 1 || years > 10);
     return years;}


float beginSal()            //function to find startinf salary
{
    float startingSal;
    do
    {
    cout << "   Starting salary? (From 42,000 to 54,000: )" <<endl;
    cin >> startingSal;
    }
     while (startingSal < 42000 || startingSal > 54000);
     return startingSal;}


float salRaise ()           //function to get the raise
{
    float raise;
    cout << "What percent is your annual raise?: " <<endl;
    cin >> raise;
    raise = raise / 1000;
    return raise;}


float get_updatedSal (int years, float startingSal, float raise)    //function to get the new salary
{
    float newSal;
    do
    {
    newSal = startingSal * pow((1+raise),years);
    cout << years << setw(23) << newSal << endl;
    years--;
    }
    while (years >= 0);
    return 0;}
