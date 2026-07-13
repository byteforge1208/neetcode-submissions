class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int trip = 0;
        int i = 0;
        int j = people.size()-1;

        sort(people.begin(), people.end());

        while(i < j){

            if( (people[i] + people[j]) <= limit)
                i++;

            j--;    
            trip++;

            if(i==j)
                trip++;
        }
        return trip;
    }
};