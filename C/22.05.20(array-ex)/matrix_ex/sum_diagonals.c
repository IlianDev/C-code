// #include <stdio.h>
//     void main ()
//     {
 
//         static int array[10][10];
//         int i, j, m, n, a = 0, sum = 0;
 
//         printf("Enetr the order of the matix \n");
//         scanf("%d %d", &m, &n);
 
//         if (m == n ) 
//         {
 
//             printf("Enter the matrix\n");
//             for (i = 0; i < m; ++i)
//             {
//                 for (j = 0; j < n; ++j)
//                 {
//                     scanf("%d", &array[i][j]);
//                 }
//             }
 
//             printf("The given matrix is \n");
//             for (i = 0; i < m; ++i) 
//             {
//                 for (j = 0; j < n; ++j)
//                 {
//                     printf(" %d", array[i][j]);
//                 }
//                 printf("\n");
//             }
 
//             for (i = 0; i < m; ++i) 
//             {
//                 sum = sum + array[i][i];
//                 a = a + array[i][m - i - 1];
//             }
 
//             printf("\nThe sum of the main diagonal elements is = %d\n", sum);
//             printf("The sum of the off diagonal elements is   = %d\n", a);

//             int diff;
//             diff = a - sum;
//             printf("Difference between the diagonal elements is %d", diff);
 
//         }
 
//         else
//             printf("The given order is not square matrix\n");
 
//     }


#include <stdio.h>
// main function
int main()
{
  // matrix A 
  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  // declare sum variable
  int sum = 0;
  
  // iterate through the matrix
  // outer loop for row
  for (int i = 0; i < 3; i++) 
  {
    // inner loop for column
    for (int j = 0; j < 3; j++) 
    {
      // condition to find diagonal element
      if(i == j) {
       // calculate sum
       sum += matrix[i][j];
      }
    }
  }

  // display matrix
  printf("Matrix = \n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n"); // new line
  }

  // display sum of diagonal elements
  printf("Sum of diagonal elements = %d\n", sum);

  return 0;
}