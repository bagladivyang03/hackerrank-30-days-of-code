/*
Task
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

1.If the book is returned on or before the expected return date, no fine will be charged (i.e.:fine = 0) .
2.If the book is returned after the expected return day but still within the same calendar month and year as the expected return date,fine = 15Hackos X (the number of days late) .
3.If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500Hackos X (the number of months late) .
4.If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.

Input Format
The first line contains 3 space-separated integers denoting the respective day, month, and year on which the book was actually returned.
The second line contains 3 space-separated integers denoting the respective day,month , and year on which the book was expected to be returned (due date).

Constraints
1<= D <= 31
1<= M <= 12
1<= M <= 3000
It is guarnteed that the dates will be valid Gregorian calendar dates.

Output Format
Print a single integer denoting the library fine for the book received as input.

Sample Input
9 6 2015
6 6 2015

Sample Output
45

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int aday,amonth,ayear;
    int eday,emonth,eyear;
    cin>>aday>>amonth>>ayear;
    cin>>eday>>emonth>>eyear;
    int dday = aday - eday;
    int dmonth = amonth - emonth;
    int dyear = ayear - eyear;
    int fine;
    if(dyear<0){
       fine = 0; 
    }
    else{
    if(dyear > 0)
        fine = 10000;
    else if(dmonth > 0 )
        fine = 500 * dmonth;
    else if(dday > 0)
        fine = 15 * dday;
    else 
        fine = 0;
    }
    cout<<fine;
    return 0;
}

