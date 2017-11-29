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

//Bai 3.9 ok
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ma = 0;
    char kitu;
        printf("Nhap ki tu: ");
        kitu=getchar();
        fflush(stdin);
        printf("Ma cua ki tu do la: %d\n", kitu);
        fflush(stdin);
        printf("Nhap ma cua ki tu: ");
        scanf("%d",&ma);
        printf("Ki tu do la: %c\n",ma);
    return (0);
}
*/

//Bai 4.1 oke
/*
#include <stdio.h>
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
    if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
        ktra=1;
        printf("La 3 canh tam giac ");
    }
    else {
        ktra=0;
        printf("Khong phai la 3 canh tam giac.\n");
    }
    if (ktra==1) {
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

//Bai 4.4 oke
/*
#include <stdio.h>
int main()
{
    float e=1,epsilon=0,i=0,ngiaithua = 1;
    int k=1;
    do
    {
        printf("Nhap so epsilon < 1: ");
        scanf("%f",&epsilon);
    }
    while (epsilon>=1); //Nhap epsilon co dieu kien
    while(1/ngiaithua>=epsilon)
    {
        i++;
        ngiaithua=1;
        for (k=1; k<=i; k++)
        {
            ngiaithua=ngiaithua*k;
        }
        if (ngiaithua<=((float)1/epsilon))
        {
        e=e+(float)1/ngiaithua;
        }
    }
    printf("Gia tri cua e la: %.4f\n",e);
    return (0);
}
*/

//Bai 4.5 oke
/*
#include <stdio.h>
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

//Bai 4.7 oke
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double epsilon=0,i=0,pi,pi4=1;
    do
    {
        printf("Nhap so epsilon < 1: ");
        scanf("%lf",&epsilon);
    }
    while ((epsilon>=1)||(epsilon<=0)); //Nhap epsilon co dieu kien
    while(i<=(((float)1/epsilon)-1)/2)
    {
        i++;
        pi4=pi4+pow(-1,i)*((float)1/(2*i+1));
    }
    pi=pi4*4;
    printf("Gia tri cua pi la: %f\n",pi);
    return (0);
}
*/

//Bai 4.8 oke
/*
#include <stdio.h>
int main()
{
    long a,b,i=0,k=0,UCLN=0,BCNN=0;
    do
    {
    printf("Nhap so a>0: ");
    scanf("%ld",&a);
    }
    while (a<=0); //Nhap a co dieu kien
    do
    {
    printf("Nhap so b>0: ");
    scanf("%ld",&b);
    }
    while (b<=0); //Nhap b co dieu kien
    if (a==b) {
        UCLN=a;
        BCNN=a;
    } //Neu a=b?
    else
    {
        
        if (a<b) {
            k=a;
            a=b;
            k=b;
        } //Xet truong hop a>b, neu a<b thi doi cho.
            for (i=b; i>=1; i--) {
                if (a%i==0&&b%i==0)
                {
                    UCLN=i;
                    break;
                }
            } //Tim UCLN
            i=a;
            while (1) {
                if (i%a==0&&i%b==0) {
                    BCNN=i;
                    break;
                }
                i++;
            } //Tim BCNN
    }
    printf("Uoc chung lon nhat cua hai so do la: %ld\n",UCLN);
    printf("Boi chung nho nhat cua hai so do la: %ld\n",BCNN);
    return (0);
}
*/

//Bai 4.9 oke
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,x,x1,x2,delta,ix;
    printf("Nhap he so a: ");
    scanf("%lf",&a);
    printf("Nhap he so b: ");
    scanf("%lf",&b);
    printf("Nhap he so c: ");
    scanf("%lf",&c);
    if (a==0) {
        x=-c/b;
        printf("Phuong trinh khong phai la phuong trinh bac hai, nhung co nghiem x = %lf\n",x);
    }
    else {
        delta=pow(b, 2)-4*a*c;
        if (delta==0) {
            x=-b/(2*a);
            printf("Phuong trinh co nghiem kep x = %lf\n",x);
        }
        else if (delta>0) {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co hai nghiem phan biet x1 = %lf, x2 = %lf\n",x1,x2);
        }
        else {
            x=-b/(2*a);
            ix=sqrt(-delta)/(2*a);
            printf("Phuong trinh co nghiem phuc la x1 = %lf+%lfi, x2=%lf-%lfi\n",x,ix,x,ix);
        }
    }
    return (0);
}
*/

