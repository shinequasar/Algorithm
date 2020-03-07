#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int number = 7; //탐색을 할 총 원소 수  .
int c[8];  //check의 약자. 탐색을 했나 안했나 체크용. 
vector<int> a[8]; //탐색대상. 

void bfs(int start){  //srart는 처음 탐색을 시작할수  
	queue<int> q;
	q.push(start);
	c[start] = true;//탐색했으니 true로! 
		while(!q.empty()){  //큐가 다 비기 전까지. 
			int x = q.front(); //첫 원소를 x에 담기. 
			q.pop(); //담았으니 뺴내고, 력 
			printf("%d", x); //출
				for(int i=0; i<a[x].size();i++){
					int y = a[x][i]; //탐색하는 원소(x)에 인접한 원소들(i) 탐색. 
					if(!c[y]){ //y 원소를 탐색 안했으면.
						q.push(y); //탐색시작하기위해 q에 넣기. 
						c[y]=true; //탐색했으니 true로! 
				}
			}
		} 
		
}
