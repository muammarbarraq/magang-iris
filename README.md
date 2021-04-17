# RANGKUMAN BELAJAR POINTER

Apa itu pointer ?


![pointers](https://user-images.githubusercontent.com/82454139/114570668-3a322f80-9ca0-11eb-8ae0-e3d84bc199b3.png)

## pengertian pointer

Pointer bisa dikatakan sebagai sebuah variabel atau object yang menunjuk ke variabel atau object lainnya.


![reference_operator](https://user-images.githubusercontent.com/82454139/114793048-bc5f4880-9db3-11eb-80cf-fea45df88e8b.png)


![image](https://user-images.githubusercontent.com/82454139/114793134-eca6e700-9db3-11eb-96af-38d5dab2274d.png)

### a. Operator Deference (&)
Operator ini biasanya disebut dengan address of atau operator alamat. Dengan menggunakan operator deference (&) ini, suatu variabel akan menghasilkan alamat memori.

Contoh:
```
#include <iostream>

using namespace std;

int main(){
      int angka = 90;
      int *angkax;
      angkax = &angka;

     cout<<"Nilai (isi) dari variabel angka : "<<angka;
     cout<<"\nAlamat variabel angka (&angka) : "<<&angka;
     cout<<"\nNilai yang ditunjuk pointer *angkax : "<<*angkax;

     return 0;
}
```
* OUTPUT
```
Nilai (isi) dari variabel angka : 90
Alamat variabel angka (&angka) : 0x6ffe34
Nilai yang ditunjuk pointer *angkax : 90
```
![image](https://user-images.githubusercontent.com/82454139/114815299-21309800-9de0-11eb-913c-75f13c70679b.png)

Pada program di atas, akan ditampilkan alamat memori dari variabel x, bukan nilai x.

### b. Operator reference (*)
Operator ini biasanya disebut value pointed by. Dengan menggunakan operator ini, kita dapat mengakses secara langsung nilai yang terdapat pada suatu alamat memori.

Contoh:
```
#include <iostream>

using namespace std;

int main(){

     
     int x;
     int *p;
     x = 20;
     p = &x;
      cout<<"\t\t===== Program Contoh Pointer =====\n\n";

     cout<<"Nilai X   : "<<x<<endl;
     cout<<"Alamat X (&X) : "<<&x<<endl<<endl;

     cout<<"Nilai yang ditunjuk *p: "<<*p<<endl;
     cout<<"Alamat yang ditunjuk *P: "<<p<<endl;
     cout<<"Alamat *P (&P) : "<<&p<<endl;
      *p = 30;

     cout<<"\n\n\nNilai X   : "<<x<<endl;
     cout<<"Alamat X (&X) : "<<&x<<endl<<endl;

     cout<<"Nilai yang ditunjuk *P: "<<*p<<endl;
     cout<<"Alamat yang ditunjuk *P: "<<p<<endl;
     cout<<"Alamat *P (&P) : "<<&p<<endl;

     return 0;
}
```
* OUTPUT
```
Nilai X   : 20 
Alamat X (&X) : 06ffe3c  
Nilai yang ditunjuk *p: 20
Alamat yang ditunjuk *P: 06ffe3c
Alamat *P (&P) : 06ffe30

Nilai X   : 30
Alamat X (&X) : 06ffe3c

Nilai yang ditunjuk *P: 30
Alamat yang ditunjuk *P: 06ffe3c
Alamat *P (&P) : 06ffe30
```
Pada program diatas awalnya kita membuat variabel dengan tipe data int dengan nama "x", kemudian sebuah pointer dengan tipe data int dengan nama "p". setelah itu memberikan nilai x dengan nilai "20" kemudian mengarahkan / mengisi / menunjukkan pointer p ke alamat memori variabel x. setelah itu menampilkan data dari variabel x dan pointer p.Kemudian code *p = 30; memiliki arti bahwa kita akan mengisi nilai 30 kedalam pointer p / alamat yang ditunjuk pointer p, karena alamat memori yang ditunjuk ponter p merupakan alamat memori variabel x maka nilai dari variabel x juga ikut berubah, Untuk membuktikan nilai variabel x juga ikut berubah (menjadi 30) maka pada code dibawah nya kita akan menampilkan data dari variabel x dan pointer p. 

#### Contoh penerapan pointers 
```
#include <stdio.h>

void main () {

   int  a;
   char b[10];

   printf("Alamat memori variabel a: %x\n", &a);
   printf("Alamat memori variabel b: %x\n", &b);

}
```

Pada program tersebut, kita menggunakan simbol & untuk mengambil alamat memori dari variabel a dan b. Lalu menggunakan format specifier %x untuk menampilkannya dalam bilangan heksadesimal.

* OUTPUTNYA :

![image](https://user-images.githubusercontent.com/82454139/114793841-74d9bc00-9db5-11eb-98e5-8747c03a5622.png)

##### Dapat dikatakan kalau pointer tidak berisi nilai data, melainkan berisi suatu alamat memori. Lokasi memori tersebut bisa diwakili sebuah variabel atau juga berupa alamat memori secara langsung.


## Pointer Dan Array
jika menuliskan sebuah array tanpa tanda kurung kotak ([]) maupun indeksnya, maka array tersebut menunjuk atau bersi alamat elem pertama dari array tersebut. Misalkan kamu membuat sebuah pointer bertipe int dengan nama pointerArray dan sebuah array dengan tipe yang sama yaitu int dengan nama nilaiArray,
*CONTOH 
```
#include <iostream>
using namespace std;
 
int main(){
int nilaiArray[5] = {2,5,4,6,7};
int *pointerArray;
pointerArray = nilaiArray;
cout<<"Nilai pada elemen 0 nilaiArray adalah = "<<nilaiArray[0]<<endl;
cout<<"Nilai pada elemen 0 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
pointerArray++; // naikan alamat yang ditunjuk pointer sejauh 1 integer
*pointerArray = 10; //Ubah nilai elemen 1 array (nilaiArray) menjadi 10
cout<<"Nilai pada elemen 1 nilaiArray adalah = "<<nilaiArray[1]<<endl;
cout<<"Nilai pada elemen 1 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
pointerArray = nilaiArray; //kembalikan pointer pada elemen pertama
cout<<endl;
cout<<"Akses nilai semua array dengan pointer dan looping for"<<endl;
for (int i=0; i<5; i++){
 cout<<"Nilai indeks ["<<i<<"] adalah = "<<*(pointerArray+i)<<endl;
}
return 0;
}
```
* OUTPUT
```
Nilai pada elemen 0 nilaiArray adalah = 2
Nilai pada elemen 0 nilaiArray (Pointer) adalah = 2
Nilai pada elemen 1 nilaiArray adalah = 10
Nilai pada elemen 1 nilaiArray (Pointer) adalah = 10

Akses nilai semua array dengan pointer dan looping for,
Nilai index [0] adalah = 2
Nilai index [1] adalah = 10
Nilai index [2] adalah = 4
Nilai index [3] adalah = 6
Nilai index [4] adalah = 7
```
Dari data,Suatu pointer bertipe int hanya dapat digunakan untuk menunjuk pada variabel int. Sebab, tipe data tersebut akan menentukan sifat pointer ketika alamat pointer tersebut dilakukan increment. Begitu juga untuk tipe data yang lain.

## Pointer Dan Fungsi
Seperti halnya dengan array, pointer dapat digunakan sebagai parameter suatu fungsi. Karena sifat pointer yang hanya sebagai penunjuk, maka setiap perubahan yang terjadi pada parameter, sebenarnya terjadi pada variabel yang ditunjuk bukan pada variabel pointer. Berikut adalah contoh program sederhananya:
```
#include <iostream>
using namespace std;
 
void tambah(int *angka){
*angka +=20;
}
 
int main(){
int nilai = 10;
cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
tambah(&nilai); //Memasukkan alamat variabel nilai pada fungsi tambah
cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
return 0;
}
```
* OUTPUT
```
Nilai variabel nilai adalah = 10
Nilai variabel nilai adalah = 30
```
Pada program diatas, disitu dibuat fungsi tambah, dimana ketika alamat suatu variabel diberikan sebagai parameter fungsi, nilai 20 akan ditambahkan pada alamat tersebut. Perbedaan parameter berupa pointer dan non-pointer adalah, pada variabel non-pointer, ketika ingin memasukkan nilai pada sebuah variabel kedalam parameter, harus memasukkan nilai dari variabel tersebut. Untuk parameter berupa pointer, cukup memasukkan alamat variabel yang menampung nilai dengan operator (&) kedalam parameter fungsi.
Yang menarik adalah pada fungsi tambah di atas, walaupun fungsi tersebut merupakan fungsi void tanpa nilai kembalian alias return, namun nilai variabel parameter berubah.


#### BERIKUT BEBERAPA REFENSI YANG BISA DIJADIKAN MODUL UNTUK BELAJAR 
* https://www.cplusplus.com/doc/tutorial/pointers/
* https://www.petanikode.com/c-pointer/
* https://bundet.com/d/995-pengertian-pointer-dalam-c
* https://github.com/AlproITS/DasarPemrograman/wiki/Modul-4:-Pointer-dan-Struct#deklarasi-variabel-pointer
* https://www.programiz.com/c-programming/c-pointers
* https://www.sinauarduino.com/artikel/pointer-pada-pemrograman-cpp/
* https://youtu.be/O1kWNj5Ikro

##### ======================SEKIAN,TERIMA KASIH============================

