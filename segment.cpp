void build(int ind,int low,int high){
    if(low==high){
        seg[ind]=a[low];
        return ;
    }
    int mid=low+(high-low)/2;
        build(2*ind+1,low,mid);
        build(2*ind+2,mid+1,high);
        seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}
    int query(int i,int low,int high,int l,int r){
        if(low>=l && high<=r)
            return seg[i];
            if(high<l&& low >r)
            return INT_MIN;
            int mid=(low+high)/2;
            int q1=query(2*i+1,low,mid,l,r);
            int q2=query(2*i+2,mid+1,high,l,r);
            return max(q1,q2);
    }
build(0,0,n-1);