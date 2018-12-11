// Dibuat oleh: Cahya Amalinadhi Putra
// 10 Desember 2018, 13:17
// Code ini dapat disebarluaskan untuk tujuan pendidikan

// ============================================ //
// MEMBUAT MATRIKS
// Membuat matriks berukuran m x n (m-baris x n-kolom)
// Dalam bahasa pemrograman, matriks bisa disebut juga dengan array x-dimensi.

#include <iostream>
using namespace std;

int main () {
    int i, j, m, n;
    m = 2;          // m adalah ukuran baris
    n = 4;          // n adalah ukuran kolom
    
    int arr1[n][n]; // arr1 adalah matriks/array berukuran m x n yang akan dibuat

    // PROSES MEMBUAT MATRIKS //
    // Proses pembuatan dilakukan dengan bantuan fungsi for.
    // ada 2 fungsi for, 1 untuk perulangan baris (fungsi dengan variabel i)
    // dan 1 untuk perulangan kolom (fungsi dengan variabel j)

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            // cin >> arr1[i][j];       // Apabila ingin memasukkan nilai matriks secara manual
            arr1[i][j] = rand() % 10;   // Apabila ingin memasukkan nilai matriks secara random dari 0-10
        }
    }

    // MENAMPILKAN MATRIX YANG DIBUAT //
    // Proses menampilkan matriks juga dibuat dengan bantuan fungsi for.
    printf("Array = \n");

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%i ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
