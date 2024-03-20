//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    char c[6];
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    sprintf(c, "%d", n);
    
    int s;
    for(int i = 0; i < sizeof(c) / sizeof(c[0]); i += 1)
    {
        int si;
        si = (int)c[i] - 48;
        if(si > 0)
        {
            s += si;
        }
    }
    printf("%d\n", s);
    return 0;
}
