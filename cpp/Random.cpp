#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main() {

  srand(time(nullptr));
  int size;
  cin >> size;
  int arr[10];
  for (int e = 0; e < 10; e++)
    arr[e] = 0;
  for (int e = 0; e < size; e++) {
    arr[rand() % 10]++;
  }
  int low = arr[0], high = arr[0];
  for (int e = 0; e < 10; e++) {
    cout << arr[e] << " ";
    if (arr[e] > high)
      high = arr[e];
    if (arr[e] < low)
      low = arr[e];
  }
  cout << endl << high - low << endl;
  cin >> size;

  return 0;

  /*
  random_device os_seed;
  const uint_least32_t seed = os_seed();

  mt19937 generator( seed );
  uniform_int_distribution <uint_least32_t> distribute(0, 9);
  int arr[10] = {0};
  int arr2[10] = {0};
  srand(time(nullptr));
  for (int e=0; e<10000000; e++) {
      arr[distribute(generator)]++;
      arr2[rand()%10]++;
  }
  for (int e=0; e<10; e++) {
      printf("%d | %d\n",arr[e],arr2[e]);
  }*/
}
