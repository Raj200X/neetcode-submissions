class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int start = 0;
        int end = people.size()-1;
        int boats = 0;
        while (start<=end){
            int total = people[start]+people[end];
            if (total<=limit){
                start++;
            }
            end--;
            boats++;

        }
        return boats;
    }
};