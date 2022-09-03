# DSA-C++
Data Structure and Algorithm with C++.

C++ Basics -
1. #include <bits/stdc++.h>
   using namespace std;
2. To take input in 2D vector:
   for(int i=0;i<N;i++){
     vector<int> v1;
     for(int j=0;j<M;j++){
       int n;
       cin>>n;
       v1.push_back(n);
     }
     vector.push_back(v1);
   }
3. To insert value in vector- vector.push_back();
4. Queue methods: push(), pop(), front().
5. To create adjajency List of graph having nodes as string with path values as double => map<string,vector<pair<string,double>>> adj;
6. To create visited array of string => set<string> vis; [Leetcode](https://leetcode.com/problems/evaluate-division/)
7. middle point = l+(h-l)/2 to avoid overflow
8. Edge cases to consider - (1) Can the number repeats, (2) Are in sorted order, (3)Can they be negative numbers, (4)Base conditions like 0, 
   (5)Integer overflow (>10^9) while adding, multiplying, (6) Input has no value or single value.
9. 

