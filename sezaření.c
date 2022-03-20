#include <stdio.h>

int main() {
    
    int n = 13;
    int a[13] = {1}; 
    int d = 7;
    for(int i = 1; i < n; i++){
        a[n] += d;
        printf("%d,",a[n]);
        }
    
    return 0;
}