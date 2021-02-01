
// Function to check power of two
bool isPowerofTwo(long long n){
    
    // Your code here   
    return !(n & (n-1)) && n>0;
    
}