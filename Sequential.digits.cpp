#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
     vector<int> sequentialDigits(int low, int high) {
       vector<int> res; 
       string s= "123456789"; 
       for(int len=2; len<=9; ++len){
         for(int start =0; start<=9-len; ++start){
           string sub = s.substr(start, len); 
           int num = stoi(sub); 
           if(num>=low && num<=high) res.push_back(num); 
         }
       }
       return res; 
     }
};
int main(){
  int low =100; 
  int high =300; 
  Solution sol; 
  vector<int> res= sol.sequentialDigits(low, high) ; 
  for(int n:res) cout << n <<","; 
  cout <<endl; 
  return 0; 
}
