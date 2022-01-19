int Solution::singleNumber(const vector<int> &A) 
{
    int ans=0;                  //it will carry our missing element
    for(int i=0;i<A.size();i++)
    {
        ans=A[i]^ans;
    }
    return ans;

}
//T.C.=O(N)
//refer to page 43-45, notebook 4
