class LRUCache{
    typedef list<int> Dlist;
    Dlist keyList;
    unordered_map<int,pair<int,Dlist::iterator>> cache;
    int _capacity;
    void touch(int key){
        if(cache.find(key)!=cache.end()){
            auto & pair = cache[key];
            keyList.erase(pair.second);
            keyList.push_front(key);
            pair.second=keyList.begin();
        }
    };
public:
    LRUCache(int capacity): _capacity(capacity){
    }

    int get(int key) {
        if(cache.find(key)!=cache.end()){
            touch(key);
            return cache[key].first;
        }else{
            return -1;
        }
    }

    void set(int key, int value) {
        if(cache.find(key)!=cache.end()){
            cache[key].first=value;
            touch(key);
        }else{
            if(cache.size()==_capacity){
                cache.erase(keyList.back());
                keyList.pop_back();
            }
            keyList.push_front(key);
            cache[key]={value, keyList.begin()};
        }
    }
};
