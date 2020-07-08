/*
Task
Write a factorial function that takes a positive integer, N as a parameter and prints the result of N! (N factorial).

Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of 0.

Input Format
A single integer, N (the argument to pass to factorial).

Constraints
2<=N<=12
Your submission must contain a recursive function named factorial.


Output Format
Print a single integer denoting N!.

*/

#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    if(n<=0)
        return 1;
    else{
        return n*factorial(n-1);
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
