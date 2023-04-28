class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        for(int i=0;i<n;i++){
            if(prerequisites[i][0]<prerequisites[i][1] and numCourses!=0){
                return false;
                }    
                numCourses--;
                // if(prerequisites[i][0]prerequisites[i][1]){
                // return false;
                // }
                }
                return true;
    }
};