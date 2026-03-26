#include <iostream>
#include <vector>
using namespace std;

int main() {
   int arr[]={1,2,3,4,5};
   
   vector<int> v;
   for(int i=0;i<5;i++){
       v.push_back(arr[i]);
   }
   
   for(int x: v){
       cout<<x<<endl;
       
   }
}
