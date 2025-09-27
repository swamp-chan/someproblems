
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string seq;
	int i, count,index, m = 0;

	cin>>seq;
	for(i = 0; i<seq.length(); i++){
		count = 1;
		index = i;
		while(seq[index] == seq[index+1]){
			count++;
			index++;
		}
		i += count-1;
		m = max(m, count);
	}
	cout<<m<<endl;
	//system("pause");
	return 0;
}


