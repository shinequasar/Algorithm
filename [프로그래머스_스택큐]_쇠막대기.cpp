#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string arrangement) {
    int answer = 0;
    int open=0;
    int close=0;
    for(int i=0; i<arrangement.size(); i++){
        if(arrangement[i]== '('){
            ++open;
            cout<<open<< " ";
        }
        else{
            if(arrangement[i-1]=='('){ //���� �ٷ� ���� ( �� ������
                --open; //�������� ( ������ ���ֱ�
                answer+=open;
                cout<<"a : "<<answer<<endl;
                open-=close;
                close=0;
            }
            else{
                ++close; //������ count
            }
        }
    }
    return answer;
}
