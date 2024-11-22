#include <iostream>
using namespace std;
int main()
/*{
    int N;
  cout << "enter a positive integer : ";
  cin >> N;
  if (N <= 1) {
    cout << N << " isn't primal." << endl;
  }
  for (int i = 2; i <= N ; i++) {
    if (N % i == 0) {
      cout << N << " isn't primal. " << endl;
      return 0;
    }
  }
  cout << N << " is primal. " << endl;
  return 0;
}
*/
{
  int N, nbr;
  cout << "enter a positive integer : ";
  cin >> N;
  nbr = 0;

  for (int i = 2; i <N; i++)
  {
    if (N % i == 0)
    {

      nbr = nbr + 1;
    }}
    if (nbr == 0)
    {
      cout << N << " primal. " << endl;
    }
    else
    {
      cout << N << " isn't primal. " << endl;
    }
  

  return 0;
}