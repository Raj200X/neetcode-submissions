class cmp {
public:
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        return a.second < b.second;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (auto &p:nums){
            mp[p]++;
        }
        priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               cmp> pq;
        for (auto &p:mp){
            pq.push(p);
        }
        // while (!pq.empty()){
        //     cout << "first :" <<  pq.top().first << " " << "second:" << pq.top().second << endl;
        //     pq.pop();
        // }
        vector<int>ans;
        while (k>0){
            ans.push_back(pq.top().first);
            pq.pop();
            k--;
        }
        return ans;
    }
};
