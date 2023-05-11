#include <stdio.h>
#include <string.h>

int a=0,b,d,menu=0;
char c[16],nama['0'][64],nim['0'][64],kel['0'][64],jur['0'][64],fak['0'][64];
 
void create();
void show();
void update();
void del();
 
void create(){
   
    printf("masukkan nama     : ");
    scanf(" %[^\n]s",nama[a]);
    printf("masukkan nim      : ");
    scanf("%s",nim[a]);
    printf("masukkan kelas  : ");
    scanf("%s",kel[a]);
    printf("masukkan jurusan  : ");
    scanf(" %[^\n]s",jur[a]);
    printf("masukkan fakultas : ");
    scanf(" %[^\n]s",fak[a]);
 a=a+1;}
 
void show(){
    if(a<1){
        printf("anda belum input data");
    }else{
        b=1;
        while(b<=a){
            printf("%d.nama     : %s\n",b,nama[b]);
            printf("  nim      : %s\n",nim[b]);
            printf("  kelas  : %s\n",kel[b]);
            printf("  jurusan  : %s\n",jur[b]);
            printf("  fakultas : %s\n",fak[b]);
            printf("----------\n");
            b++;
        }
    }
}
 
void update(){
    printf("masukkan nim yang ingin di update : ");
    scanf("%s",c);
    b=1;
    d=0;
    while(b<=a && d==0){
        if(strcmp(c,nim[b])==0){
            d++;
        }
        b++;
    }
    if(d<1){
        printf("data yang akan anda update mungkin tidak ada");
    }else{
        b--;
        printf("nama     : %s\n",nama[b]);
        printf("nim      : %s\n",nim[b]);
        printf("kelas  : %s\n",kel[b]);
        printf("jurusan  : %s\n",jur[b]);
        printf("fakultas : %s\n",fak[b]);
        printf("----------\n");
        printf("masukkan nama baru     : ");
        scanf(" %[^\n]s",nama[b]);
        printf("masukkan nim baru      : ");
        scanf("%s",nim[b]);
        printf("masukkan kelas baru  : ");
        scanf("%s",kel[b]);
        printf("masukkan jurusan baru  : ");
        scanf(" %[^\n]s",jur[b]);
        printf("masukkan fakultas baru : ");
        scanf(" %[^\n]s",fak[b]);
    }
}
 
void del(){
    printf("masukkan nim yang ingin di delete : ");
    scanf("%s",c);
    b=1;
    d=0;
    while(b<=a && d==0){
        if(strcmp(c,nim[b])==0){
            d++;
        }
        b++;
    }
    if(d<1){
        printf("data yang akan anda delete mungkin tidak ada");
    }else{
        b--;
        printf("data %s berhaasil di delete",nama[b]);
        while(b<=a){
            strcpy(nama[b],nama[b+1]);
            strcpy(nim[b],nim[b+1]);
            strcpy(kel[b],kel[b+1]);
            strcpy(jur[b],jur[b+1]);
            strcpy(fak[b],fak[b+1]);
            b++;
        }
        b--;
        strcpy(nim[b],"");
        a--;
    }
}
 
int main(){
    while(menu!=5){
        printf("1.create\n2.show\n3.update\n4.delete\n5.exit\n: ");
        scanf("%d",&menu);
       
        puts("");
        if(menu==1){
            create();
        }else if(menu==2){
            show();
        }else if(menu==3){
            update();
        }else if(menu==4){
            del();
        }else if(menu==5){
            printf("keluar...");
        }else{
            printf("pilih menu yang tersedia");
        }puts("");
    }
    return 0;
}