
#include <bits/stdc++.h>
using namespace std;

void zeroMatrix(vector<vector<int>> &matrix)
{
	int row = matrix.size();
	int col = matrix[0].size();
    int col0 = 1;
    for(int i=0; i<col; i++){
		if(matrix[0][i] == 0) col0 = 0;
	}

	for(int i=0; i<row; i++){
		if(matrix[i][0] == 0) matrix[0][0] = 0;
	}

	for (int i=1; i < row; i++) {
		for(int j=1; j< col; j++) {
			if(matrix[i][j] == 0){
              matrix[i][0] = 0;
			  matrix[0][j] = 0;
			}
		}
	}

	for (int i=1; i < row; i++) {
		for(int j=1; j< col; j++) {
			if(matrix[i][0] == 0 || matrix[0][j] ==0 ){
              matrix[i][j] = 0;
			}
		}
	}

	for(int i=0; i<row; i++){
		if(matrix[0][0] == 0){
			matrix[i][0] = 0;
		}
	}

	for(int i=0; i<col; i++){
		if(col0 == 0){
			matrix[0][i] = 0;
		}
	}
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    zeroMatrix(matrix);

    cout << "The Final matrix is: \n";
    for (auto it : matrix) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
