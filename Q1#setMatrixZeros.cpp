#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();
	vector<vector<int>>matrixCopy(n, vector<int>(m));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			matrixCopy[i][j] = matrix[i][j];
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(matrixCopy[i][j]==0){
				for(int k = 0; k<n; k++){
					matrix[k][j]=0;
				}
				for(int l = 0; l<m; l++){
					matrix[i][l] = 0;
				}
			}
		}
	}
}
