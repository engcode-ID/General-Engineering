// Dibuat oleh: Cahya Amalinadhi Putra
// 9 Desember 2018, 22:48
// Code ini dapat disebarluaskan untuk tujuan pendidikan

// ============================================ //
// FUNGSI SWAP (menukar nilai antar 2 variabel)
// Ada 2 bilangan, A dan B. Kita ingin menukar nilai A menjadi nilai B dan sebaliknya.
// Input:
// A = 4, B = 10
// Output:
// A = 10, B = 5

#include <iostream>
using namespace std;

int main() {
   int A, B, temp;
   A = 4;
   B = 10;

   printf("Sebelum proses swap \n");
   printf("A = %i \n", A);
   printf("B = %i \n", B);

   // PROSES SWAP //
   temp = A;    // 1. simpan nilai A dalam variabel temp
   A = B;       // 2. ganti nilai A dengan nilai B
   B = temp;    // 3. ganti nilai B dengan nilai A yang didapat dari variabel temp

   printf("\nSetelah proses swap \n");
   printf("A = %i \n", A);
   printf("B = %i \n", B);

   return 0;
}
