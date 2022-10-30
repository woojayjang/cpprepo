#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
private:
    int scores[5];
    
public:

    void input(){
        for(int i = 0; i < 5; i ++){
            
            cin >> scores[i];
        }
    };
    
    int calculateTotalScore(){
        
        int sum = 0;
        for(int i =0; i< 5; i ++)
        {
            sum = sum + scores[i];
        }
      
        return sum;
    };
};
// Write your Student class here

int main() {
