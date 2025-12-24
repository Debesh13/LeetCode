class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(begin(capacity), end(capacity), greater<int>()); 
        int total_Apple = accumulate(begin(apple), end(apple), 0);
        int total_count_Of_Boxes = 0;
        int i = 0;
        while(total_Apple > 0){
            total_Apple = total_Apple - capacity[i];
            total_count_Of_Boxes ++;
            i ++; 
        }
        return total_count_Of_Boxes;
    }
};
