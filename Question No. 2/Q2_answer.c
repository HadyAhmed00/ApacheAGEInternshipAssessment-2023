#include <stdio.h>
#include <stdlib.h>
/*
Recursion:
----------
Pros:
Simple and easy to understand.
Directly follows the mathematical definition of Fibonacci sequence.

Cons:
Inefficient for larger values of n due to redundant calculations (exponential time complexity).
Can lead to stack overflow errors for large values of n.

Time Complexity: O(2^n)
Space Complexity: O(n) (due to call stack)
*/
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

/*

Dynamic Programming (Memoization):
-----------------------------------
Pros:
Avoids redundant calculations by storing intermediate results (improved time complexity).
Can handle larger n values compared to simple recursion.

Cons:
Requires additional memory for memoization table (array).
Slightly more complex to implement compared to simple recursion.

Time Complexity: O(n)
Space Complexity: O(n) (memoization table)

*/

int fibonacciMemo(int n, int* memo) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo);
    return memo[n];
}

int fibonacciDP(int n) {
    int* memo = (int*)malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }
    int result = fibonacciMemo(n, memo);
    free(memo);
    return result;
}

/*

Optimal Approach :
-----------------
Pros:
Most efficient in terms of time complexity for calculating Fibonacci sequence.
Uses constant memory, suitable for very large n values.

Time Complexity: O(n)
Space Complexity: O(1)



*/
int fibonacciOptimal(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    return curr;
}

int main() {
    int n = 10;
    printf("Recursion output output for n = 10 %d: %d\n", n, fibonacciRecursive(n));

    printf("Dynamic Programming (Memoization) output for n = 10 %d: %d\n", n, fibonacciDP(n));

    printf("Optimal Approach output for n = 10 %d: %d\n", n, fibonacciOptimal(n));
    return 0;
}
