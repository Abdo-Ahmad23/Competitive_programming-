#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
public:
    UnionFind(int size) {
        parent.resize(size);
        for (int i = 0; i < size; ++i) {
            parent[i] = i; // Initially, each node is its own parent
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            parent[rootY] = rootX; // Union the sets
        }
    }

private:
    vector<int> parent;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m; // Number of points and operations
        UnionFind uf(n + 1); // Using n + 1 for 1-based index

        for (int i = 0; i < m; ++i) {
            int a, d, k;
            cin >> a >> d >> k; // Read operation parameters
            for (int j = 0; j <= k; ++j) {
                int currentPoint = a + j * d;
                if (j > 0) {
                    uf.unionSets(a + (j - 1) * d, currentPoint); // Connect previous point with current point
                }
            }
        }

        // Count unique connected components
        int componentCount = 0;
        for (int i = 1; i <= n; ++i) {
            if (uf.find(i) == i) { // Count roots
                componentCount++;
            }
        }
        cout << componentCount << endl; // Output the result for the test case
    }

    return 0;
}