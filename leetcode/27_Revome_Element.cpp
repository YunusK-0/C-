class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a;
        vector<int>::iterator point;
        for(point = nums.begin(); point != nums.end();)
        {
            //cout << *point;
            if(*point == val)
            {
                point = nums.erase(point);
                if(point == nums.end())
                    return a = nums.size();
                //nums.shrink_to_fit();
                //point--;
            }
            else
                point++;
        }
       // nums.shrink_to_fit();
    a = nums.size();
    return a;    
    }
   //return 1; 
};
