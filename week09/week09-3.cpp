//week09-3.cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(), N=matrix[0].size();
        vector<int> left(M);
        vector<int> up(N);
        for (int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if (matrix[i][j]==0){
                    left[i]=1;
                    up[j]=1;
                }
            }
        }
        for (int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if (left[i]==1 || up[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
