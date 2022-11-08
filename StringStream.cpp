#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    
    vector<int> a;
    std::string sepr = ",";

    int cur_position = 0;
    int position;

    while((position = str.find(sepr, cur_position)) != std::string::npos) {
        int len = position - cur_position;
        string result = str.substr(cur_position, len);
        a.push_back(std::stoi(result));
        cur_position = position + 1;
    }

    std::string result = str.substr(cur_position);
    a.push_back(std::stoi(result));
    
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
