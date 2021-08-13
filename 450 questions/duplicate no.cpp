class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
int i;int res;
for(i=0;i<nums.size();i++)
{
if(nums.size()<=2)
    return nums[i];
if(nums[i]==nums[i+1])
res=nums[i+1];
}
return res;

}
    
};