#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#define DEBUG

using namespace std;
/* Head ends here */

void output(vector <int> ar){
    for (int i = 0; i<ar.size(); i++)
        cout << ar[i] << " ";
    cout << endl;
}

void insertionSort(vector <int>  ar) {
	for(int j = 1; j < ar.size(); j++)
    {
		if(ar[j-1] <= ar[j])
			continue;
		else
		{
			int val = ar[j];
			int i = j-1;
			while(  i>=0 && val < ar[i] )
				{
					ar[i+1]=ar[i--];
					output(ar);
				}
			ar[i+1] = val;
			output(ar);
		}
	}
	 
}
/* Tail starts here */
int main(void) {
#undef DEBUG   
    #ifdef DEBUG
		freopen("test.txt","r",stdin);
		freopen("testans.txt","w",stdout);
	#endif
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
   for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
       int _ar_tmp;
       cin >> _ar_tmp;
       _ar.push_back(_ar_tmp); 
	}
   insertionSort(_ar);
   
   return 0;
}
