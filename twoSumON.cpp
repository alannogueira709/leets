#include <unordered_map>

class Solution {
public:
    vector<int> twoSum( vector<int> &nums, int target) {
        std::unordered_map<int, int> hashMap;

        for(int i = 0; i<nums.size(); i++){
            int numAtual = nums[i];

            int resultado = target - numAtual;
        
            if(hashMap.count(resultado)){
                return {hashMap[resultado], i};
            }
            hashMap[numAtual] = i;
        }
    return{};
    }
};
