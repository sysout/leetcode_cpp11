# leetcode in c++11

## Good Artists Copy; Great Artists Steal.
Well, due to the fact that my brain is like a sieve, I will leave the source of my steal for my future self.

## c++ language
I pick up my c++ skills by watch this video: https://app.pluralsight.com/library/courses/accelerated-introduction-cpp/table-of-contents

The following sections are language features I learned through coding. 

### map/unordered_map
If the value of a map/unordered_map is a container. It's better let operator[] to initiate this container
```cpp
unordered_map<int, unordered_set<int>> mymap;
// you don't have to check whether mymap[1] exist or not, 
// if not exist, mymap will initiate a set using it's default constructor, very convenient
mymap[1].insert(2); // {2}
```

### map iterator v.s. map value
iterators are like pointers. You have to use iterator->first to access the data
```cpp
unordered_map<int, unordered_set<int>> mymap;
auto & myset = mymap[1]; // & is required, otherwise you are making a new copy
myset.insert(2);
auto it = mymap.find(3); // find will not create a new set for you if the key doesn't exist
cout << (it==mymap.end()) << endl;
it = mymap.find(1);
it->second.insert(5); // {2, 5}
it->second.insert(6); // {2, 5, 6}
cout << it->first << endl; // 1
cout << it->second.size() << endl; // 3
```

### precedence: arithmetics > bitwise shift > relational > bitwise AND/XOR/OR > logical
    191. Number of 1 Bits

http://en.cppreference.com/w/cpp/language/operator_precedence
```cpp
n = n & 0x33333333 + (n>>2) & 0x33333333;
// equivalent to
n = n & (0x33333333 + (n>>2)) & 0x33333333;
// so use bitwise operators with caution
```
