//
//  main.c
//  Practice
//
//  Created by Nam 😋 on 9/15/17.
//  Copyright © 2017 Nam 😋. All rights reserved.
//

//Chuong trinh doan so bi mat
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int taoSoNgauNhien(int MIN,int MAX);
void sosanh(int socuaban,int soBiMat);

void sosanh(int socuaban,int soBiMat)
{
    if (socuaban<soBiMat)
        printf("Nho hon!\n");
    else if (socuaban>soBiMat)
        printf("Lon hon!\n");
}

int taoSoNgauNhien(int MIN,int MAX)
{
    int soBiMat;
    srand (time(NULL));
    soBiMat = (rand( ) % (MAX - MIN + 1)) + MIN;
    return soBiMat;
}

int main()
{
    int soBiMat,socuaban,solandoan=0,tieptucgame=1,a=0,chedochoi=0;
    int MAX=0, mucchoi=0;
    const MIN=1;
    do
    {
        printf("Chon che do choi:\n1. Single Player\n2. 2 Players\n");
        scanf("%d",&chedochoi);
    }
    while (chedochoi!=1&&chedochoi!=2);
    switch (chedochoi)
    {
            //Single Player
        case 1:
            //Chon muc do
            while (tieptucgame==1)
            {
                do
                {
                    printf("Chon cap do:\n1. Easy (Random Range 1-10)\n2. Medium (Random Range 1-50)\n3. Hard (Random Range 1-100)\n");
                    scanf("%d",&mucchoi);
                }
                while (mucchoi!=1&&mucchoi!=2&&mucchoi!=3);
                switch (mucchoi)
                {
                    case 1:
                        MAX=10;
                        break;
                    case 2:
                        MAX=50;
                        break;
                    case 3:
                        MAX=100;
                        break;
                }
                //Start
                soBiMat=taoSoNgauNhien(MIN, MAX);
                do
                {
                    printf("So can tim la bao nhieu? ");
                    scanf("%d",&socuaban);
                    sosanh(socuaban, soBiMat);
                    solandoan++;
                }
                while (socuaban!=soBiMat);
                if (socuaban==soBiMat)
                {
                    printf("Chuc mung ! Ban da tim duoc so bi mat sau %d lan doan.\n",solandoan);
                    printf("Ban co muon choi tiep khong?\nGo 1 de tiep tuc.");
                    scanf("%d",&a);
                    switch (a)
                    {
                        case 1:
                            tieptucgame=1;
                            solandoan=0;
                            break;
                        default:
                            tieptucgame=0;
                            break;
                    }
                }
            }
            break;
            //2 Players
        case 2:
            //Nguoi thu 1 nhap so
            printf("Moi nguoi choi thu nhat nhap so bi mat: ");
            scanf("%d",&soBiMat);
            //Start
            while (tieptucgame==1)
            {
                do
                {
                    printf("So can tim la bao nhieu? ");
                    scanf("%d",&socuaban);
                    sosanh(socuaban, soBiMat);
                    solandoan++;
                }
                while (socuaban!=soBiMat);
                if (socuaban==soBiMat)
                {
                    printf("Chuc mung ! Ban da tim duoc so bi mat sau %d lan doan.\n",solandoan);
                    printf("Ban co muon choi tiep khong?\nGo 1 de tiep tuc.");
                    scanf("%d",&a);
                    switch (a)
                    {
                        case 1:
                            tieptucgame=1;
                            solandoan=0;
                            break;
                        default:
                            tieptucgame=0;
                            break;
                    }
                }
            }
            break;
    }
    return (0);
}
 */

// Chuong trinh thuc hien cac phep tinh
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pheptinh;
    double so1, so2, tong, hieu, tich, thuong;
    printf("Cac phep tinh co the thuc hien:\n");
    printf("1. Phep cong\n2. Phep tru\n3. Phep nhan\n4. Phep chia\n");
    printf("Chon phep tinh: ");
    scanf("%d", &pheptinh);
    switch (pheptinh)
{
case 1:
    printf("Nhap so thu nhat: ");
    scanf("%lf", &so1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &so2);
    tong= so1+so2;
    printf("Ket qua cua phep tinh la: %lf\n", tong);
    break;
case 2:
    printf("Nhap so thu nhat: ");
    scanf("%lf", &so1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &so2);
    hieu= so1-so2;
    printf("Ket qua cua phep tinh la: %lf\n", hieu);
    break;
case 3:
    printf("Nhap so thu nhat: ");
    scanf("%lf", &so1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &so2);
    tich= so1*so2;
    printf("Ket qua cua phep tinh la: %lf\n", tich);
    break;
case 4:
    printf("Nhap so thu nhat: ");
    scanf("%lf", &so1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &so2);
    thuong= so1/so2;
    printf("Ket qua cua phep tinh la: %lf\n", thuong);
    break;
default:
        printf("Xin nhap vao lua chon tu 1 den 4.\n");
        break;
    }
    return(0);
}
*/

