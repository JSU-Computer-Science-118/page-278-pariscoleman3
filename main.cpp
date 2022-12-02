// Paris Coleman J00964495 11/15/22
// Assignment page 278//Program: Sentinel-Controlled Loop
//This program computes and outputs the total number of boxes of
//cookies sold, the total revenue, and the average number of
 //boxes sold by each volunteer.
 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 
const string SENTINEL = "-1";
int main() 
{ 
string name; 
int numOfVolunteers;
int numOfBoxesSold;
int totalNumOfBoxesSold; 
double costOfOneBox; 
cout << fixed << showpoint << setprecision(2); 
cout << "Line 14: Enter each volunteer's name and "
       << "the number of boxes " << endl << " sold by each volunteer, ending " 
       << "with -1"; 
     
totalNumOfBoxesSold = 0;
 numOfVolunteers = 0;
cin >> name; 
while (name != SENTINEL) 
{ 
cin >> numOfBoxesSold; 
totalNumOfBoxesSold = totalNumOfBoxesSold 
+ numOfBoxesSold;
numOfVolunteers++; 
cin >> name; 
} 
cout << endl; 
cout << "Line 26: The total number of boxes sold: 34 "
        << totalNumOfBoxesSold << endl; 
cout << "Line 27: Enter the cost of one box: 3.50 "; 
cin >> costOfOneBox; 
cout << endl; 
cout << "Line 30: The total money made by selling cookies: 119.00"
  << totalNumOfBoxesSold * costOfOneBox << endl; 
if (numOfVolunteers != 0) 
cout << "Line 32: The average number of " 
       << "boxes sold by each volunteer: 11 " 
       << totalNumOfBoxesSold / numOfVolunteers << endl; 
else cout << "Line 34: No input." << endl; 
return 0;
} 

