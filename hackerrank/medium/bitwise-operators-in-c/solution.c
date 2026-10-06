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
    
    // Loop through all unique pairs (i, j) where i < j
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            
            // Check Bitwise AND
            int and_val = i & j;
            if (and_val < k && and_val > max_and) {
                max_and = and_val;
            }
            
            // Check Bitwise OR
            int or_val = i | j;
            if (or_val < k && or_val > max_or) {
                max_or = or_val;
            }
            
            // Check Bitwise XOR
            int xor_val = i ^ j;
            if (xor_val < k && xor_val > max_xor) {
                max_xor = xor_val;
            }
        }
    }
    
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}

