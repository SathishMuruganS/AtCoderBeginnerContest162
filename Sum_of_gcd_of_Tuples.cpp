/**
Problem Statement

       K    K    K
Find   ∑    ∑    ∑    gcd(a,b,c).
       a=1  b=1  c=1

Here gcd(a,b,c) denotes the greatest common divisor of a,b, and c.

Constraints
1 ≤ K ≤ 200
K is an integer.

Input
Input is given from Standard Input in the following format:
K

Output

                     K    K    K
Print the value of   ∑    ∑    ∑    gcd(a,b,c).
                     a=1  b=1  c=1
                    
Print the value of  ∑

Sample Input 1 
2

Sample Output 1 
9

gcd(1,1,1)+gcd(1,1,2)+gcd(1,2,1)+gcd(1,2,2)+gcd(2,1,1)+gcd(2,1,2)+gcd(2,2,1)+gcd(2,2,2)

=1+1+1+1+1+1+1+2=9
**/

#include <iostream>

using namespace std;


int gcd(int a, int b, int c){
    int min_val = min(a,min(b,c));
	
    int gcd_val = 1; 
    for (int i =1;i<=min_val; i++){
        if (((a%i) == 0) && ((b%i) == 0) && ((c%i) == 0)){
            gcd_val = max(gcd_val, i);
        }
    }

    return gcd_val;
}

int main()
{
    int n;
    cin>>n;
	
    long long sum =0;
	
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            for(int k = 1;k<=n;k++){
                sum += gcd(i,j,k);
            }
        }
    }
	
    cout<<sum<<endl;
    return 0;
}