//Bai 4.10 oke
/*
#include <stdio.h>
int main()
{
    int n,S=0;
    do {
    printf("Nhap so n<1000: ");
    scanf("%d",&n);
    }
    while (n<=0||n>=1000);
    S=S+n/100+(n%100)/10+(n%10);
    printf("Tong cac chu so cua so do la: %d\n",S);
    return (0);
}
*/

//Bai 4.11 oke
/*
#include <stdio.h>
#include <math.h>
int main()
{
    long i,k,n,ngiaithua=1;
    double x,S1 = 1,S2 = 1,S3 = 1;
    printf("Nhap so n>0: ");
    scanf("%ld",&n);
    printf("Nhap so x: ");
    scanf("%lf",&x);
    for (i=1; i<=n; i++) {
        S1=S1+pow(x, i);
    }
    for (i=1; i<=n; i++) {
        S2=S2+pow(-1, i)*pow(x, i);
    }
    for (i=1; i<=n; i++) {
        ngiaithua=1;
        for (k=1; k<=i; k++) {
            ngiaithua=ngiaithua*k;
        }
        S3=S3+pow(x, i)/ngiaithua;
    }
    printf("Tong S = 1+x+x^2+...+x^n = %.4lf\n",S1);
    printf("Tong S = 1-x+x^2-...(-1)^n*x^n = %.4lf\n",S2);
    printf("Tong S = 1+x/1!+x^2/2!+...+x^n/n! = %.4lf\n",S3);
    return (0);
}
*/

//Bai 4.12 oke
/*
#include <stdio.h>
int main()
{
    int i=0;
    double S=0,x=0,lonnhat=0,nhonhat=0,TBC;
    printf("Nhap vao day so thuc cho den khi gia tri bang 0: ");
    do {
        scanf("%lf",&x);
        i++;
        S=S+x;
        if (x>lonnhat) {
            lonnhat=x;
        }
        if (x<nhonhat) {
            nhonhat=x;
        }
    } while (x!=0);
    TBC=S/(i-1);
    printf("Trung binh cong cua day la: %.4lf\n",TBC);
    printf("Gia tri lon nhat cua day la: %.4lf\n",lonnhat);
    printf("Gia tri nho nhat cua day la: %.4lf\n",nhonhat);
    return (0);
}
 */

//Bai 5.1 oke
/*
#include <stdio.h>
int main()
{
    int sophantu,i=0,demsoAm=0,demsoDuong=0,demso0=0;
    do {
        printf("Nhap so phan tu cua day: ");
        scanf("%d",&sophantu);
    } while (!(sophantu>0&&sophantu<10));
    double dayso[sophantu],tongAm=0,tongDuong=0,x;
    for (i=0;i<sophantu;i++) {
        printf("Nhap phan tu thu %d: ",(i+1));
        scanf("%lf",&dayso[i]);
        if (dayso[i]<0) {
            tongAm=tongAm+dayso[i];
            demsoAm++;
        }
        else if (dayso[i]>0) {
            tongDuong=tongDuong+dayso[i];
            demsoDuong++;
        }
        else demso0++;
    }
    printf("Day so vua nhap la: ");
    for (i=0;i<sophantu;i++)
        printf("%.2lf ",dayso[i]);
    printf("\n");
    printf("Trung binh cong cac so am la: %.4lf\n",(tongAm/demsoAm));
    printf("Trung binh cong cac so duong la: %.4lf\n",(tongDuong/demsoDuong));
    printf("So cac so 0 trong day la: %d\n", demso0);
    printf("Nhap so x bat ki: ");
    scanf("%lf",&x);
    printf("Vi tri cac so trong day co gia tri bang x la: ");
    for (i=0; i<sophantu; i++)
        if (x==dayso[i]) printf("%d ",(i+1));
    printf("\n");
    return (0);
}
 */

