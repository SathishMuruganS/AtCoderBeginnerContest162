/**
Problem Statement
Let us define the FizzBuzz sequence a1,a2,...  as follows:

If both 3 and 5 divides i,ai = FizzBuzz.
If the above does not hold but 3 divides i, ai = Fizz.
If none of the above holds but 5 divides i, ai = Buzz.
If none of the above holds, ai = i.

Find the sum of all numbers among the first N terms of the FizzBuzz sequence.

Constraints
1 ≤ N ≤ 10^6

Input
Input is given from Standard Input in the following format:

N

Output
Print the sum of all numbers among the first N terms of the FizzBuzz sequence.

Sample Input 1

15

Sample Output 1

60

The first 15 terms of the FizzBuzz sequence are:

1,2,Fizz,4,Buzz,Fizz,7,8,Fizz,Buzz,11,Fizz,13,14,FizzBuzz

Among them, numbers are 1,2,4,7,8,11,13,14, and the sum of them is 60.

**/

#include <iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;

    long long sum = 0; 
    for(long long i = 1; i<= n; i++){
        if (((i < 3) || ((i%3) != 0)) && (i<5 || ((i%5) != 0))){
            sum +=i;
        }
    }
    cout<<sum<<endl;
}
