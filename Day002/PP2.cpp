// Maximum sum subarray problem
// Problem statement should be updated

int maximumSubArray(int a[], int n){
  int max_so_far = a[0];
  int cur_max = a[0];
  for(int i=0; i<n; i++){
    cur_max = max(a[i], cur_max + a[i]);
    max_so_far = max(max_so_far, cur_max);
  }
  return max_so_far;
}

int main(){
  int test = {1, 4, 5, 6, 7, 8, 5, 3, 2};
  int n = 9;
  cout << maximumSumSubArray(test, n) << endl;
  return 0;
}
