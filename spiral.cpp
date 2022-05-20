void spiralPrint(int **input, int nRows, int nCols)
{
    int row_start=0, row_end=nRows-1 ,col_start=0 ,col_end=nCols-1;
    while(row_start<=row_end && col_start<=col_end){
        //row start
        for(int col=col_start;col<=col_end;col++){
            cout<<input[row_start][col]<<" ";
        }
        row_start++;
        //for column end;
        for(int row=row_start;row<=row_end;row++){
            cout<<input[row][col_end]<<" ";
        }
        col_end--;
        //for row_end
        for(int col=col_end;col>=col_start;col-- ){
            cout<<input[row_end][col]<<" ";
           
        }
         row_end--;
        //for col_start
        for(int row=row_end;row>=row_start;row--){
            cout<<input[row][col_start]<<" ";
            
        }
        col_start++;
    }
}