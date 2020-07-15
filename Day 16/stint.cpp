/*
Task
Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.
Note: You must use the String-to-Integer and exception handling constructs built into your submission language. If you attempt to use loops/conditional statements, you will get a 0 score.

Input Format
A single string,S.


Output Format
Print the parsed integer value of , S or Bad String if S cannot be converted to an integer.

Sample Input 0
3

Sample Output 0
3

Sample Input 1
za

Sample Output 1
Bad String

*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string S;
    cin >> S;
    try{
        int no;
        no = stoi(S);
        cout<<no<<endl;
    }
    catch(exception a){
        cout<<"Bad String"<<endl;
    }
    return 0;
}