//Bai 3.1 ok
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,z,F;
    printf("Nhap so x: ");
    scanf("%lf", &x);
    printf("Nhap so y: ");
    scanf("%lf", &y);
    printf("Nhap so z: ");
    scanf("%lf",&z);
    F=(x+y+z)/(pow(x,2)+pow(y,2)+1) - fabs(x-z*cos(y));
    printf("Gia tri cua F = %lf\n",F);
    return (0);
}
 */

//Bai 3.2 ok
/*
#include <stdio.h>
#include <math.h>
int main ()
{
    float r,M,S;
    do
    {
        printf("Nhap ban kinh r (r>0): ");
        scanf("%f",&r);
    }
    while (r<=0);
    M=2*M_PI*r;
    S=M_PI*pow(r, 2);
    printf("Chu vi hinh tron la: %f\n",M);
    printf("Dien tich hinh tron la: %f\n",S);
    return (0);
}
*/
 
//Bai 3.3 ok
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,F;
    printf("Nhap so x: ");
    scanf("%lf", &x);
    printf("Nhap so y: ");
    scanf("%lf", &y);
    F=pow(y,6) + x*pow(y,5) + pow(x,2)*pow(y,4) + pow(x,3)*pow(y,3) + pow(x,4)*pow(y,2) + pow(x,5)*y + pow(x,6);
    printf("Gia tri cua F = %lf\n",F);
    return (0);
}
 */

//Bai 3.4 ok
/*
#include <stdio.h>
#include <math.h>
int main()
{
    long a,b,P,S;
    printf("Nhap so a: ");
    scanf("%ld", &a);
    printf("Nhap so b: ");
    scanf("%ld", &b);
    P=2*a+2*b;
    S=a*b;
    printf("Chu vi cua hinh chu nhat la: %ld\n",P);
    printf("Dien tich cua hinh chu nhat la: %ld\n",S);
    return (0);
}
*/

//Bai 3.5 ok
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,kq1,kq2,kq3;
    printf("Nhap so x: ");
    scanf("%lf", &x);
    printf("Nhap so y: ");
    scanf("%lf", &y);
    kq1=pow(x,2)*pow(y,2);
    kq2=pow((x+y),2);
    kq3=pow((x-y),2);
    printf("X^2+Y^2 = %lf\n",kq1);
    printf("(X+Y)^2 = %lf\n",kq2);
    printf("(X-Y)^2 = %lf\n",kq3);
    return (0);
}
*/

//Bai 3.6 ok
/*
#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int toan, li, hoa, tong, trungbinh;
    printf("Nhap diem toan: ");
    scanf("%d", &toan);
    printf("Nhap diem li: ");
    scanf("%d",&li);
    printf("Nhap diem hoa: ");
    scanf("%d", &hoa);
    tong=toan+li+hoa;
    trungbinh=tong/3;
    printf("Tong diem cua hoc sinh la: %d\n",tong);
    printf("Trung binh diem cua hoc sinh la: %d\n",trungbinh);
    return (0);
}
*/

//Bai 3.7 oke
/*
#include <stdio.h>
#include <math.h>
int main()
{
    long a,b,c,tong,tich;
    float trungbinh;
    printf("Nhap so a: ");
    scanf("%ld", &a);
    printf("Nhap so b: ");
    scanf("%ld", &b);
    printf("Nhap so c: ");
    scanf("%ld",&c);
    tong=a+b+c;
    tich=a*b*c;
    trungbinh=(float)tong/3;
    printf("Tong cua ba so do la: %ld\n",tong);
    printf("Tich cua ba so do la: %ld\n",tich);
    printf("Trung binh cua ba so do la: %f\n",trungbinh);
    return (0);
}
*/

