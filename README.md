# 🐟 Shop Fish: Aplikasi Jual Beli Ikan (C++)

Aplikasi **berbasis konsol (CLI)** yang dibuat dengan **C++** untuk simulasi jual beli ikan segar di **Bandar Lampung**. Pengguna dapat mendaftar akun, login, memilih jenis ikan, menentukan tujuan pengiriman, lalu melihat total pembayaran lengkap dengan ongkos kirim.

---

## ✨ Fitur

- **Daftar akun dan login**: data pengguna disimpan sementara di memori (maksimal 10 akun, username dan password masing-masing maksimal 20 karakter).
- **Menu 17 jenis ikan** beserta harga per kilogram.
- **Perhitungan otomatis** total harga berdasarkan berat (kg) yang dipesan.
- **14 tujuan pengiriman** di wilayah Lampung dengan ongkir yang berbeda sesuai jarak.
- **Data pengiriman**: nama, kode pos, dan nomor telepon.
- **Rincian total pembayaran**: harga ikan ditambah ongkir.
- **Pesan ulang**: pengguna dapat langsung berbelanja lagi tanpa keluar dari aplikasi.
- **Validasi pilihan**: input menu yang tidak valid akan meminta pengguna mengulang.

## 🔄 Alur Program

```
Menu Akun ──► 1. Daftar Akun
          ├─► 2. Login ── berhasil ──► Menu Ikan ──► Input kg ──► Nama
          └─► 3. Keluar                                              │
                                                                     ▼
        Pesan lagi? (y/n) ◄── Total + Ongkir ◄── Kode Pos & Telepon ◄── Pilih Alamat
```

## 🛒 Daftar Harga Ikan

| Kode | Ikan | Harga/kg |
|---|---|---|
| a | Bandeng | Rp 22.500 |
| b | Bawal Hitam | Rp 80.000 |
| c | Bawal Putih | Rp 45.000 |
| d | Cakalang | Rp 48.000 |
| e | Dori | Rp 36.000 |
| f | Kakap Merah | Rp 77.000 |
| g | Kakap Putih | Rp 69.500 |
| h | Kembung | Rp 47.500 |
| i | Kerapu | Rp 69.000 |
| j | Layur | Rp 37.000 |
| k | Pari | Rp 48.000 |
| l | Sarden | Rp 21.000 |
| m | Salmon | Rp 40.000 |
| n | Tenggiri | Rp 80.000 |
| o | Teri | Rp 42.000 |
| p | Tongkol | Rp 35.000 |
| q | Tuna | Rp 56.000 |
| r | *Kembali ke menu login* | — |

## 🚚 Daftar Ongkos Kirim

| Ongkir | Tujuan |
|---|---|
| **Rp 10.000** | Lampung Selatan, Pesawaran, Metro, Lampung Timur |
| **Rp 15.000** | Pringsewu, Lampung Tengah, Tanggamus |
| **Rp 20.000** | Tulang Bawang, Lampung Utara, Tulang Bawang Barat |
| **Rp 25.000** | Pesisir Barat, Lampung Barat |
| **Rp 30.000** | Waykanan, Mesuji |

**Rumus total pembayaran:**

```
Total = (Harga per kg × Jumlah kg) + Ongkir
```

## 📁 Struktur Proyek

```
app-jual-beli-ikan-cpp/
├── Aplikasi Shop Fish.cpp   # Kode sumber program
└── README.md
```

## 🚀 Cara Menjalankan

### Prasyarat

Compiler C++, misalnya **g++** (MinGW di Windows, atau `build-essential` di Linux), atau IDE seperti **Dev-C++** dan **Code::Blocks**.

### Kompilasi dan jalankan

```bash
g++ "Aplikasi Shop Fish.cpp" -o shopfish
./shopfish        # Linux / macOS
shopfish.exe      # Windows
```

## 🧪 Contoh Penggunaan

1. Pilih **1** untuk mendaftar akun, lalu isi username dan password.
2. Pilih **2** untuk login dengan akun tadi.
3. Pilih ikan, misalnya **a** (Bandeng), lalu masukkan jumlah kilogram, misalnya `3`.
4. Isi nama, lalu pilih alamat tujuan, misalnya **c** (Metro, ongkir Rp 10.000).
5. Isi kode pos dan nomor telepon.
6. Program menampilkan total: `67.500 + 10.000 = 77.500`.
7. Ketik `y` untuk memesan lagi atau `n` untuk keluar.

## 🛠️ Konsep C++ yang Dipraktikkan

- Input dan output dengan `iostream` (`cin`, `cout`)
- Struktur data `struct` dan *array* (data pengguna)
- Fungsi (`registerUser`, `loginUser`) dengan nilai kembali `bool`
- Percabangan `if-else` dan `switch-case`
- Perulangan `do-while` dan `while`
- Manipulasi string C dengan `strcmp` (`<cstring>`)
- Alur program dengan `goto` dan label

## ⚠️ Keterbatasan

- Data akun hanya tersimpan selama program berjalan dan hilang saat program ditutup.
- Password disimpan sebagai teks biasa, tanpa enkripsi.
- Jumlah kilogram hanya menerima **bilangan bulat**, sehingga pesanan pecahan seperti 1,5 kg belum didukung.
- Setiap pesanan hanya memuat **satu jenis ikan**.
- Nama hanya satu kata karena memakai `cin >>`.
- Program belum menangani input huruf besar pada menu ikan dan alamat.

## 👤 Penulis

**Angga Fadzar**

---

*Dibuat untuk keperluan pembelajaran pemrograman C++.*
