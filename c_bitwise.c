//https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
    for(int i = 1; i <= n; i += 1)
    {
        for(int j = i + 1; j <= n; j += 1)
        {
            int and = i & j;
            int or = i | j;
            int xor = i ^ j;
        
            if(and < k && and > max_and)
            {
                max_and = and;
            }
            if(or < k && or > max_or)
            {
                max_or = or;
            }
            if(xor < k && xor > max_xor)
            {
                max_xor = xor;
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
