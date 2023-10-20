#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int k = 9;

  int i = 0;
  while (i < v.size()) {
    int tmp = k - v[i];
    auto it = lower_bound(v.begin() + i + 1, v.end(), tmp);
    cout << "i = " << i << ", tmp = " << tmp << ", it = " << *it << endl;
    i++;
  }

  return 0;
}
