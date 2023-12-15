//                                         LAB  TASK
#include <iostream>
using namespace std;

int main() {
    //                                 Lab task 01
    // int matrix[3][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9}};

    // int leftDiagonalSum = 0;
    // int rightDiagonalSum = 0;

    // for (int i = 0; i < 3; ++i) {
    //     leftDiagonalSum += matrix[i][i];
    //     rightDiagonalSum += matrix[i][2 - i];
    // }

    // cout << "Left diagonal sum: " << leftDiagonalSum << endl;
    // cout << "Right diagonal sum: " << rightDiagonalSum << endl;
//                                          Lab task 02
//     void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             result[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
// }

//                                                       LAB TASK 02
//     int matrix1[3][3] = {{1, 2, 3},
//                          {4, 5, 6},
//                          {7, 8, 9}};

//     int matrix2[3][3] = {{9, 8, 7},
//                          {6, 5, 4},
//                          {3, 2, 1}};

//     int result[3][3];

//     addMatrices(matrix1, matrix2, result);

//     cout << "Sum of the two matrices:\n";
//     for (int i = 0; i < 3; ++i) {
    //     for (int j = 0; j < 3; ++j) {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }
//                                          Lab task  03
// void transposeMatrix(int mat[3][3]) {
//     int temp[3][3];

//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             temp[i][j] = mat[j][i];
//         }
//     }

//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             mat[i][j] = temp[i][j];
//         }
//     }
// }

    //                            Lab task   05

//     void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             result[i][j] = 0;
//             for (int k = 0; k < 3; ++k) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }

//
//     int matrix1[3][3] = {{1, 2, 3},
//                          {4, 5, 6},
//                          {7, 8, 9}};

//     int matrix2[3][3] = {{9, 8, 7},
//                          {6, 5, 4},
//                          {3, 2, 1}};

    // int result[3][3];

    // multiplyMatrices(matrix1, matrix2, result);

    // cout << "Resultant matrix after multiplication:\n";
    // for (int i = 0; i < 3; ++i) {
    //     for (int j = 0; j < 3; ++j) {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //                                         Lab   task   05
// void printTable(int num, int multiplier) {
//     if (multiplier <= 10) {
//         cout << num * multiplier << " ";
//         printTable(num, multiplier + 1);
//     }
// }

// 
//     int number = 15;
    
//     cout << "Multiplication table of 15:\n";
//     printTable(number, 1);
//                                        HOME TASK  
//                                   Home  task 01
// UNABLE TO PERFORM NOT TAUGHT IN CLASS

    return 0;
}