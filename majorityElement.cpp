//approach - using hashmap
//time O(nlogn)
#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	unordered_map<int,int>mp;
    for(int i=0;i<n;i++) mp[arr[i]]++;
    for(auto it:mp){
        if(it.second > n/2) return it.first;
    }
    return -1;
}

//approach - Moores's Voting Algorithm
//time O(n)
#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	int count = 0;
    int candidate = 0;
        for (int i=0;i<n;i++) {
            if (count == 0) {
                candidate = arr[i];
            }
            if(arr[i]==candidate) count += 1; 
            else count -= 1; 
        }
        return candidate;
}
