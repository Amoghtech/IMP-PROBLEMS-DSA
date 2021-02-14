
bool isSafe(int grid[N][N], int row, 
                       int col, int num)
{
    for (int x = 0; x <= 8; x++)
        if (grid[row][x] == num)
            return false;
    for (int x = 0; x <= 8; x++)
        if (grid[x][col] == num)
            return false;
    int startRow = row - row % 3, 
            startCol = col - col % 3;
  
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + 
                            startCol] == num)
                return false;

    return true;
}




bool solveSuduko(int grid[N][N], int row, int col)
{
    if (row == N - 1 && col == N)
        return true;
   if (col == N) {
        row++;
        col = 0;
    }
    if (grid[row][col] > 0)
        return solveSuduko(grid, row, col + 1);

    for (int num = 1; num <= N; num++) 
    {
        if (isSafe(grid, row, col, num)) 
        {
            
            grid[row][col] = num;
            if (solveSuduko(grid, row, col + 1))
                return true;
        }
        grid[row][col] = 0;
    }
    return false;
}



bool SolveSudoku(int grid[N][N])  
{ 
    // Your code here
return solveSuduko(grid,0,0);
}

void printGrid (int grid[N][N]) 
{
    // Your code here 
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            cout << grid[i][j] << " ";
        
    }
}