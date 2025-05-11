# 🎮 Konsol Tabanlı Mini Oyunlar – C ile Geliştirme Projesi

Bu proje, C programlama dili ile geliştirilmiş iki farklı konsol tabanlı mini oyundan oluşmaktadır. Projenin amacı, temel programlama kavramlarını (koşullar, döngüler, diziler, fonksiyonlar) oyunlaştırılmış senaryolar ile pekiştirmektir.

## 🕹️ Oyun 1: Atış Poligonu Simülasyonu

Kullanıcı, 1 ile 10 arasında rastgele konumlanan hedeflere 10 kez atış yapar. Her atış için kullanıcıdan bir konum girmesi istenir.

**Puanlama Sistemi:**
- 🎯 İsabetli atış (tam konum): **+10 puan**
- ➕ Yakın atış (hata ≤ 0.5): **+5 puan**
- ❌ Diğer durumlar: **0 puan**

**Oyun Sonunda Gösterilenler:**
- Toplam hata oranı
- Başarılı, yakın ve başarısız atış sayıları
- Toplam puan

Bu oyun ile kullanıcıdan alınan pozisyonlar ve rastgele hedefler karşılaştırılarak nişan alma hassasiyeti ve skor hesaplaması yapılmaktadır.

## 🔢 Oyun 2: Sayı Tahmin Oyunu

Program, 3 basamaklı ve rakamları birbirinden farklı rastgele bir sayı üretir. Kullanıcının görevi bu sayıyı **maksimum 10 denemede** tahmin etmektir.

Her tahmin için kullanıcıya 3 basamaklı bir ipucu sayısı verilir. Bu ipucu:

- `1`: Rakam doğru ve yeri doğru
- `9`: Rakam doğru ama yeri yanlış
- `0`: Rakam sayıda yok

🎯 Doğru tahmin yapılana kadar ipuçları gösterilir ve her başarısız denemede **10 puan kaybedilir**. Başlangıç puanı: **100**.

### 🎯 Örnek:
Üretilen sayı: `650`  
Kullanıcı tahmini: `625`  
İpucu: `1 0 9`  
- `6` doğru yerde → `1`
- `2` yok → `0`
- `5` var ama yeri yanlış → `9`

Bu mantıkla kullanıcıya yönlendirme sağlanır.

## 🎓 Projenin Amacı

Bu proje, algoritma geliştirme yeteneğini güçlendirmek, temel C dilini öğrenmek ve oyunlaştırma yaklaşımı ile programlamaya giriş yapmak için tasarlanmıştır.

## ⚙️ Kullanılan Teknolojiler

- Programlama Dili: C  
- IDE: Code::Blocks / Visual Studio Code  
- Platform: Komut Satırı (Console)

## 👤 Geliştirici

"DAMLA ARPA"
Bilgisayar Mühendisliği  Öğrencisi
Dumlupınar Üniversitesi

---
[Proje Ödevi Github.pdf](https://github.com/user-attachments/files/20149401/Proje.Odevi.Github.pdf)
