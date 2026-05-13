class MyHashSet {
public:
    vector<int> nums = vector<int>(1000000, 0);
    MyHashSet() {
        
    }
    
    void add(int key) {
        nums[key] = 1;
    }
    
    void remove(int key) {
            nums[key] = 0;
    }
    
    bool contains(int key) {
        if (nums[key]==0) return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */