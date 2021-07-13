#include <iostream>
#include <vector>
#include <utility>

void zero_matrix(int mat[][5], int n);
void displayMatrix(int mat[4][5]);

int main() {
    int mat[4][5] = {{1, 2, 3, 4, 5}, {5, 0, 7, 8, 6}, {9, 10, 11, 12, 7}, {13, 14, 3, 15, 16}};
    zero_matrix(mat, 4);
    displayMatrix(mat);
}

void zero_matrix(int mat[][5], int n) {
    std::vector<std::pair<int, int>> vec;
    for (int x = 0; x < n; ++x)
    {
        for (int y = 0; y < 5; ++y)
        {
            if(mat[x][y] == 0){
                vec.push_back(std::make_pair(x,y));
            }
            
        }
    }
    for(int m = 0; m < vec.size(); ++m) {
        for( int i = 0; i < n; ++i) {
            mat[i][vec[m].second] = 0;
            for( int j = 0; j < 5; ++j){
                mat[vec[m].first][j] = 0;
            }
        }
    }
}

void displayMatrix(int mat[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
            std::cout << mat[i][j] << " ";
            std::cout <<std::endl;
    }
    std::cout <<std::endl;
}
