#include <string>
#include <vector>

using namespace std; 

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    
    int max=0;
     for(int i=0; i<heights.size(); i++){
         if(heights[i]>max){
             max = heights[i];
         }
     }
    answer.push_back(0);
    for(int i=1; i<heights.size(); i++){
        for(int j=i; j>0; j--){
            if(heights[i]==max){
                answer.push_back(0);
                break;
            }
            else if(heights[i] < heights[j-1]){
                answer.push_back(j);
                break;
            }
            else if(j-1 == 0 ){
                answer.push_back(0);
                break;
            }
            
        }
    }
    return answer;
}
