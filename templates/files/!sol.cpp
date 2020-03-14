#define DEBUG
#include <iostream>
#ifdef DEBUG
#define watch(x) cerr<<#x<<": "<<(x)<<endl
#define watcharr(x) cerr<<#x<<": ";for (int i=0; i<N; i++)cerr<<(x)[i]<<' ';cerr<<endl
#define D 
#else
#define watch(x) if(0)
#define watcharr(x) if(0)
#define D if(0)
#endif

using namespace std;
using ll = long long;
using ii = pair<int,int>;

int main() {
	
}
