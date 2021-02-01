bool ispowerof2(int n){
    return !(n && (n&n-1));
}



bool ispowerof2(int n){
    return ceil(log2(n))==floor(log2(n));
}
