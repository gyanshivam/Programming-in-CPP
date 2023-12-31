#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int allow=0, ts;
    float sal, hra, da, pf, ts_f;
    char grad;

    cin>>sal>>grad;

    switch(grad)
    {
        case 'A' :
            allow=1700;
            break;
        case 'B' :
            allow=1500;
            break;
        case 'C':
            allow=1300;
            break;
        default:
            break;
    }

    hra = (20*sal)/100;
    da = (50*sal)/100;
    pf = (11*sal)/100;

    ts = (sal+allow+hra+da)-pf;
    ts_f = ((sal+allow+hra+da)-pf)-ts;

    if(ts_f>=0.6)
        ts++;

    cout<<ts;
}

