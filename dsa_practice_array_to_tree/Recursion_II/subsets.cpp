#include <bits/stdc++.h>
using namespace std;

void dfs(int idx, vector<int>& cur, const vector<int>& nums, vector<vector<int>>& res) {
    if (idx == (int)nums.size()) {
        res.push_back(cur);
        return;
    }
    dfs(idx + 1, cur, nums, res);
    cur.push_back(nums[idx]);
    dfs(idx + 1, cur, nums, res);
    cur.pop_back();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    vector<vector<int>> res;
    vector<int> cur;
    dfs(0, cur, nums, res);
    for (const auto& v : res) {
        for (int i = 0; i < (int)v.size(); ++i) {
            if (i) cout << ' ';
            cout << v[i];
        }
        cout << "\n";
    }
    return 0;
}
