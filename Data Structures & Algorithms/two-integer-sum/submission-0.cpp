class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hm;
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            int req = target - nums[i];

            if(hm.find(req) != hm.end()){
                res.push_back(hm.find(req)->second);
                res.push_back(i);
                return res;
            }

            hm[nums[i]] = i;
        }
    }
};
