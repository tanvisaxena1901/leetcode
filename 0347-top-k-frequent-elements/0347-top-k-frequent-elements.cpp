class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n=nums.size();
        unordered_map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};