//Bai 5.2 not oke
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int sophantu,i=0,j=0,k;
    do {
        printf("Nhap so phan tu cua day: ");
        scanf("%d",&sophantu);
    } while (!(sophantu>0&&sophantu<=10));
    float dayso[sophantu];
    for (i=0;i<sophantu;i++) {
        printf("Nhap phan tu thu %d: ",(i+1));
        scanf("%f",&dayso[i]);
    }
    for (i=0; i<sophantu-1; i++)
        for (j=i+1; j<sophantu; j++)
            if (dayso[i]>dayso[j]) {
                k=dayso[i];
                dayso[i]=dayso[j];
                dayso[j]=k;
            }
    printf("Day so sap xep tang dan la: ");
    for (i=0; i<sophantu; i++) printf("%f ",dayso[i]);
    printf("\nDay so sap xep giam dan la: ");
    for (i=(sophantu-1); i>=0; i--) printf("%f ",dayso[i]);
    printf("\n");
    float daysoabs[sophantu];
    for (i=0; i<sophantu; i++) daysoabs[i]=fabs(dayso[i]);
    for (i=0; i<sophantu-1; i++)
        for (j=i+1; j<sophantu; j++)
            if (daysoabs[i]>daysoabs[j]) {
                k=daysoabs[i];
                daysoabs[i]=daysoabs[j];
                daysoabs[j]=k;
            }
    printf("Day so giam dan theo gia tri tuyet doi la: ");
    for (i=(sophantu-1);i>=0 ; i--) printf("%f ",daysoabs[i]);
    return (0);
}
*/

/* Theza bai 5.2
#include <stdio.h>

main()
{int n,i,j;
    float t,a[10];
    do {printf("Nhap vao so phan tu cua day 0<n<=10 :");
        scanf("%d",&n);}
    while(n<=0||n>10);
    printf("\n Nhap mang :");
    for(i=0;i<n;i++)
    {printf("\n Nhap so thu %d :",i+1);
        scanf("%f",&a[i]);}
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if (a[i]>a[j]) {t=a[i];a[i]=a[j];a[j]=t;}
    printf("\n Day so theo thu tu tang dan la :\n");
    for(i=0;i<n;i++) printf("%f   ",a[i]);
    printf("\n Day so theo thu tu giam dan la :\n");
    for(i=n-1;i>=0;i--) printf("%f   ",a[i]);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if (a[i]*a[i]<a[j]*a[j]) {t=a[i];a[i]=a[j];a[j]=t;}
    printf("\n Day so theo thu tu giam dan theo gia tri tuyet doi la :\n");
    for(i=0;i<n;i++) printf("%f   ",a[i]);
}
*/

//Bai 5.3 oke
/*
#include <stdio.h>
int main()
{
    int sophantu,i=0,k=0,l=0;
    do {
        printf("Nhap so phan tu cua day: ");
        scanf("%d",&sophantu);
    } while (!(sophantu>0&&sophantu<=10));
    float manga[sophantu],mangb[sophantu],mangc[sophantu];
    for (i=0;i<sophantu;i++) {
        printf("Nhap phan tu thu %d: ",(i+1));
        scanf("%f",&manga[i]);
        if (manga[i]>0) {
            mangb[k]=manga[i];
            k++;
        }
        if (manga[i]<0) {
            mangc[l]=manga[i];
            l++;
        }
    }
    printf("Mang b gom cac so: ");
    for (i=0; i<k; i++) printf("%.4f ",mangb[i]);
    printf("\nMang c gom cac so:");
    for (i=0; i<l; i++) printf("%.4f ",mangc[i]);
    printf("\n");
    
}
*/

//Bai 5.4 oke but... conio.h
/*
#include <stdio.h>
#include <string.h>
int main()
{
    int i,k,soHocSinh;
    char dslop[10][30],temp[30];
    do {
        printf("Nhap so hoc sinh cua lop: ");
        scanf("%d",&soHocSinh);
    } while (!(soHocSinh<=10&&soHocSinh>0));
    for (i=0; i<soHocSinh; i++) {
        printf("Nhap ten hoc sinh: ");
        getchar();
        scanf("%[^\n]",&dslop[i]);
    }
    for (i=0; i<soHocSinh; i++)
        for (k=i; k<soHocSinh; k++)
            if (dslop[i]>dslop[k]) {
                strcpy(temp, dslop[i]);
                strcpy(dslop[i], dslop[k]);
                strcpy(dslop[k], temp);
            }
    printf("Danh sach hoc sinh la: ");
    for (i=0; i<soHocSinh; i++) printf("\n%s",dslop[i]);
    printf("\n");
    return (0);
}
*/

