/*
Task
Given a base-10 integer,n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.

Input Format
A single integer,n.

Constraints
1<= n <=10^6

Output Format
Print a single base-10 integer denoting the maximum number of consecutive 1's in the binary representation of n.

Sample Input 1
5

Sample Output 1
1

Sample Input 2
13

Sample Output 2
2

*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int counter =0,maxcounter = 0;
    int n1, num =0;
    while(n){
        n1 = n%2;
        counter = (counter + n1) * n1;
        maxcounter = max(counter,maxcounter);
        n = n/2; 
    }
    cout<<maxcounter;
    return 0;
}
