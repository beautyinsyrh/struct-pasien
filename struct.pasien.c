#include <stdio.h>
#include <string.h>

struct Pasien{
    char NamaPasien[100];
    char NomorRekamMedis[15];
    char JenisKelamin;
    int Umur;
    char RiwayatPenyakit[300];
    struct{
        int Tanggal;
        int Bulan;
        int Tahun;
    }TanggalKunjungan;
};

void TampilkanDataPasien (struct Pasien p){
    printf("\n --- Data Pasien --- \n");
    printf("Nama Pasien: %s\n", p.NamaPasien);
    printf("Nomor Rekam Medis: %s\n", p.NomorRekamMedis);
    printf("Jenis Kelamin: %c\n", p.JenisKelamin);
    printf("Umur: %i\n", p.Umur);
    printf("Riwayat Penyakit: %s\n", p.RiwayatPenyakit);
    printf("Tanggal Kunjungan: %02d-%02d%d\n", p.TanggalKunjungan.Tanggal, p.TanggalKunjungan.Bulan, p.TanggalKunjungan.Tahun);
}

struct Pasien TambahDataPasien1(){
    struct Pasien p;
    strcpy(p.NamaPasien, "Fasli");
    strcpy(p.NomorRekamMedis, "2301654789");
    p.JenisKelamin = 'L';
    p.Umur = 20;
    strcpy(p.RiwayatPenyakit, "Pasien memiliki riwayat penyakit gerd");
    p.TanggalKunjungan.Tanggal = 19;
    p.TanggalKunjungan.Bulan = 8;
    p.TanggalKunjungan.Tahun = 2024;
    return p;
}

struct Pasien TambahDataPasien2(){
    struct Pasien p;
    strcpy(p.NamaPasien, "Rahma");
    strcpy(p.NomorRekamMedis, "2301654790");
    p.JenisKelamin = 'P';
    p.Umur =  40;
    strcpy(p.RiwayatPenyakit, "Pasien memiliki riwayat penyakit diabetes");
    p.TanggalKunjungan.Tanggal = 22;
    p.TanggalKunjungan.Bulan = 8;
    p.TanggalKunjungan.Tahun = 2024;
    return p;
}

int main(){
    struct Pasien daftarPasien[2];
    daftarPasien[0] = TambahDataPasien1();
    daftarPasien[1] = TambahDataPasien2();
    TampilkanDataPasien(daftarPasien[0]);
    TampilkanDataPasien(daftarPasien[1]);
    return 0;
}
