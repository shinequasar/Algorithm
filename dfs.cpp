#include <iostream>
#include <vector>
#include <quequ>

using namespace std;

int number = 7; //Ž���� �� �� ���� ��  .
int c[8];  //check�� ����. Ž���� �߳� ���߳� üũ��. 
vector<int> a[8]; //Ž�����. 

void dfs(int start){
	if(c[start]) return;
	c[start] = true;
	cout << x << endl;
	for(int i=0; i<a[x].size();i++){
		int y = a[x][i];
		dfs(y);
	}
} 
