class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1;
        int area = 0;
        while(s<e){
            int h = min(height[s],height[e]);
            int b = e-s;
            area = max(area,h*b);
            if(height[s]<height[e])
                s++;
            else
                e--;
        }
        return area;
    }
};



// Bruteforce approach

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxarea=0;
//         for(int i=0;i<height.size();i++){
//             for(int j=i+1;j<height.size();j++){
//                 int area = min(height[i],height[j])*abs(i-j);
//                 if(maxarea<area)
//                     maxarea=area;
//             }
//         }
//         return maxarea;
//     }
// };









// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int s=0,e=height.size()-1;
//         int maxarea=0;
//         while(s<e){
//             int area = min(height[s],height[e])*(e-s);
//             if(maxarea<area)
//                 maxarea=area;
//             height[s]>height[e]?e--:s++;
//         }
//         return maxarea;
//     }
// };