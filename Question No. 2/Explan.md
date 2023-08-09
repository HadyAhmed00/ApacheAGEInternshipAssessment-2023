

1. **Recursion**:
   - **Pros**:
     - Simple and easy to understand.
     - Directly follows the mathematical definition of Fibonacci sequence.
   - **Cons**:
     - Inefficient for larger values of `n` due to redundant calculations (exponential time complexity: O(2^n)).
     - Can lead to stack overflow errors for large values of `n`.
   - **Time Complexity**: O(2^n)
   - **Space Complexity**: O(n) (due to call stack)

2. **Dynamic Programming (Memoization)**:
   - **Pros**:
     - Avoids redundant calculations by storing intermediate results (improved time complexity).
     - Can handle larger `n` values compared to simple recursion.
   - **Cons**:
     - Requires additional memory for memoization table (array).
     - Slightly more complex to implement compared to simple recursion.
   - **Time Complexity**: O(n)
   - **Space Complexity**: O(n) (memoization table)

3. **Optimal Approach (O(1) memory, O(n) time)**:
   - **Pros**:
     - Most efficient in terms of time complexity for calculating Fibonacci sequence.
     - Uses constant memory, suitable for very large `n` values.
   - **Cons**:
     - Requires understanding of the iterative approach.
     - Not as straightforward as the recursive approach for some programmers.
   - **Time Complexity**: O(n)
   - **Space Complexity**: O(1)

