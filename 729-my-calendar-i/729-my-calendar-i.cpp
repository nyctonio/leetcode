class MyCalendar {
public:
    vector<pair<int,int>> v;
    MyCalendar() {
                
    }
    
    bool book(int start, int end) {
        bool flag = true;
        for(auto i:v){
            if(start>=i.second)
                continue;
            else if(start<i.first && end<=i.first)
                continue;
            flag= false;
            break;
        }
        if(flag){
            v.push_back({start,end});
            return true;
        }
        return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */