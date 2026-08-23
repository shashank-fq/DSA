class MyHashSet {
vector<int> myset;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(myset.begin(), myset.end(), key) == myset.end())
            myset.push_back(key);
    }
    
    void remove(int key) {
        auto it = find(myset.begin(), myset.end(), key);
        if(it != myset.end()){
            myset.erase(it);
        }
    }
    
    bool contains(int key) {
        if(find(myset.begin(), myset.end(), key) == myset.end()) return false;
        else return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */