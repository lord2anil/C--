#include <iostream>
#include <vector>
#include<stack>

using namespace std;

void next_higher1(vector<int>& A, vector<int>& next_higher) {
  int n = A.size();
  next_higher.resize(n, 0);

  stack<int> st;
  for (int i = 0; i < n; i++) {
    while (!st.empty() && A[st.top()] < A[i]) {
      next_higher[st.top()] = i;
      st.pop();
    }
    st.push(i);
  }
}

void next_lower1(vector<int>& A, vector<int>& next_lower) {
  int n = A.size();
  next_lower.resize(n, 0);

  stack<int> st;
  for (int i = 0; i < n; i++) {
    while (!st.empty() && -A[st.top()] <A[i]) {
      next_lower[st.top()] = i;
      st.pop();
    }
    st.push(i);
  }
}

int main() {
  vector<int> A = {4, 5, 2, 25};
  vector<int> next_higher, next_lower;

  next_higher1(A, next_higher);
  next_lower1(A, next_lower);

  for (int i = 0; i < A.size(); i++) {
    cout << "Next higher for " << A[i] << " is " << next_higher[i] << endl;
    cout << "Next lower for " << A[i] << " is " << next_lower[i] << endl;
  }

  return 0;
}
