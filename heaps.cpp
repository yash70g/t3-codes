void heapify(vector<int> &a,int i){
    int l=i;
    int n=a.size();
    int right=2*i+1;
    int left=2*i;
    if(left<=n &&a[left]<a[l] )
        l=left;
    if(right<=n &&a[right]<a[l] )
        l=right;
        if(l!=i){
            heapify(a,l);
        }
    }
void heapsort(vector<int> a,int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,1);
    }
}
    for(int i=a.size()/2;i>0;i--)

        heapify(a[i],i);