# Luminous Quest — Pemrograman Dasar (TETI Lab Skill 2026)

Repository ini berisi jawaban tugas **Luminous Quest** pada program **TETI Lab Skill (TLS) 2026**, Departemen Teknik Elektro dan Informasi (DTETI), Universitas Gadjah Mada.

Nama: Putri Azzahra Nur Aisyah
Kelompok: OPAL

---

## 📌 Deskripsi Tugas

Tugas ini terdiri dari dua fase pengerjaan untuk menyelesaikan dua problem pemrograman:

1. **Problem 1 — The Last Astronaut**
   Simulasi eliminasi astronot secara melingkar (mirip *Josephus Problem*), di mana nilai langkah eliminasi (K) berubah secara dinamis setiap kali ada astronot yang gugur, tergantung apakah nomor yang gugur genap atau ganjil.

2. **Problem 2 — Alien-In-The-Middle**
   Program penyandian (*cipher*) pesan, di mana setiap huruf digeser sejumlah nilai posisi alfabet dari huruf sebelumnya (pada pesan asli), dengan aturan "berputar kembali" jika hasil pergeseran melewati huruf Z.

## 🗂️ Struktur Repository

```
├── Fase1_Pseudocode_Flowchart.pdf   # Fase 1: pseudocode & flowchart kedua problem
├── problem1_last_astronaut.cpp      # Fase 2: implementasi C++ Problem 1
├── problem2_alien_in_the_middle.cpp # Fase 2: implementasi C++ Problem 2
└── README.md
```

## 🚧 Fase Pengerjaan

### Fase 1 — Logika Penyelesaian
Berisi pseudocode dan flowchart untuk masing-masing problem beserta penjelasan logikanya, dirangkum dalam satu file PDF (`Fase1_Pseudocode_Flowchart.pdf`).

### Fase 2 — Implementasi C++
Kedua problem diimplementasikan dalam C++ dengan ketentuan:
- Hanya menggunakan library `<iostream>`
- Tidak menggunakan function bawaan library lain — seluruh function pendukung (jika ada) dibuat manual (*user-defined function*)

## ⚙️ Cara Menjalankan Program

Kompilasi dan jalankan masing-masing file menggunakan `g++`:

```bash
# Problem 1
g++ -o problem1 problem1_last_astronaut.cpp
./problem1

# Problem 2
g++ -o problem2 problem2_alien_in_the_middle.cpp
./problem2
```

### Contoh Input/Output

**Problem 1**
```
Masukkan jumlah astronot (N): 8
Masukkan nilai K awal: 2

Urutan astronot yang tereliminasi: 2, 6, 5, 4, 1, 8, 7
Astronot terakhir yang bertahan: 3
```

**Problem 2**
```
Masukkan pesan asli (huruf kapital, tanpa spasi): ALIENS
Pesan tersandi: AMUNSG
```

## 🏫 Informasi

Tugas ini dikerjakan sebagai bagian dari rangkaian program **TETI Lab Skill (TLS) 2026** di DTETI, Fakultas Teknik, Universitas Gadjah Mada.
