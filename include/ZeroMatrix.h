#ifndef ZERO_MATRIX
#define ZERO_MATRIX

/* Modify matrix such that if matrix cell is 1
   then make all the cells of matrix of ith 
   row and jth colum as 1
*/

#define R 3
#define C 4
void modifyMatrix(bool mat[R][C]);
void printMatrix(bool mat[R][C]);

#endif /* ZERO_MATRIX */
