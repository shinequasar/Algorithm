#include <stdio.h>
#include <iostream>

//���̳��� ���α׷���(DP) & fibonacci 
using namespace std;
// �̹� ���� ������ �ƴ��� ���.  �̷��� �迭�� ����� 0���� �ʱ�ȭ��. 
int d[100];                                  
int fibo(int x){
	if(x == 1) return 0;
	if(x == 2) return 1;
	if(d[x] != 0) return d[x]; //���� ���� �� �ִ� ���̶��(����� 0�� �ƴϸ�) ���ߴ� ���� �� 
	//���� �͵鿡 �ش����� ������ x��° ���� �� ���� �������� ��. 
	return d[x] = fibo(x-1)+fibo(x-2);
}
int main(void) {
	int num;	cin >> num;
	for(int i=0; i<num; i++){
		cout << fibo(i)<<" ";
	}
	return 0;
}