//Bai 3.8 oke
/*
#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long n,S;
    printf("Nhap so n: ");
    scanf("%ld",&n);
    S=(n*(n+1))/2;
    printf("Tong S = 1+2+3+...+n = %ld\n", S);
    return (0);
}
*/

//Bai 3.9 not ok
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,ma = 0;
    char kitu;
    printf("Chon yeu cau can thuc hien: \n");
    printf("1. Nhập vào một ký tự và in ra mã ASCII tương ứng với các ký tự đó.\n");
    printf("2. Nhập vào một số nguyên (từ 1 đến 255) và in ra kí tự có mã ASCII tương ứng.\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            printf("Nhap ki tu: ");
            kitu=getchar();
            printf("Ma cua ki tu do la: %d\n", kitu);
        break;
        case 2:
            printf("Nhap ma cua ki tu: ");
            scanf("%d",ma);
            printf("Ki tu do la: %c", ma);
            break;
        default:
            printf("Nhap dung so cua yeu cau. Thu lai.");
            break;
    }
    return (0);
}
*/

//Bai 4.1 oke
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int ktra;
    double a,b,c;
    printf("Nhap do dai canh thu nhat: ");
    scanf("%lf",&a);
    printf("Nhap do dai canh thu hai: ");
    scanf("%lf",&b);
    printf("Nhap do dai canh thu ba: ");
    scanf("%lf",&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        ktra=1;
        printf("La 3 canh tam giac ");
    }
    else
    {
        ktra=0;
        printf("Khong phai la 3 canh tam giac.\n");
    }
    if (ktra==1)
    {
        if (a==b&&a==c&&b==c) printf("deu\n");
        else if (pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(b,2)+pow(c,2)==pow(a,2))
            printf("vuong\n");
        else if (a==b||a==c||b==c) printf("can\n");
        else printf("thuong\n");
    return (0);
    }
}
*/

//Bai 4.2 oke
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("Nhap so nguyen trong khoang tu 0 den 9: ");
    scanf("%d",&x);
    switch (x)
    {
        case 0:
            printf("Khong\n");
            break;
        case 1:
            printf("Mot\n");
            break;
        case 2:
            printf("Hai\n");
            break;
        case 3:
            printf("Ba\n");
            break;
        case 4:
            printf("Bon\n");
            break;
        case 5:
            printf("Nam\n");
            break;
        case 6:
            printf("Sau\n");
            break;
        case 7:
            printf("Bay\n");
            break;
        case 8:
            printf("Tam\n");
            break;
        case 9:
            printf("Chin\n");
            break;
        default:
            printf("So khong hop le.\n");
            break;
    }
    return (0);
}
 */

//Bai 4.3 oke
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0,i,giaithua=1;
    do
    {
    printf("Nhap so nguyen n<8: ");
    scanf("%d",&n);
    }
    while (n>=8);
    if (n>=0)
    {
        for (i=1;i<=n;i++)
        {
            giaithua=giaithua*i;
        }
        printf("Gia tri cua n giai thua la: %d\n",giaithua);
    }
    else printf("Khong ton tai gia tri n giai thua.\n");
    return (0);
}
*/

//Bai 4.4 not oke
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float e=1,epsilon=0;
    int i=1,ngiaithua = 1,k;
    do
    {
        printf("Nhap so epsilon < 1: ");
        scanf("%f",&epsilon);
    }
    while (epsilon>=1); //Nhap epsilon co dieu kien

    
    printf("Gia tri cua e la: %f",e);
    return (0);
}

//Bai 4.5 oke
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,S=0,i;
    do
    {
        printf("Nhap so nguyen n tu 10 den 100: ");
        scanf("%d",&n);
    }
    while (!(n>10&&n<100));
    for (i=1; i<=n; i++)
    {
        S=S+i;
    }
    printf("Tong cac so tu 1 den n la: %d\n",S);
    return (0);
}
 */

//Bai 4.6 oke
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,ktra;
    printf("Nhap so n: ");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("n khong phai la so nguyen to.\n");
    }
    else if (n==1)
    {
        printf("n la so nguyen to.\n");
    }
    else
    {
        ktra=1;
        for (i=2; i<=(n-1); i++)
        {
            if (n%i==0)
            {
                ktra=0;
                break;
            }
        }
        if (ktra==1)
        {
            printf("n la so nguyen to.\n");
        }
        else printf("n khong la so nguyen to.\n");
    }
    return (0);
}
 */

//Bai 4.7

    




