#include <iostream>

int* min_max(int **vals,int num_rows, int num_cols){

    int min = vals[0][0];
    int max = vals[0][0];

    for(int i=0;i<num_rows; i++){
        for(int j=0;j<num_cols; j++){
            if(vals[i][j] < min){
                min = vals[i][j];
            } else if(vals[i][j] > max){
                max = vals[i][j];
            }
        }
    }

    int *out = new int[2];
    out[0] = min;
    out[1] = max;

    return out;
    
} 
