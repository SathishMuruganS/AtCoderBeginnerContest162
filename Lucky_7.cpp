/**
Problem Statement
Given is a three-digit integer N. Does N contain the digit 7?

If so, print Yes; otherwise, print No.

Constraints
100 ≤ N ≤ 999

Input
Input is given from Standard Input in the following format:

N

Output
If N contains the digit 7, print Yes; otherwise, print No.

Sample Input 1 
117

Sample Output 1 
Yes

117 contains 7 as its last digit.

Sample Input 2 
123

Sample Output 2 
No

123 does not contain the digit 7.

Sample Input 3 
777

Sample Output 3 
Yes

**/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
  
    int val = 0;
    
    while (n > 0){
        val = n%10;
        if (val == 7){
            cout<<"Yes";
            return 0;
        }
        n /=10;
    }
    cout<<"No";

    return 0;
}
