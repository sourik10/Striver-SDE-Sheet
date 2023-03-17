//brute force
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int extra=target-arr[i]-arr[j]-arr[k];
                if(binary_search(arr.begin()+k+1,arr.end(),extra)==true) return "Yes";
            }
        }
    }
    return "No";
}

