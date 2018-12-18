# Dibuat oleh: Cahya Amalinadhi Putra
# 18 Desember 2018, 09:33
# Code ini dapat disebarluaskan untuk tujuan pendidikan

# ============================================ #
#               INTEGRAL NUMERIC
# ============================================ #
# Banyak persamaan matematis berbentuk integral.
# Untuk menyelesaikannya dengan komputer, bentuk integral yang kontinu ini harus diubah menjadi diskrit.
# Code ini membantu membuat penyelesaian diskrit integral menggunakan Trapezoidal Rules.

# REFERENSI
# https://en.wikipedia.org/wiki/Numerical_integration

# ============================================ #

import numpy as np
import math

# masukkan persamaan yang ingin di integralkan
# Integralnya 1 dimensi ya :)
def f(x):
    y = math.exp(x**(-2)) + 3
    return y

# membuat input
# bentuk integral
#   integral (f(x) dx) dari a -> b
batas_atas = 10         # batas atas integral
batas_bawah = 1         # batas bawah integral
delX = 0.001             # ukuran diskritisasi

# membuat matriks penyimpanan dan menyimpan nilai X dan f(X)
n = int((batas_atas - batas_bawah)/delX)    # harus berbentuk bilangan bulat
X = np.zeros(n+1)     # berisi nilai a sampai b
Y = np.zeros(n+1)     # berisi nilai f(a) sampai f(b)
for i in range(len(X)):
    X[i] = batas_bawah + i*delX
    Y[i] = f(X[i])

# melakukan perulangan penjumlahan berdasarkan trapezoidal rule
sum = 0                     # tempat menyimpan hasil penjumlahan
for i in range(len(X)-1):
    sum = sum + ((X[i+1]-X[i]) * ((Y[i+1] + Y[i])/2.0))

# menampilkan hasil
print("%.2f" % sum)

## TAMBAHAN
# untuk menambahkan ketelitian, dapat dilakukan dengan menurunkan nilai delX
