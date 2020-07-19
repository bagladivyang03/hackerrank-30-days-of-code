/*
In Day 20 the problem is just to sort the given no. of elements and have to print the three things:-
1.)Total no. os swaps required
2.)1st Element of the sorted array
3.)Last element of the sorted array.

Sample Input 0
3
1 2 3

Sample Output 0
Array is sorted in 0 swaps.
First Element: 1
Last Element: 3

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int t=0;
    for (int i =0 ; i< n ; i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                t++;
            }
        }
    }
    cout<<"Array is sorted in "<<t<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    // Write Your Code Here
    return 0;
}
