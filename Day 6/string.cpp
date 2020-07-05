/*
Objective
Today we're expanding our knowledge of Strings and combining it with what we've already learned about loops. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).

Note: 0 is considered to be an even index.

Input Format

The first line contains an integer, T (the number of test cases).
Each line i of the T subsequent lines contain a String,S.

Constraints
 1<= T <=10
 2<= length of S <= 1000
 
 Output Format

For each String S (where 0<= j < T-1), print Sj's even-indexed characters, followed by a space, followed by Sj's odd-indexed characters.

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() { 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        string s1,s2;
        for(int j=0;j<s.size();j++){
            if(j%2==0){
                s1+=s[j];
            }
            else{
                s2+=s[j];
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
