/*
The task is to check the given no is prime or not but its main is to have run time complexity of O(squareroot(n)).

Fow whole description of problem visit :- https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    while(n-- > 0){
        int t,flag=0;
        cin>>t;
        if(t==1){
            cout<<"Not prime"<<endl;
        }
        else{
        for(int i=2;i*i<=t;i++){
            if(t%i==0){
                flag =1 ;
                break;
            }
        }
        if(flag==0)
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
        }
    }
    return 0;
}
