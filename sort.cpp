#include<iostream>
#include<vector>
using namespace std;
void bubble(vector<int> &a)
{
    int n = sizeof(a)/sizeof(a[0]);
    int count =0;
    while(count<n-1){
        for(int i=0;i<n-count-1;i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
        }
    }
        count++;
}
}
void selection(vector<int> &a){
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        int mini=0;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini])
                mini=j;
        }
        int temp = a[i];
        a[i]=a[mini];
        a[mini]=temp;
    }
}
void instn(vector<int> &a){
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp = a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
            }
    }
}
void merge(vector<int> &a, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    
    while(left <= mid && right <= high) {
        if(a[left] <= a[right]) {
            temp.push_back(a[left]);
            left++;
        } else {
            temp.push_back(a[right]);
            right++;
        }
    }
    
    while(left <= mid) {
        temp.push_back(a[left]);
        left++;
    }
    
    while(right <= high) {
        temp.push_back(a[right]);
        right++;
    }
    
    for(int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &a, int low, int high) {
    if(low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid+1, high);
    merge(a, low, mid, high);
}

int main()
{
    vector<int> a = {64,34,25,12,22,11,90};
    // mergeSort(a,0,6);
    instn(a);
    for(int n:a){
        cout<<n<<" ";
    }
}
    
