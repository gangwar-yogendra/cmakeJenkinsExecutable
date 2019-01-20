#include "ZeroMatrix.h"
#include <iostream>

int main(int argc, char** argv)
{
    bool mat[R][C] = { {1, 0, 0, 1}, 
                       {0, 0, 1, 0}, 
                       {0, 0, 0, 0}}; 
  
    std::cout << "Input Matrix \n"; 
    printMatrix(mat); 
  
    modifyMatrix(mat); 
  
    std::cout<<"Matrix after modification \n"; 
    printMatrix(mat); 
  
    return 0;     
}