//Bai 5.5 oke but... conio.h
/*
#include <stdio.h>
#include <string.h>
int main()
{
    struct Hoso {
        char Hoten[40];
        float Diem;
        char Loai[10];
    };
    typedef struct Hoso Hoso;
    int soHocSinh,i;
    do {
        printf("Nhap so hoc sinh: ");
        scanf("%d",&soHocSinh);
    } while (!(soHocSinh>=0));
    Hoso Hocsinh[soHocSinh];
    printf("Nhap thong tin cac hoc sinh:\n");
    for (i=0; i<soHocSinh; i++) {
        fflush(stdin);
        printf("Nhap ho ten hoc sinh thu %d: ",(i+1));
        getchar();
        scanf("%[^\n]",&Hocsinh[i].Hoten);
        do {
            printf("Nhap diem cua hoc sinh thu %d: ",(i+1));
            scanf("%f",&Hocsinh[i].Diem);
        } while (!(Hocsinh[i].Diem>0));
        if (Hocsinh[i].Diem>8.5&&Hocsinh[i].Diem<=10) strcpy(Hocsinh[i].Loai,"Gioi");
        else if (Hocsinh[i].Diem>6.5&&Hocsinh[i].Diem<=8.5) strcpy(Hocsinh[i].Loai,"Kha");
        else if (Hocsinh[i].Diem>=5&&Hocsinh[i].Diem<=6.5) strcpy(Hocsinh[i].Loai,"Trung binh");
        else if (Hocsinh[i].Diem>=0&&Hocsinh[i].Diem<5) strcpy(Hocsinh[i].Loai,"Ko dat");
    }
    //Note doan code duoi.
    printf("\n%40s","XEP LOAI VAN HOA");
    printf("\n%-30s","HO VA TEN");
    printf("%-20s","DIEM");
    printf("%s","XEP LOAI");
    for(i=0;i<soHocSinh;i++) printf("\n%-30s%-20.2f%s",Hocsinh[i].Hoten,Hocsinh[i].Diem,Hocsinh[i].Loai);
    printf("\n");
    return (0);
}
 */

//Bai 5.6 oke
/*
#include <stdio.h>
int main()
{
    int m,n,i,k;
    printf("Nhap kich co ma tran:\n");
    printf("So hang: ");
    scanf("%d",&m);
    printf("So cot: ");
    scanf("%d",&n);
    long matranA[m][n],matranB[m][n],matranC[m][n];
    printf("Nhap ma tran A:\n");
    for (i=0; i<m; i++)
        for (k=0; k<n; k++) {
            printf("A%d%d:",i+1,k+1);
            scanf("%ld",&matranA[i][k]);
        }
    printf("Nhap ma tran B:\n");
    for (i=0; i<m; i++)
        for (k=0; k<n; k++) {
            printf("B%d%d:",i+1,k+1);
            scanf("%ld",&matranB[i][k]);
        }
    printf("\nMa tran A la:\n");
    for (i=0; i<m; i++) {
        for (k=0; k<n; k++)
            printf("%6ld",matranA[i][k]);
        printf("\n");
    }
    printf("\nMa tran B la:\n");
    for (i=0; i<m; i++) {
        for (k=0; k<n; k++)
            printf("%6ld",matranB[i][k]);
        printf("\n");
    }
    printf("\nMa tran tong C la:\n");
    for (i=0; i<m; i++) {
        for (k=0; k<n; k++) {
            matranC[i][k]=matranA[i][k]+matranB[i][k];
            printf("%6ld",matranC[i][k]);
        }
        printf("\n");
    }
    return (0);
}
 */

//Bai 5.7 oke
/*
#include <stdio.h>
int main()
{
    long m,n,k,i,j,x;
    printf("Nhap kich co ma tran A (mxk):\n");
    printf("So hang m: ");
    scanf("%ld",&m);
    printf("So cot k: ");
    scanf("%ld",&k);
    printf("Nhap kich co ma tran B (kxn):\n");
    printf("So cot: ");
    scanf("%ld",&n);
    long matranA[m][k],matranB[k][n],matranC[m][n];
    matranC[m][n]=0;
    printf("Nhap ma tran A:\n");
    for (i=0; i<m; i++)
        for (j=0; j<k; j++) {
            printf("A%ld%ld:",i+1,j+1);
            scanf("%ld",&matranA[i][j]);
        }
    printf("Nhap ma tran B:\n");
    for (i=0; i<k; i++)
        for (j=0; j<n; j++) {
            printf("B%ld%ld:",i+1,j+1);
            scanf("%ld",&matranB[i][j]);
        }
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            for (x=0; x<k; x++)
                matranC[i][j]=matranC[i][j]+matranA[i][x]*matranB[x][j];
    printf("\nMa tran C la:\n");
    for (i=0; i<m; i++) {
        for (k=0; k<n; k++)
            printf("%6ld",matranC[i][k]);
        printf("\n");
    }
    return (0);
}
*/

