#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;

	 while(t--){
		string s;
		cin>>s;
		string tmp=s;
		reverse(tmp.begin(),tmp.end());
		if(tmp==s){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	 }
	 return 0;
}
