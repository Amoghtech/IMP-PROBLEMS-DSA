string multiplyStrings(string s1, string s2) {
   //Your code here
    if((s1=="0" && s2.at(0)=='-') ){
         s2=s2.substr(1);
     }
     else if((s2=="0" && s1.at(0)=='-')){
         s1=s1.substr(1);
     }
   
     else if((s1.at(0) == '-' || s2.at(0) == '-') && 
        (s1.at(0) != '-' || s2.at(0) != '-' ) )
        cout<<"-";
     

    if(s1.at(0) == '-' && s2.at(0)!='-')
        {
            s1 = s1.substr(1);
        }
        else if(s1.at(0) != '-' && s2.at(0) == '-')
        {
            s2 = s2.substr(1);
        }
        else if(s1.at(0) == '-' && s2.at(0) == '-')
        {
            s1 = s1.substr(1);
            s2 = s2.substr(1);
        }
   
   
   
   int i1=0,carry=0,len1=s1.length(),len2=s2.length();
  int res[len1+len2]={0};
  
   for(int i=len1-1;i>=0;i--){
        carry=0;
       int n1=s1[i]-'0';
       int i2=0;
       for(int j=len2-1;j>=0;j--){
           int n2=s2[j]-'0';
           
           int sum=n1*n2+res[i1+i2]+carry;
           carry=sum/10;
           res[i1+i2]=sum%10;
       
           i2++;
       }
       if(carry>0)
       res[i1+i2]+=carry;
       
       i1++;
       
   }
   int i=0;
   for( i=len1+len2-1;i>=0;)
          {if(res[i]==0)
          i--;
          else
          break;}
          if(i==-1)
          return "0";
          
          string x="";
          while(i>=0){
              x=x+to_string(res[i--]);
          }
          return x;
}


















// C++ program to multiply two numbers represented
// as strings.
#include<bits/stdc++.h>
using namespace std;

// Multiplies str1 and str2, and prints result.
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";

    // will keep the result number in vector
    // in reverse order
    vector<int> result(len1 + len2, 0);

    // Below two indexes are used to find positions
    // in result. 
    int i_n1 = 0; 
    int i_n2 = 0; 
    
    // Go from right to left in num1
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        // To shift position to left after every
        // multiplication of a digit in num2
        i_n2 = 0; 
        
        // Go from right to left in num2             
        for (int j=len2-1; j>=0; j--)
        {
            // Take current digit of second number
            int n2 = num2[j] - '0';

            // Multiply with current digit of first number
            // and add result to previously stored result
            // at current position. 
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;

            // Carry for next iteration
            carry = sum/10;

            // Store result
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        // store carry in next cell
        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        // To shift position to left after every
        // multiplication of a digit in num1.
        i_n1++;
    }

    // ignore '0's from the right
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;

    // If all were '0's - means either both or
    // one of num1 or num2 were '0'
    if (i == -1)
    return "0";

    // generate the result string
    string s = "";
    
    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}

// Driver code
int main()
{
    string str1 = "33";
    string str2 = "22";
    
    if((str1.at(0) == '-' || str2.at(0) == '-') && 
        (str1.at(0) != '-' || str2.at(0) != '-' ))
        cout<<"-";


    if(str1.at(0) == '-' && str2.at(0)!='-')
        {
            str1 = str1.substr(1);
        }
        else if(str1.at(0) != '-' && str2.at(0) == '-')
        {
            str2 = str2.substr(1);
        }
        else if(str1.at(0) == '-' && str2.at(0) == '-')
        {
            str1 = str1.substr(1);
            str2 = str2.substr(1);
        }
    cout << multiply(str1, str2);
    return 0;
}






