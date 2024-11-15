#include <stdio.h>
#include <string.h>

int main()
{
    float nilai_kehadiran, nilai_tugas, nilai_UTS, nilai_UAS, nilai_akhir;
    char grade;
    char keterangan[100];

    // input
    printf("masukan nilai kehadiran (0-100): ");
    scanf(" %f", &nilai_kehadiran);
    printf("masukan nilai tugas (0-100): ");
    scanf(" %f", &nilai_tugas);
    printf("masukan nilai UTS (0-100): ");
    scanf(" %f", &nilai_UTS);
    printf("masukan nilai UAS (0-100): ");
    scanf(" %f", &nilai_UAS);

    // hitung nilai akhir dengan bobot yang telah di tentukan
    nilai_akhir = (nilai_kehadiran * 0.2) + (nilai_tugas * 0.2) + (nilai_UTS * 0.25) + (nilai_UAS * 0.35);

    // menentukan grade berdasar nilai akhir
    if (nilai_akhir >= 91 && nilai_akhir <= 100)
    {
        grade = 'A';
        strcpy(keterangan, "selamat! Anda lulus dengan nilai yang sangat memuaskan!");
    }
    else if (nilai_akhir >= 86 && nilai_akhir <= 90)
    {
        grade = 'A'; // seharusnya -A
        strcpy(keterangan, "selamat! Anda lulus dengan nilai yang sangat memuaskan!");
    }
    else if (nilai_akhir >= 81 && nilai_akhir <= 85)
    {
        grade = 'B'; // seharusnya B+
        strcpy(keterangan, "selamat! Anda lulus dengan nilai yang baik, tingkatkan terus belajarnya");
    }
    else if (nilai_akhir >= 76 && nilai_akhir <= 80)
    {
        grade = 'B';
        strcpy(keterangan, "selamat! Anda lulus dengan nilai yang baik, tingkatkan terus belajarnya!");
    }
    else if (nilai_akhir >= 66 && nilai_akhir <= 75)
    {
        grade = 'B'; // seharusnya -B
        strcpy(keterangan, "selamat! Anda lulus dengan nilai yang baik, tingkatkan terus belajarnya!");
    }
    else if (nilai_akhir >= 56 && nilai_akhir <= 65)
    {
        grade = 'C';
        strcpy(keterangan, "Anda lulus, tingkatkan lagi kedepannya!");
    }
    else if (nilai_akhir >= 45 && nilai_akhir <= 55)
    {
        grade = 'D';
        strcpy(keterangan, "Maaf, Anda tidak lulus!");
    }
    else
    {
        grade = 'E';
        strcpy(keterangan, "Maaf, Anda tidak lulus!");
    }

    // tampilkan hasil
    printf("\nNilai Akhir : %.2f\n", nilai_akhir);
    printf("grade : %c\n", grade);
    printf("keterangan : %s\n ", keterangan);

    return 0;
}