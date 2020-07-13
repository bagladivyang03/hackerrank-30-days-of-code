/*
Task
Complete the Difference class by writing the following:

A class constructor that takes an array of integers as a parameter and saves it to the elements instance variable.
A computeDifference method that finds the maximum absolute difference between any 2 numbers in N and stores it in the maximum difference instance variable.

Input Format
You are not responsible for reading any input from stdin. The locked Solution class in your editor reads in  lines of input; the first line contains N, and the second line describes the elements array.

Output Format
You are not responsible for printing any output; the Solution class will print the value of the maximumdifference instance variable.

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
      Difference(vector<int> a){
          elements = a;

      }
    void computeDifference(){
        short int min = 999;
        short int max = 0;
        for(short int i=0;i<elements.size();i++){
            if(elements[i] < min)
                min = elements[i];
            if(elements[i] > max)
                max = elements[i];
        }
        maximumDifference = max - min;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
