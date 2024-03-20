#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int pints[] = {a,b,c,d};
    int max = pints[0];
    for(int i = 1; i < (int)(sizeof(pints) / sizeof(pints[0])); i +=1)
    {
        if(max < pints[i])
        {
            max = pints[i];
        }
    }
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
