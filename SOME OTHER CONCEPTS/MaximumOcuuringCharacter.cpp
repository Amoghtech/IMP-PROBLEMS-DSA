// character in given string str
char getMaxOccuringChar(char* str)
{
    // Your code here
    int a[26]={0};
    char res;
    int max=-32767;
    for(int i=0;i<strlen(str);i++){
        a[str[i]-'a']++;
        if(max<a[str[i]-'a']){
            max=a[str[i]-'a'];
            res=str[i];
        }
        else if(max==a[str[i]-'a'] && res>str[i]){
            res=str[i];
        }
    }
    return res;
}