#include <bits/stdc++.h> 
// https://www.youtube.com/watch?v=W6La6f7POk0
void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();

	vector<int>X,Y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
                  if (matrix[i][j] == 0) {
                    X.push_back(i);
                    Y.push_back(j);
                  }
                }
        }

	//row->0
	for(int i=0;i<X.size();i++){
		int index=X[i];
		for(int j=0;j<m;j++){
			matrix[index][j]=0;
		}
	}
	//column->0
	for(int i=0;i<Y.size();i++){
		int index=Y[i];
		for(int j=0;j<n;j++){
			matrix[j][index]=0;
		}
	}
}
