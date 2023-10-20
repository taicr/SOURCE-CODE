/* 
Cho hai số nguyên dương n và k. Hãy đếm số ước số khác nhau của tổ hợp chập k của n phần tử.

Input:

Dữ liệu vào gồm nhiều dòng, mỗi dòng ghi hai số nguyên dương n và k (0 ≤ k ≤ n ≤ 431).
 (chú ý: không có dòng ghi số bộ test, cần tự đọc đến hết các dòng của luồng vào).

Output:
Ghi ra kết quả trên một dòng. Dữ liệu vào đảm bảo kết quả không vượt quá 263 – 1.
*/
#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

unordered_map<int, int> prime_factors(int n) {
    unordered_map<int, int> factors;
    for (int i = 2; i <= sqrt(n); ++i) {
        while (n % i == 0) {
            ++factors[i];
            n /= i;
        }
    }
    if (n > 1) {
        ++factors[n];
    }
    return factors;
}

void combine_factors(unordered_map<int, int>& factors1, const unordered_map<int, int>& factors2, int sign = 1) {
    for (const auto& kv : factors2) {
        factors1[kv.first] += sign * kv.second;
    }
}

int count_divisors(const unordered_map<int, int>& factors) {
    int count = 1;
    for (const auto& kv : factors) {
        count *= (kv.second + 1);
    }
    return count;
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        unordered_map<int, int> factors;

        for (int i = 2; i <= n; ++i) {
            combine_factors(factors, prime_factors(i));
        }

        for (int i = 2; i <= k; ++i) {
            combine_factors(factors, prime_factors(i), -1);
        }
        for (int i = 2; i <= n - k; ++i) {
            combine_factors(factors, prime_factors(i), -1);
        }

        cout << count_divisors(factors) << endl;
    }
    return 0;
}