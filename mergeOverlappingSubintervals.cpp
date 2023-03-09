#include <bits/stdc++.h> 
#include<vector>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
   vector<vector<int>>resInterval;
   if(resInterval.size()==0) return resInterval;
   sort(intervals.begin(),intervals.end());
   vector<int>tmpInterval=intervals[0];
   for(auto it:intervals){
       if(it[0]<=tmpInterval[1]){
           tmpInterval=max(it[1],tmpInterval[1]);
       }
       else{
           resInterval.push_back(tmpInterval);
           tmpInterval=it;
       }
   }
   resInterval.push_back(tmpInterval);
   return resInterval;
}
