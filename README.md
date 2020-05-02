# Important Interview Questions
  ## 1 .Printing brackets in Matrix Chain Multiplication Problem

      Given a sequence of matrices, find the most efficient way to multiply these matrices together. The problem is not actually      to perform the multiplications, but merely to decide in which order to perform the multiplications.

    We have many options to multiply a chain of matrices because matrix multiplication is associative. In other words, no matter   how we parenthesize the product, the result will be the same. For example, if we had four matrices A, B, C, and D, we would     have:

  (ABC)D = (AB)(CD) = A(BCD) = ....
  ---------------------------------
  
##  2. Maximum sum path in a matrix from top to bottom and back
Given a matrix of dimension N * M. The task is find the maximum sum of path from arr[0][0] to arr[N – 1][M – 1] and back from arr[N – 1][M – 1] to arr[0][0].

On the path from arr[0][0] to arr[N – 1][M – 1], you can traverse in down and right directions and on the path from arr[N – 1][M – 1] to arr[0][0], you can traverse in up and left directions.

Note: Both the path must not be equal i.e. there has to be at least one cell arr[i][j] which is not common in both the paths.
Input: 
mat[][]= {{1, 0, 3, -1},
          {3, 5, 1, -2},
          {-2, 0, 1, 1},
          {2, 1, -1, 1}}
Output: 16
