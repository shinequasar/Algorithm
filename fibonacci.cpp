#include <stdio.h>
#include <iostream>

//다이나믹 프로그래밍(DP) & fibonacci 
using namespace std;
// 이미 구한 값인지 아닌지 기록.  이렇게 배열을 만들면 0으로 초기화됨. 
int d[100];                                  
int fibo(int x){
	if(x == 1) return 0;
	if(x == 2) return 1;
	if(d[x] != 0) return d[x]; //만약 구한 적 있는 값이라면(기록이 0이 아니면) 구했던 값리 턴 
	//위에 것들에 해당하지 않으면 x번째 값은 그 전과 전전값의 합. 
	return d[x] = fibo(x-1)+fibo(x-2);
}
int main(void) {
	int num;	cin >> num;
	for(int i=0; i<num; i++){
		cout << fibo(i)<<" ";
	}
	return 0;
}
