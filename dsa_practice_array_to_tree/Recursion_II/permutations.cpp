#include <bits/stdc++.h>
using namespace std;

void permuteHelper(int idx, vector<int>& nums, vector<vector<int>>& res) {
    if (idx == (int)nums.size()) {
        res.push_back(nums);
        return;
    }
    for (int i = idx; i < (int)nums.size(); ++i) {
        swap(nums[idx], nums[i]);
        permuteHelper(idx + 1, nums, res);
        swap(nums[idx], nums[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    vector<vector<int>> res;
    permuteHelper(0, nums, res);
    for (const auto& v : res) {
        for (int i = 0; i < (int)v.size(); ++i) {
            if (i) cout << ' ';
            cout << v[i];
        }
        cout << "\n";
    }
    return 0;
}