//Bai 5.8 oke
/*
#include <stdio.h>

void toigian(int *a,int *b)
{
    int i,UCLN = 1;
    if (*a==*b) UCLN=*a;//Neu a=b?
    else if (*a>*b) {
        for (i=*b; i>=1; i--)
            if (*a%i==0&&*b%i==0)
            {
                UCLN=i;
                break;
            } //Tim UCLN
    }
    else if (*a<*b) {
       for (i=*a; i>=1; i--)
           if (*a%i==0&&*b%i==0)
           {
               UCLN=i;
               break;
           } //Tim UCLN
    }
    if (UCLN!=1) {
        *a=*a/UCLN;
        *b=*b/UCLN;
    }
}

int main()
{
    struct Phanso {
        int tuso;
        int mauso;
    };
    typedef struct Phanso Phanso;
    Phanso pso1,pso2,tong,hieu,tich,thuong;
    printf("Nhap phan so thu nhat:\n");
    printf("Tu so: ");
    scanf("%d",&pso1.tuso);
    printf("Mau so: ");
    scanf("%d",&pso1.mauso);
    printf("Nhap phan so thu hai:\n");
    printf("Tu so: ");
    scanf("%d",&pso2.tuso);
    printf("Mau so: ");
    scanf("%d",&pso2.mauso);
    tong.mauso=pso1.mauso*pso2.mauso;
    tong.tuso=pso2.tuso*pso1.mauso+pso1.tuso*pso2.mauso;
    hieu.mauso=pso1.mauso*pso2.mauso;
    hieu.tuso=pso1.tuso*pso2.mauso-pso1.mauso*pso2.tuso;
    tich.mauso=pso1.mauso*pso2.mauso;
    tich.tuso=pso1.tuso*pso2.tuso;
    thuong.mauso=pso1.mauso*pso2.tuso;
    thuong.tuso=pso1.tuso*pso2.mauso;
    toigian(&tong.tuso,&tong.mauso);
    toigian(&hieu.tuso,&hieu.mauso);
    toigian(&tich.tuso,&tich.mauso);
    toigian(&thuong.tuso,&thuong.mauso);
    printf("Tong hai phan so la: %d/%d\n",tong.tuso,tong.mauso);
    printf("Hieu hai phan so la: %d/%d\n",hieu.tuso,hieu.mauso);
    printf("Tich hai phan so la: %d/%d\n",tich.tuso,tich.mauso);
    printf("Thuong hai phan so la: %d/%d\n",thuong.tuso,thuong.mauso);
    return(0);
 }
 */

//Bai 5.9 oke
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];
    printf("Nhap xau thu nhat: ");
    scanf("%s",&s1);
    printf("Nhap xau thu hai: ");
    scanf("%s",&s2);
    printf("Do dai xau 1 la: %ld\n",strlen(s1));
    printf("Do dai xau 2 la: %ld\n",strlen(s2));
    strcpy(s1, s2);
    printf("Xau 1 sau khi thuc hien lenh strcpy(s1,s2) la: %s\n",s1);
    printf("Xau 2 sau khi thuc hien lenh strcpy(s1,s2) la: %s\n",s2);
    printf("Gia tri strcmp(s1,s2) la: %d\n",strcmp(s1, s2));
    printf("Gia tri strcmp(s2,s1) la: %d\n",strcmp(s2, s1));
    strcat(s1, s2);
    printf("Xau 1 sau khi thuc hien lenh strcat(s1,s2) la: %s\n",s1);
    printf("Xau 2 sau khi thuc hien lenh strcat(s1,s2) la: %s\n",s2);
    return (0);
}
*/

//Bai 5.10 oke
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char hoten[100],hotenmoi[100];
    int i,k=0;
    printf("Nhap ho ten cua nguoi do: ");
    scanf("%[^\n]",&hoten);
    for (i=0;i<strlen(hoten);i++)
        if (hoten[i]!=' ') {
            hotenmoi[k]=hoten[i];
            k++;
        }
    printf("Ho va ten duoi dang chu thuong: ");
    for (i=0; i<strlen(hotenmoi); i++)
        printf("%c",tolower(hotenmoi[i]));
    printf("\nHo va ten duoi dang chu hoa: ");
    for (i=0; i<strlen(hotenmoi); i++)
        printf("%c",toupper(hotenmoi[i]));
    printf("\n");
    return (0);
}
*/


