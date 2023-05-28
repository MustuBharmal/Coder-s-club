/* count the no. of 1's bit in a given number
for e.g. 13 (1101) -> 3
13 & 1 (1101
       &0001)
        0001 count = 1,

        1101 >> 1 => 0110
        (0110
       & 0001)
         0000  count = 1, 1

         0110 >> 1 => 0011
         (0011
       &  0001)
          0001  count = 1, 1, 2

        0011 >> 1 => 0001
         (0001
       &  0001)
          0001  count = 1, 1, 2, 3

          0001 >> 1 => 0000
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, count = 0;
//     cin >> num;

//     while (num > 0)
//     {
//         if (num & 1 == 1)
//         {
//             // count = count + 1;
//             count++;
//         }
//         num = num >> 1;

//         cout << count << endl;
//     }
// }
/*
  Toggle the given bit

  Toggle:- 0 -> 1 or 1 -> 0
  for e.g.
  13 -> 1101 ans-> 0101 <- 5
  pos = 4
  masking:- hidding the original data

  1<<(pos - 1) = masked
  0001 << (3) = 1000
  0001 << (2 - 1) = 1 = 0010
   1101
  ^1000
   0101 -> 5
   1101 // user
  ^0010 // masking
   1111 -> 15
*/
#include <iostream>
using namespace std;
int main()
{
  int num, pos;
  cin >> num >> pos;

  int mask;
  mask = 1 << (pos - 1);

  int res;
  res = num ^ mask;
  cout << res;

  return 0;
}