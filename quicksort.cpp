#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v, int first, int last){
int pivot=v[last];
int i=first-1;
for(int j=first; j<last; j++){
if(v[j]<pivot){
i++;
swap(v[i],v[j]);
}
}
swap(v[i+1],v[last]);
return i+1;
}
void quickSort(vector<int>&v,int first, int last){
if(first>=last) return;
int pi=partition(v,first,last);
quickSort(v,first,pi-1);
quickSort(v,pi+1,last);
return;
}
int main(){
int n;
cout<<"Enter n:";
cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){
cin>>v[i];
}
quickSort(v,0,n-1);
for(int i=0; i<n; i++){
cout<<v[i]<<" ";
}
return 0;
}

//This is quicksort.This is learning.