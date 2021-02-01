bool isEven(int n){
    if((n^1)==n+1)
    return true;
    else
    return false;
}
bool isEven(int n){
    return !(n&1);
}

bool isEven(int n){
    if((n|1)==n+1)
    return true;
    else
    return false;
}
