#include <iostream>
#include<vector>

using namespace std;


int Solution::findCount(const vector<int> &A, int B) {
    int left=0,right=A.size()-1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == B) {
            int ct = 1; 
        int l = mid - 1, r = mid + 1;
        while (l>=0 && A[l]==B) {
            ct++;
            l--;
        }
        while (r<A.size() && A[r]==B) {
            ct++;
            r++;
        }
        return ct;
        } else if (A[mid] < B) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return 0;
        
    }