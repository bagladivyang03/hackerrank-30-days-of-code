/*
Task
Given set S = {1,2,3,...,N} . Find two integers, A and B(where A<B), from set S such that the value of A&B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.

Input Format

The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines defines a test case as 2 space-separated integers, N and K, respectively.


Output Format
For each test case, print the maximum possible value of A&B a new line.

Sample Input
3
5 2
8 5
2 2

Sample Output
1
4
0
*/

#include <bits/stdc++.h>
using namespace std;

void max_possible_value(int n , int k)
{
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = (i+1); j <= n; j++)
        {
          int result = i&j;
           if((result > temp)&&(result < k))
           {
               temp = result;
           }
        }
    }
    std::cout<< temp<<std::endl;
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int n,k;
        cin>>n>>k;
        max_possible_value(n,k);
    }
}
