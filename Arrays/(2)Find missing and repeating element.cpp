#include <bits/stdc++.h> 

using namespace std;

vector<int>repeatedNumber(const vector<int> &A) {
	long long int len = A.size();
	long long int Sum_N = (len * (len+1) ) /2, Sum_NSq = (len * (len +1) *(2*len +1) )/6;
	long long int missingNumber=0, repeating=0;
	
	for(int i=0;i<A.size(); i++){
	Sum_N -= (long long int)A[i];
	Sum_NSq -= (long long int)A[i]*(long long int)A[i];
	}
	
	missingNumber = (Sum_N + Sum_NSq/Sum_N)/2;
	repeating= missingNumber - Sum_N;
	vector <int> ans;
	ans.push_back(repeating);
	ans.push_back(missingNumber);
	return ans;
	
}


int main(void){
		std::vector<int> v = {4, 3, 6, 2, 1, 6,7};
	vector<int> res = repeatedNumber(v);
	for(int x: res){
		cout<< x<<" ";
	}
	cout<<endl;
}
