#include <iostream>
#include <vector>
#include <quequ>

using namespace std;

int number = 7; //탐색을 할 총 원소 수  .
int c[8];  //check의 약자. 탐색을 했나 안했나 체크용. 
vector<int> a[8]; //탐색대상. 

void dfs(int start){
	if(c[start]) return;
	c[start] = true;
	cout << x << endl;
	for(int i=0; i<a[x].size();i++){
		int y = a[x][i];
		dfs(y);
	}
} 
