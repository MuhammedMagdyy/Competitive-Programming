class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0, reached;
        int start = 0, end = people.size() - 1;

        sort(people.begin(), people.end());

        while (start <= end) {
            reached = people[start] + people[end];
            
            reached <= limit ? start++, end-- : end--;
            
            boats++;
        }

        return boats;
    }
};