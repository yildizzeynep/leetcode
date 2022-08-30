class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        int mid = (high-low)/2+low; //ortadaki değeri bulmak için bu formül uygulamaktadır.
        
        if (low > high) //Eğer en düşük değer en yüksek değerden büyükse -1 döndürülür.
            return -1;
        
        if (nums[mid] == target) //Eğer ortanca değer hedef değere denk ise ortanca değer döndürülür.
            return mid;
        
        else if (nums[mid] < target) //Eğer ortanca değer hedeften küçük değilse 
            return binarySearch(nums, mid+1, high, target); 
        else
             return binarySearch(nums, low, mid-1, target);
            
    }
     int search(vector<int> &nums, int target)
    {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};