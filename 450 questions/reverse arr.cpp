#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
}
string reverseWord(string str){
    int j=str.length()-1;
    for(int i=0;i<=j;i++,j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
return str;
    
  //Your code here
}