#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int number = 7; //Ž���� �� �� ���� ��  .
int c[8];  //check�� ����. Ž���� �߳� ���߳� üũ��. 
vector<int> a[8]; //Ž�����. 

void bfs(int start){  //srart�� ó�� Ž���� �����Ҽ�  
	queue<int> q;
	q.push(start);
	c[start] = true;//Ž�������� true��! 
		while(!q.empty()){  //ť�� �� ��� ������. 
			int x = q.front(); //ù ���Ҹ� x�� ���. 
			q.pop(); //������� ������, �� 
			printf("%d", x); //��
				for(int i=0; i<a[x].size();i++){
					int y = a[x][i]; //Ž���ϴ� ����(x)�� ������ ���ҵ�(i) Ž��. 
					if(!c[y]){ //y ���Ҹ� Ž�� ��������.
						q.push(y); //Ž�������ϱ����� q�� �ֱ�. 
						c[y]=true; //Ž�������� true��! 
				}
			}
		} 
		
}
