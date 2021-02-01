// C++ program to print 
// matrix in zig-zag form 
#include <iostream> 
using namespace std; 
  
    // Method to print matrix in zig-zag form 
    void printZigZag(int row, int col, int a[][5]) 
    { 
        int evenRow = 0; //starts from the first row 
        int oddRow = 1; //starts from the next row 
  
        while (evenRow<row)  
        { 
            for (int i=0;i<col;i++) 
            { 
                // evenRow will be printed 
                        // in the same direction 
                cout<<a[evenRow][i] << " ";  
            } 
              
            // Skipping next row so as 
                // to get the next evenRow 
            evenRow = evenRow + 2;  
              
            if(oddRow < row) 
            { 
                for (int i=col-1; i>=0; i--) 
                { 
                // oddRow will be printed in 
                    // the opposite direction 
                cout<<a[oddRow][i] << " ";  
                } 
            } 
          
            // Skipping next row so as  
                // to get the next oddRow 
            oddRow = oddRow + 2;  
        }  
    } 
