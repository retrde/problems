/*
Write a function which takes a string and prints its all permutations.
If length of string is n, what is the time complexity of the solution?
Follow up: Can you think of multiple solutions?
*/

#include <bits/stdc++.h>

using namespace std;

void permute(string a, int l, int r){
  if(l == r)
    cout << a << endl;
  else
    for(int i=l; i<=r; i++){
      swap(a[l], a[i]);
      permute(a, l+1, r);
      swap(a[l], a[i]); // backtrack
    }
  return;
}

int main(){
  string test = "abcdefghij";
  permute(test, 0, 9);
  return 0;
}
