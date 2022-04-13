/* zh feladattipusok:
tömbök
random szamok
parancsori arg
stringek (ctype.h-t használjuk)
*/

#include <stdio.h>

typedef struct IntIntDouble{
    int min, max;
    double atlag;
}IntIntDouble;

IntIntDouble get_statistics(){
    IntIntDouble x;
    x.min=1;
    x.max=10;
    x.atlag=5.34534;

    return x;
}

int main(){
    IntIntDouble result =get_statistics();
    printf("Minimum: %d\n",result.min);
    printf("Maximum: %d\n",result.max);
    printf("Atlag: %.2lf\n",result.atlag);

return 0;

}