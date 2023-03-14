#include <bits/stdc++.h> 
void mergeSort(long long *arr,int l,int r,int &count){
    if(l==r) return;

    int mid=(l+r)/2;
    
    mergeSort(arr,l,mid,count);
    mergeSort(arr,mid+1,r,count);

    long long temp[r-l+1]={0};
    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=r){
        if(arr[i] <= arr[j]) temp[k++]=arr[i++];
        else{
            temp[k++]=arr[j++];
            count+=mid-i+1;
        }
    }
    while(i<=mid)  temp[k++]=arr[i++];
    while(j<=r) temp[k++]=arr[j++];

    k=0;
    while(l<=r) arr[l++]=temp[k++];
  
}
long long getInversions(long long *arr, int n) {
    int ct=0;
    mergeSort(arr,0,n-1,ct);
    return ct;
}
