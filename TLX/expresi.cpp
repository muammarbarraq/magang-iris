#include <cstdio>
int main() {
int x = 5;
x++;
printf("x: %d\n", x);
x--;
printf("x: %d\n", x);
};

#include <cstdio>
#include <cmath>
int main() {
printf("%lf\n", sqrt(5));
printf("%lf\n", round(5.2)); 
printf("%lf\n", round(5.6));
};

#include <cstdio>

int main() {

printf("%d\n", 2 > 1);
printf("%d\n", 2 < 1);
printf("%d\n", 2 == 1);
printf("%d\n", 2 >= 1);
printf("%d\n", 1 == 1);
printf("%d\n", 1 != 1);
printf("%d\n", 1 != 2);
};

#include <cstdio>

int main() {

printf("%d\n", "a" > "A");
printf("%d\n", "a" < "A");
printf("%d\n", "a" >= "A");
printf("%d\n", "a" == "A");

printf("%d\n", "a" < "aa");
printf("%d\n", "abcb" > "abca");
printf("%d\n", "abc" == "abc");
printf("%d\n", "abc" <= "abc");
};

#include <cstdio>

int main() {

printf("%d\n", 2 > 1);
printf("%d\n", !(2 > 1));
printf("%d\n", (2 > 1) && (3 > 1));
printf("%d\n", ((2 > 1) || (3 < 1)) && (1 == 1));
printf("%d\n", (1 != 1) ^ !(1 != 1));
};

#include <cstdio>
int a, b, c, x, hasil;
int main() {
a = 1;
b = 3;
c = -2;
scanf("%d", &x);
hasil = a*x*x + b*x + c;
printf("ax^2 + bx + c = %d\n", hasil);
};

#include <cstdio>

int a, b, c, d, hasil;
int main (){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    hasil = a*d*d + b*d + c ;
    printf("ad^2 + bd + c = %d\n", hasil);

};

#include <cstdio>

char c1, c2, c3;
int bil;

int main() {
scanf("%c %c", &c1, &c2);
scanf("%d", &bil);
scanf("%c", &c3);

printf("c1= %c c2= %c bil=%d c3= %c \n", c1, c2,
bil, c3);
};

#include <cstdio>

char c1, c2, c3;
int bil;

int main() {
scanf("%c %c\n", &c1, &c2);
scanf("%d\n", &bil);
scanf("%c", &c3);

printf("c1= %c c2= %c bil=%d c3= %c\n", c1, c2,
bil, c3);
};

#include <cstdio>
#include <string>

using namespace std;

char buff[1001];

int main() {

scanf("%s", buff);

string s = buff;
printf("s= %s\n", s.c_str());
};

#include <cstdio>
#include <string>

using namespace std;

char buff[1001];

int main() {
scanf("%[^\n]\n", buff);
string s = buff;

printf("s= %s\n", s.c_str());
}


#include <cstdio>

int main() {
int a, b;

printf("masukkan nilai a: ");
scanf("%d", &a);
printf("masukkan nilai b: ");
scanf("%d", &b);
printf("hasil dari penjumlahan a dan b: %d\n", a+b);
};


