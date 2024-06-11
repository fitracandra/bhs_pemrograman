1. definisi
    Array (dalam python) adalah struktur yang dapat menyimpan dan mengatur kumpulan data.
struktur data berbicara tentang cara menyimpan,mengatur,mengelompokan,dan mempresentasikan data.

2. himpunan
    himpunan dalam bahasa pemograman python adalah tipe data kolektif yang digunakan untuk
menyimpan banyak nilai dalam satu variabel
kondisi:niveritas

- nilai anggota yang disimpan harus unik (bukan duplikat).
- Nilai member yang sudah dimasukkan tidak dapat diubah per yang sudah dimasukkan lagi.
- set is unordered alias tidak berurutan yang artinya tidak bisa diakses berdasarkan indeks.
Untuk lebih memahami 3 poin di atas, langsung saja kita lakukan praktiknya.

A. Tidak Terurut (Set)
    Tipe kumpulan data tidak berurutan. Artinya, kita tidak bisa menggunakan index untuk mengakses nilai-nilai.

 kesalahan:
 my_set = {'a'} 
 print(my_set[0])

 Pesan eror:
 Traceback (most recent call last):
 File "<stdin>", line 1, in <module> 
 TypeError: 'set' object is note subscriptable

 Kita juga bisa melihat kode program yang telah kita buat tadi:
 student_set = { 'Huda', 'Lendis', 'Wahid', 'Basith'} 
 print(student_set)

 keluaran:
 {'Wahid', 'Lendis', 'Basith', 'Huda'}

Dimana diatas kita definisikan 4 anggota himpunan secara berurutan: Huda, Lendis, Wahid, dan Basith. Namun setelah kami cetak, kami mendapat pesanan yang berbeda.

B. Tidak dapat diubah (Set)
    Himpunan tidak dapat diubah, artinya nilai yang telah kita masukkan ke dalam himpunan tidak dapat diubah lagi.Namun, kami masih dapat menambah dan menghapus anggota ke kumpulan tersebut. Dan, karena kumpulan tidak dapat diubah, kumpulan hanya dapat menerima anggota tipe data yang juga tidak dapat diubah.