class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size(),count=0;
        int *arr= new int[len];
        for (int i=0;i<len;i++){
            arr[i] = nums.at(i);
        }
        int *p1 = arr,*p2 = arr;
        while (true){
            if (count >= len) {
                count= 0;
                p1++;
                p2=arr;
            }
            if (*p1+*p2 == target){
                int x = p1-arr , y = p2-arr;
                if (x==y){
                    ;
                }
                else{
                    return {x,y};
                }
            }
            count++;
            p2++;
        }
        return {};
    }
};
Console
