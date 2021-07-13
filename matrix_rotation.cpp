#include <iostream>
#include <bits/stdc++.h>

void martix_Rotation(int mat[][4], int n);
void displayMatrix(int mat[4][4]);

int main() {
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    martix_Rotation(mat, 4);
    displayMatrix(mat);
}

void martix_Rotation(int mat[][4], int n)
{
    for (int x = 0; x < n / 2; ++x)
    {
        for (int y = x; y < n - 1 - x; ++y)
        {
            int temp = mat[x][y];
            mat[x][y] = mat[y][n - 1 - x];
            mat[y][n - 1 - x] = mat[n - 1 - x][n - 1 - y];
            mat[n - 1 - x][n - 1 - y] = mat[n - 1 - y][x];
            mat[n - 1 - y][x] = temp;
        }
    }
}

void displayMatrix(int mat[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            std::cout << mat[i][j];

        std::cout <<std::endl;
    }
    std::cout <<std::endl;
}
