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
}
void partition(vector <int>  ar) {
	int p = ar[0];
	vector <int> ar1 , ar2;
	for(int j = 1; j < ar.size(); j++)
    {
		if( ar[j] < p )
			ar1.push_back( ar[j] );
		else
			ar2.push_back( ar[j] );
	}
	output( ar1 );
	cout << p << " ";
	output( ar2 );


}
/* Tail starts here */
int main(void) {
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

	partition(_ar);
   
   return 0;
}