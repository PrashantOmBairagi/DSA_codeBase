#include<iostream>
#include<string>
#include<vector>
using namespace std;
// DATED : 07-12-2025 : KAMALPUR : Leetcode412 EASY
// Just Practicing as it is hard to find time at hometown.
vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0){
                ans.push_back("FizzBuzz");
            }else if((i+1)%3==0){
                ans.push_back("Fizz");
            }else if ((i+1)%5==0){
                ans.push_back("Buzz");
            }else ans.push_back(to_string(i+1));
        }
        return ans;
    }
int main(){
    int n = 5;
    for(string ele : fizzBuzz(n)){
        cout<<ele<<" ";
    }
}