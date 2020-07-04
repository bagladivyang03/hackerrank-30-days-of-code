/*
Objective
In this challenge, we're going to use loops to help us do some simple math. Check out the Tutorial tab to learn more.

Task
Given an integer, n, print its first 10 multiples. Each multiple n*i (where 1<=i<=10) should be printed on a new line in the form: n x i = result.

Input Format

A single integer,n .

Constraints

Output Format

Print  lines of output; each line i (where 1<= i <=10) contains the result of n*i in the form:
n x i = result.

Sample Input

2
Sample Output

2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20

*/

//C++ Solution

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i =1 ; i<=10 ;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
