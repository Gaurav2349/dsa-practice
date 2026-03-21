#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> marks;
    
    marks["gaurav"] = 85;
    marks["akash"]  = 78;
    marks["madhav"] = 87;
    marks["nikhil"] = 70;
    
    if (marks.count("gaurav") > 0) {
        cout << "gaurav found!" << endl;
    }
    
    for (auto item : marks) {
        cout << item.first << " → " << item.second << endl;
    }
    
    return 0;
}
