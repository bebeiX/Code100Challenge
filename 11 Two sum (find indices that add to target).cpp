#include <iostream>
#include <vector>
using namespace std;

vector <int> twosum (const vector<int> & nums, int target);

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twosum(nums, target);

    if (result.size() == 2) {
        cout << "Indices found: " << result[0] << ", " << result[1] << endl;
        cout << "Values: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << endl;
    }
}


//------------------functions-----------------------------------
vector <int> twosum (const vector<int> & nums, int target) {
    int i, j; 
    for (i = 0; i < nums.size(); i ++) {
        for (j = i +1; i < nums.size(); i++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
}