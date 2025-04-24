// Problem: Find  number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.
class Solution {
    public int countCompleteSubarrays(int[] nums) {
        int n = nums.length, i=0, j=0, ans = 0;
        HashSet<Integer> st = new HashSet<>();
        for(int num: nums){
            st.add(num);
        }
        int uniq = st.size();
        HashMap<Integer, Integer> mpp = new HashMap<>();

        while(j < n){
            mpp.put(nums[j], mpp.getOrDefault(nums[j], 0) + 1);
            while(mpp.size() == uniq){
                int freq = mpp.get(nums[i]);
                if(freq ==  1) mpp.remove(nums[i]);
                else mpp.put(nums[i], freq-1);
                ans += n-j;
                i++;
            }
            j++;
        }
        return ans;
    }
}