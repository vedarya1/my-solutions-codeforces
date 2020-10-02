#include<bits/stdc++.h>
using namespace std;

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n;
	cin >> n;
	vector<int> v;
//	map<int,int> map;
	for(int i = 0; i < 2*n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	//	map[v[i]] = i+1;
	}
	//sort(v.begin(),v.end());
	
	for(int i = 0; i < v.size(); i++) {
	   for(int j = i+1; j < v.size(); j++) {
	   	if(v[i] == v[j]){
	   		cout << i+1 << " " << j+1 << endl;
		   }
		 
	   }
	   
	   
	   
		
	}
	
}
