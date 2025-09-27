

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
 	int n;
	vector<int> vec;
	string s = "NO SOLUTION";

	cin>>n;
	
	if(n == 2 || n == 3) {
		cout<<s<<endl;
		return 0;
	}
	if(n == 1){
		cout<<1<<endl;
		return 0;
	}
	for(int i = 2; i<=n; i+=2){
		cout<<i<<" ";
	}
	for(int i = 1; i<=n; i+=2){
		cout<<i<<" ";
	}
	
	cout<<endl;
	system("pause");
}
