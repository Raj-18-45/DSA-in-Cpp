
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> nums, int target){
    int n = nums.size();
    
    for(int i = 0; i < n; i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    v.push_back(7);

    int target;
    cout << "Enter your target: ";
    cin >> target;

    int validate = linearSearch(v, target);

    if(validate == -1){
        cout << "Not found";
    }
    else{
        cout << "Found at index " << validate;
    }

    return 0;
}

//  Time Complexity:
// 	•	Best: O(1)
// 	•	Worst: O(n)

//  Space Complexity:
// 	•	Current code: O(n)
// 	•	Optimized code: O(1)
