class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n);
        int left =0;
        int right = n-1;
        int k=n-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                a[k]=nums[left]*nums[left];
                left++;
            }
            else{
                a[k]=nums[right]*nums[right];
                right--;
            }
            k--;
        }
        return a;
    }
};
