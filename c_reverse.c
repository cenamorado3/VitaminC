//https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    for(i = 0; i < num / 2; i += 1)
    {
        int ith;
        ith = arr[i];
        arr[i] = arr[num - (i + 1)];
        arr[num - (i + 1)] = ith;
    }
    
    for(int i = 0; i < num; i += 1)
      printf("%d ", arr[i]);
    return 0;
}
