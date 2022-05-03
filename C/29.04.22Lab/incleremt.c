#include <stdio.h>
int main() {
int iCounter = 0;
while( ++ iCounter < 3 ) { // докато брояюа щом е ++ -- отпред. Още на същия ред я променя става 1 <3
printf("1. Counter %d\n", iCounter);
printf("2. ++ Counter: %d\n", ++ iCounter); // още един път го увеличаваме = 2
printf("3. --Counter: %d \n", --iCounter); // 1
printf("4. Counter ++: %d\n", iCounter ++); // на този ред няма да се промени ами ще се промени на следващия 1
printf("5. Counter--: %d \n", iCounter--); //  2 това 2 идва от 4ти принт просто го помни от преди това 
}
return 0;
}
// 1. Counter 1
// 2. ++ Counter: 2
// 3. --Counter: 1
// 4. Counter ++: 1
// 5. Counter--: 2
// 1. Counter 2
// 2. ++ Counter: 3
// 3. --Counter: 2
// 4. Counter ++: 2
// 5. Counter--: 3