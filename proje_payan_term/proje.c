//daar in barname az linked list estefade nemishavad
//namad vojood keshti dar yek khane 1 va namde adame vojood 0 ast
// dar bazi ba bot chinesh keshti ha be soorate pish farz ast
// baraye taeene shoroo konnande bazi az baghimande be 2 estefade shode
// o be manie ofoghi va a amoodi ast
// dar tak keshti hame o dar nazar gerefte shode
// az ghesmate file motmaen nistam
// tamami code haye marboot be file ra comment karadam choonke runtime error midad
// library haye asli
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
//*************
// library haye motefareghe (baraye geraphic va ahang)
#include <conio.h>
#include <windows.h>
#include <MMsystem.h>
#include <unistd.h>
#pragma comment(lib,"Winmm.lib")
//***************
//tabe haye file
//tabe save etelaat arraye haye charachteri
/*void savefile(char a[10][10])
{
    FILE * fp;
    fp = fopen("C:\\Users\\MMNazari1380\\CLionProjects\\proje_payan_term\\file.bin", "wb+");
    if(fp == NULL)
    {
        printf("Cannot create file\n");
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            fwrite(&a[i][j], sizeof(char), 1, fp);
        }
    }
    fclose(fp);
}
 //******************
 //tabe load file
void loadfile(FILE *fp)
{
    char c[10][10], d[10][10];
    fp = fopen("C:\\Users\\MMNazari1380\\CLionProjects\\proje_payan_term\\file.bin", "rb+");
    if(fp == NULL){
        printf("Cannot read from file\n");
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            fread(&c[i][j],sizeof(char),1,fp);
            fread(&d[i][j],sizeof(char),1,fp);
        }
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            printf("%c",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            printf("%c",d[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    fclose(fp);

}*/
//************
// tabe check karadane inke keshti ha dorost gharar gerefte and
int check(int a[10][10],int i,int j,int tool,char ch)
{
    int v=0;
    if(ch=='o')
    {
        while((j-tool<=9 && j-tool>=0) && (j+1<=9 && j+1>=0) && (i-1<=9 && i-1>=0) && (i+1<=9 && i+1>=0))
        {
            if(a[i][j-tool]==1)
                v=1;
            if(a[i][j+1]==1)
                v=1;
            for(int y=j-tool;y<=j+1;y++)
            {
                if(a[i-1][y]==1 || a[i+1][y]==1)
                    v=1;
            }
        }
        if(v==1)
            printf("moshakhasate vared shode sahih nist dobare mokhtasat vared konid\n");

    }
    if(ch=='a')
    {
        while((i-tool<=9 && i-tool>=0) && (i+1<=9 && i+1>=0) && (j-1<=9 && j-1>=0) && (j+1<=9 && j+1>=0))
        {
            if(a[i-tool][j]==1)
                v=1;
            if(a[i+1][j]==1)
                v=1;
            for(int y=i-tool;y<=i+1;y++)
            {
                if(a[y][j-1]==1 || a[y][j+1]==1)
                    v=1;
            }
        }
        if(v==1)
            printf("moshakhasate vared shode sahih nist dobare mokhtasat vared konid\n");

    }
   return v;
}
//*********
// tabe check karadan arraye haye characteri va gharar dadanne 'e' va 'w' va 'c' va emtiaz dadan be enfejare kole keshti
void check2(char c[10][10],int l,int w,int tool,char p,int emtiaz)
{
    int e=0;
   if(p=='o')
   {

       for(int t=w;t<=w+tool;t++)
       {
           if(c[l][t]=='e')
               e++;
       }
   }
   if(e==tool)
   {
       if(e==2)
           emtiaz+=12;
       if(e==3)
           emtiaz+=8;
       if(e==1)
           emtiaz+=25;
       if(e==5)
           emtiaz+=5;
       for(int t=w;t<=w+tool;t++)
       {
           c[l][t]='c';
       }
       while((w-tool<=9 && w-tool>=0) && (w+1<=9 && w+1>=0) && (l-1<=9 && l-1>=0) && (l+1<=9 && l+1>=0))
       {
           c[l][w-tool]='w';
           c[l][w+1]='w';
           for(int y=w-tool;y<=w+1;y++)
           {
               c[l-1][y]='w';
               c[l+1][y]='w';

           }
       }
   }
    if(p=='a')
    {

        for(int t=l;t<=l+tool;t++)
        {
            if(c[t][w]=='e')
                e++;
        }
    }
    if(e==tool)
    {
        if(e==2)
            emtiaz+=12;
        if(e==3)
            emtiaz+=8;
        if(e==1)
            emtiaz+=25;
        if(e==5)
            emtiaz+=5;
        for(int t=l;t<=l+tool;t++)
        {
            c[t][w]='c';
        }
        while((l-tool<=9 && l-tool>=0) && (l+1<=9 && l+1>=0) && (w-1<=9 && w-1>=0) && (w+1<=9 && w+1>=0))
        {
            c[l-tool][w]='w';
            c[l+1][w]='w';
            for(int y=l-tool;y<=l+1;y++)
            {
                c[y][w-1]='w';
                c[y][w+1]='w';

            }
        }
    }
}
//**************
// tabe avaz kardan safhe(system("cls") javab nemidad)
void cls()
{
    int x;
    for ( x = 0; x < 10; x++ )
    {
        printf("\n\n\n\n\n\n\n\n\n");
    }
}
//************
// tabe menu askie bazi
void menu()
{
    printf("1:paly with a friend\n");
    printf("2:play with bot\n");
    printf("3:load game\n");
    printf("4:load last game\n");
    printf("5:settings\n");
    printf("6:score board\n");
    printf("7:exit\n");
}
//************
// tabe namaieshe arraye haye charachteri
void show(char x[10][10])
{
    for(int p=0;p<=9;p++)
    {

        for(int o=0;o<=9;o++)
        {
            printf("%c",x[p][o]);
            printf("\t");
        }
        printf("\n");
    }
}
//***************
// tabe namaieshe arraye haye adadi
void show2(int x[10][10])
{
    for(int p=0;p<=9;p++)
    {
        for (int o = 0; o <= 9; o++)
        {
            printf("%d", x[p][o]);
            printf("\t");
        }
        printf("\n");
    }
}
//****************
int main ()
{
    // rang amizi va graphic
    system("COLOR B5");
    // ahang haye na moafagh :(
   // system("start Z:\\MMNazari\\Music\\alan walker\\Alan.mp3");
   // PlaySound(TEXT("C:\\Users\\MMNazari1380\\Desktop\\game\\Documents\\Any Audio Converter\\WAVE\\Alan Walker - Faded.wav"),NULL,SND_SYNC);
    //PlaySound(TEXT ( "C:\\Users\\MMNazari1380\\Desktop\\game\\Documents\\Any Audio Converter\\WAVE\\Alan Walker - Faded.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
  //FILE * fp;
  char ch;
  char p[2][6];
  int x,emtiaze1=0,emtiaze2=0,shomaresh1=0,shomaresh2=0;
  //int s1,s2,s3,s4,s5,s6,s7,s8;
  // araye adadye avval
  int i,j;
  // araye adadye dovvom
  int l,m;
  // araye charachterye dovvom
  int r,t;
  // araye charachterye avval
  int q,w;
  int a[10][10]={0},b[10][10]={0};
  char c[10][10]={' '},d[10][10]={' '};
  menu();
  scanf("%d",&x);
      if (x == 1)
      {
          // hameye keshti haye ba toole yek 'o' farz shode ast
          // dar check karadanha har bazikon faghat forsate yekbar eshtebah darad bar dovvom bayad dorost vared konad
          //  jaigozarie keshti ha
          //  bazikone avval
          printf("bazikone avval\n");
         printf("mokhtasate keshti hara vared konid\n");
         printf("1 keshti ba toole 5\n");
         printf("ofoghi ya amoodi ?\n");
         printf("o = ofoghi va a = amoodi\n");
         scanf("%c",&p[0][0]);
         _sleep(2000);
         for(int k=0;k<=4;k++)
         {
             printf("mokhtasate tool va sepas arz ra vared konid\n");
             scanf("%d%d",&i,&j);
             a[i][j]=1;
         }
         check(a,i,j,5,p[0][0]);
         if(check(a,i,j,5,p[0][0])==1)
         {
             printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
             for(int k=0;k<=4;k++)
             {
                 printf("mokhtasate tool va sepas arz ra vared konid\n");
                 scanf("%d%d",&i,&j);
                 a[i][j]=1;
             }
         }
          printf("2 keshti ba toole 3\n");
          printf("keshti avval\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[0][1]);
          _sleep(2000);
          for(int k=0;k<=2;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,3,p[0][1]);
          if(check(a,i,j,3,p[0][1])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=2;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("keshti dovvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[0][2]);
          _sleep(2000);
          for(int k=0;k<=2;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,3,p[0][2]);
          if(check(a,i,j,3,p[0][2])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=2;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("3 keshti ba toole 2\n");
          printf("keshti avval\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[0][3]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,2,p[0][3]);
          if(check(a,i,j,2,p[0][3])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("keshti dovvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[0][4]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,2,p[0][4]);
          if(check(a,i,j,2,p[0][4])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("keshti sevvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[0][5]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,2,p[0][5]);
          if(check(a,i,j,2,p[0][5])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("4 keshti ba toole 1\n");
          for(int k=0;k<=3;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
              check(a,i,j,1,'o');
              if(check(a,i,j,1,'o')==1)
              {
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          show2(a);
          _sleep(2000);
          cls();
          // bazikone dovvom
          printf("bazikone dovvom\n");
          printf("mokhtasate keshti hara vared konid\n");
          printf("1 keshti ba toole 5\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[1][0]);
          _sleep(2000);
          for(int k=0;k<=4;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&l,&m);
              b[l][m]=1;
          }
          check(b,l,m,5,p[1][0]);
          if(check(b,l,m,5,p[1][0])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=4;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&l,&m);
                  b[l][m]=1;
              }
          }
          printf("2 keshti ba toole 3\n");
          printf("keshti avval\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[1][1]);
          _sleep(2000);
          for(int k=0;k<=2;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&l,&m);
              b[l][m]=1;
          }
          check(b,l,m,3,p[1][1]);
          if(check(b,l,m,3,p[1][1])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=2;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&l,&m);
                  b[l][m]=1;
              }
          }
          printf("keshti dovvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[1][2]);
          _sleep(2000);
          for(int k=0;k<=2;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&l,&m);
              b[l][m]=1;
          }
          check(b,l,m,3,p[1][2]);
          if(check(b,l,m,3,p[1][2])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=2;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&l,&m);
                  b[l][m]=1;
              }
          }
          printf("3 keshti ba toole 2\n");
          printf("keshti avval\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[1][3]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&l,&m);
              b[l][m]=1;
          }
          check(b,l,m,2,p[1][3]);
          if(check(b,l,m,2,p[1][3])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&l,&m);
                  b[l][m]=1;
              }
          }
          printf("keshti dovvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[1][4]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&l,&m);
              b[l][m]=1;
          }
          check(b,l,m,2,p[1][4]);
          if(check(b,l,m,2,p[1][4])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&l,&m);
                  b[l][m]=1;
              }
          }
          printf("keshti sevvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%c",&p[1][5]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&l,&m);
              b[l][m]=1;
          }
          check(b,l,m,2,p[1][5]);
          if(check(b,l,m,2,p[1][5])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&l,&m);
                  b[l][m]=1;
              }
          }
          printf("4 keshti ba toole 1\n");
          for(int k=0;k<=3;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&l,&m);
              b[l][m]=1;
              check(b,l,m,1,'o');
              if(check(b,l,m,1,'o')==1)
              {
                  printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
                  scanf("%d%d",&l,&m);
                  b[l][m]=1;
              }
          }
          show2(b);
          _sleep(2000);
          cls();
          //  tashkhis shoroo konande bazi
          srand(time(NULL));
          int z= rand()%2;
          //  shoroo bazi
          // shomaresh ha baraye taeen payane bazi hastand
          // 4*1 + 2*3 + 3*2 + 1*5 = 21
          if(z%2==0)
          {
              printf("bazikon avval shoroo konande bazi ast\n");
              //   hadaf giri
              while((shomaresh1!=21) && (shomaresh2!=21))
              {
                  // hadaf giri bazikone avval
                  printf("nobat bazikone avval ast\n");
                  show(d);
                  //savefile(d);
                  _sleep(2000);
                  cls();
                  printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                  scanf("%d%d",&r,&t);
                  if(b[r][t]==0)
                      d[r][t]='w';
                  // algorithm jaize dehi baraye esabat be keshti
                  while(b[r][t]==1)
                  {
                      emtiaze1++;
                      shomaresh1++;
                      d[r][t]='e';
                      printf("entekhabe digary konid\n");
                      scanf("%d%d",&r,&t);
                  }
                  show(d);
                  //savefile(d);
                  check2(d,r,t,5,p[1][0],emtiaze1);
                  check2(d,r,t,3,p[1][1],emtiaze1);
                  check2(d,r,t,3,p[1][2],emtiaze1);
                  check2(d,r,t,2,p[1][3],emtiaze1);
                  check2(d,r,t,2,p[1][4],emtiaze1);
                  check2(d,r,t,2,p[1][5],emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  //algorithm avvalie eshtebah dar shomareshe emtiaz
                 /* printf("aya keshti ba size 5 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s1);
                  if(s1==1)
                  emtiaze1+=5;
                  printf("aya keshti ba size 3 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s2);
                  if(s2==1)
                  emtiaze1+=8;
                  printf("aya keshti ba size 2 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s3);
                  if(s3==1)
                  emtiaze1+=12;
                  printf("aya keshti ba size 1 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s4);
                  if(s4==1)
                  emtiaze1+=25; */
                 cls();
                 show(d);
                  //savefile(d);
                  _sleep(2000);
                  cls();
                  //  hadaf girie bazikone dovvom
                  printf("nobat bazikone dovvom ast\n");
                  show(c);
                 // savefile(c);
                  _sleep(2000);
                  cls();
                  printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                  scanf("%d%d",&w,&q);
                  if(a[w][q]==0)
                      c[w][q]='w';
                  while(a[w][q]==1)
                  {
                      emtiaze2++;
                      shomaresh2++;
                      c[w][q]='e';
                      printf("entekhabe digary konid\n");
                      scanf("%d%d",&w,&q);
                  }
                  show(c);
                  //savefile(c);
                  check2(c,q,w,5,p[0][0],emtiaze2);
                  check2(c,q,w,3,p[0][1],emtiaze2);
                  check2(c,q,w,3,p[0][2],emtiaze2);
                  check2(c,q,w,2,p[0][3],emtiaze2);
                  check2(c,q,w,2,p[0][4],emtiaze2);
                  check2(c,q,w,2,p[0][5],emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);

                 /* printf("aya keshti ba size 5 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s5);
                  if(s5==1)
                  emtiaze2+=5;
                  printf("aya keshti ba size 3 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s6);
                  if(s6==1)
                  emtiaze2+=8;
                  printf("aya keshti ba size 2 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s7);
                  if(s7==1)
                  emtiaze2+=12;
                  printf("aya keshti ba size 1 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s8);
                  if(s8==1)
                  emtiaze2+=25;*/
                 cls();
                 show(c);
                  //savefile(c);
                  _sleep(2000);
                  cls();
              }
              if(shomaresh2==21)
              {
                  printf("bazikone dovvom barande ast ba emtiaze = %d\n",emtiaze2);
                  printf("bazikone avval bazande ast ba emtiaze  = %d",emtiaze1/2);
                  return 0;
              }
              if(shomaresh1==21)
              {
                  printf("bazikone avval barande ast ba emtiaze = %d\n",emtiaze1);
                  printf("bazikone dovvom bazande ast ba emtiaze  = %d",emtiaze2/2);
                  return 0;
              }





          }
          if(z%2==1)
          {
              printf("bazikon dovvom shoroo konande bazi ast\n");
              //   hadaf giri
              while(shomaresh1!=21&&shomaresh2!=21)
              {
                  //  hadaf girie bazikone dovvom
                  printf("nobat bazikone dovvom ast\n");
                  show(c);
                  //savefile(c);
                  _sleep(2000);
                  cls();
                  printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                  scanf("%d%d",&w,&q);
                  if(a[w][q]==0)
                      c[w][q]='w';
                  while(a[w][q]==1)
                  {
                      emtiaze2++;
                      shomaresh2++;
                      c[w][q]='e';
                      printf("entekhabe digary konid\n");
                      scanf("%d%d",&w,&q);
                  }
                  show(c);
                  //savefile(c);
                  check2(c,q,w,5,p[0][0],emtiaze2);
                  check2(c,q,w,3,p[0][1],emtiaze2);
                  check2(c,q,w,3,p[0][2],emtiaze2);
                  check2(c,q,w,2,p[0][3],emtiaze2);
                  check2(c,q,w,2,p[0][4],emtiaze2);
                  check2(c,q,w,2,p[0][5],emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                 /* printf("aya keshti ba size 5 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s1);
                  if(s1==1)
                  emtiaze2+=5;
                  printf("aya keshti ba size 3 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s2);
                  if(s2==1)
                  emtiaze2+=8;
                  printf("aya keshti ba size 2 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s3);
                  if(s3==1)
                  emtiaze2+=12;
                  printf("aya keshti ba size 1 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s4);
                  if(s4==1)
                  emtiaze2+=25;*/
                 cls();
                 show(c);
                  //savefile(c);
                  _sleep(2000);
                  cls();
                  // hadaf giri bazikone avval
                  printf("nobat bazikone avval ast\n");
                  show(d);
                  //savefile(d);
                  _sleep(2000);
                  cls();
                  printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                  scanf("%d%d",&r,&t);
                  if(b[r][t]==0)
                      d[r][t]='w';
                  while(b[r][t]==1)
                  {
                      emtiaze1++;
                      shomaresh1++;
                      d[r][t]='e';
                      printf("entekhabe digary konid\n");
                      scanf("%d%d",&r,&t);
                  }
                  show(d);
                  //savefile(d);
                  check2(d,r,t,5,p[1][0],emtiaze1);
                  check2(d,r,t,3,p[1][1],emtiaze1);
                  check2(d,r,t,3,p[1][2],emtiaze1);
                  check2(d,r,t,2,p[1][3],emtiaze1);
                  check2(d,r,t,2,p[1][4],emtiaze1);
                  check2(d,r,t,2,p[1][5],emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                /*  printf("aya keshti ba size 5 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s5);
                  if(s5==1)
                  emtiaze1+=5;
                  printf("aya keshti ba size 3 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s6);
                  if(s6==1)
                  emtiaze1+=8;
                  printf("aya keshti ba size 2 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s7);
                  if(s7==1)
                  emtiaze1+=12;
                  printf("aya keshti ba size 1 ra monfajer kardid?\n");
                  printf("1 : bale     2:kheir\n");
                  scanf("%d",&s8);
                  if(s8==1)
                  emtiaze1+=25;*/
                cls();
                show(d);
                  //savefile(d);
                  _sleep(2000);
                  cls();

              }
              if(shomaresh2==21)
              {
                  printf("bazikone dovvom barande ast ba emtiaze = %d\n",emtiaze2);
                  printf("bazikone avval bazande ast ba emtiaze  = %d",emtiaze1/2);
                  return 0;
              }
              if(shomaresh1==21)
              {
                  printf("bazikone avval barande ast ba emtiaze = %d\n",emtiaze1);
                  printf("bazikone dovvom bazande ast ba emtiaze  = %d",emtiaze2/2);
                  return 0;
              }
          }

      }
      if (x == 2)
      {
          //jaigozari keshti ha
          //  bazikon avval
          printf("bazikone avval\n");
          printf("mokhtasate keshti hara vared konid\n");
          printf("1 keshti ba toole 5\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%s",&p[0][0]);
          _sleep(2000);
          for(int k=0;k<=4;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,5,p[0][0]);
          if(check(a,i,j,5,p[0][0])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=4;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("2 keshti ba toole 3\n");
          printf("keshti avval\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%s",&p[0][1]);
          _sleep(2000);
          for(int k=0;k<=2;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
              check(a,i,j,3,p[0][1]);
              if(check(a,i,j,3,p[0][1])==1)
              {
                  printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
                  for(int k=0;k<=2;k++)
                  {
                      printf("mokhtasate tool va sepas arz ra vared konid\n");
                      scanf("%d%d",&i,&j);
                      a[i][j]=1;
                  }
              }


          printf("keshti dovvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%s",&p[0][2]);
          _sleep(2000);
          for(int k=0;k<=2;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,3,p[0][2]);
          if(check(a,i,j,3,p[0][2])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=2;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("3 keshti ba toole 2\n");
          printf("keshti avval\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%s",&p[0][3]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,2,p[0][3]);
          if(check(a,i,j,2,p[0][3])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("keshti dovvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%s",&p[0][4]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,2,p[0][4]);
          if(check(a,i,j,2,p[0][4])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("keshti sevvom\n");
          printf("ofoghi ya amoodi ?\n");
          printf("o = ofoghi va a = amoodi\n");
          scanf("%s",&p[0][5]);
          _sleep(2000);
          for(int k=0;k<=1;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
          }
          check(a,i,j,2,p[0][5]);
          if(check(a,i,j,2,p[0][5])==1)
          {
              printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
              for(int k=0;k<=1;k++)
              {
                  printf("mokhtasate tool va sepas arz ra vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          printf("4 keshti ba toole 1\n");
          for(int k=0;k<=3;k++)
          {
              printf("mokhtasate tool va sepas arz ra vared konid\n");
              scanf("%d%d",&i,&j);
              a[i][j]=1;
              check(a,i,j,1,'o');
              if(check(a,i,j,1,'o')==1)
              {
                  printf("mokhtasate vared shode moshkel darad mokhtasate jadid vared konid\n");
                  scanf("%d%d",&i,&j);
                  a[i][j]=1;
              }
          }
          show2(a);
          _sleep(2000);
          cls();
          // jaigozarie keshtihaye bot
          b[9][4]=1;
          b[9][5]=1;
          b[9][6]=1;
          b[9][7]=1;
          b[9][8]=1;
          p[1][0]='o';
          b[1][9]=1;
          b[2][9]=1;
          b[3][9]=1;
          p[1][1]='a';
          b[3][1]=1;
          b[4][1]=1;
          b[5][1]=1;
          p[1][2]='a';
          b[7][4]=1;
          b[7][5]=1;
          p[1][3]='o';
          b[4][3]=1;
          b[4][4]=1;
          p[1][4]='o';
          b[0][3]=1;
          b[0][4]=1;
          p[1][5]='o';
          b[1][1]=1;
          b[2][5]=1;
          b[9][0]=1;
          b[8][2]=1;
          show2(b);
          _sleep(2000);
          cls();
          //  tashkhis shoroo konande bazi
          srand(time(NULL));
          int z= rand()%2;
          //  shoroo bazi
          if(z%2==0)
          {
              printf("bazikon avval shoroo konande bazi ast\n");
              //   hadaf giri
              while((shomaresh1!=21) && (shomaresh2!=21))
              {
                  // hadaf giri bazikone avval
                  printf("nobat bazikone avval ast\n");
                  show(d);
                  //savefile(d);
                  _sleep(2000);
                  cls();
                  printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                  scanf("%d%d",&r,&t);
                  if(b[r][t]==0)
                      d[r][t]='w';
                  while(b[r][t]==1)
                  {
                      emtiaze1++;
                      shomaresh1++;
                      d[r][t]='e';
                      printf("entekhabe digary konid\n");
                      scanf("%d%d",&r,&t);
                  }
                  show(d);
                 // savefile(d);
                  check2(d,r,t,5,p[1][0],emtiaze1);
                  check2(d,r,t,3,p[1][1],emtiaze1);
                  check2(d,r,t,3,p[1][2],emtiaze1);
                  check2(d,r,t,2,p[1][3],emtiaze1);
                  check2(d,r,t,2,p[1][4],emtiaze1);
                  check2(d,r,t,2,p[1][5],emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  /* printf("aya keshti ba size 5 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s1);
                   if(s1==1)
                   emtiaze1+=5;
                   printf("aya keshti ba size 3 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s2);
                   if(s2==1)
                   emtiaze1+=8;
                   printf("aya keshti ba size 2 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s3);
                   if(s3==1)
                   emtiaze1+=12;
                   printf("aya keshti ba size 1 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s4);
                   if(s4==1)
                   emtiaze1+=25; */
                  cls();
                  show(d);
                  //savefile(d);
                  _sleep(2000);
                  cls();
                  //  hadaf girie bot
                //  printf("nobat bazikone dovvom ast\n");
                  show(c);
                  //savefile(c);
                  _sleep(2000);
                  cls();
                 // printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                 // scanf("%d%d",&w,&q);
                //  momken ast tekrari dar biad
                srand(time(NULL));
                w=rand()%10;
                q=rand()%10;
                  if(a[w][q]==0)
                      c[w][q]='w';
                  while(a[w][q]==1)
                  {
                      emtiaze2++;
                      shomaresh2++;
                      c[w][q]='e';
                     // printf("entekhabe digary konid\n");
                     // scanf("%d%d",&w,&q);
                     srand(time(NULL));
                      w=rand()%10;
                      q=rand()%10;
                  }
                  show(c);
                  //savefile(c);
                  check2(c,q,w,5,p[0][0],emtiaze2);
                  check2(c,q,w,3,p[0][1],emtiaze2);
                  check2(c,q,w,3,p[0][2],emtiaze2);
                  check2(c,q,w,2,p[0][3],emtiaze2);
                  check2(c,q,w,2,p[0][4],emtiaze2);
                  check2(c,q,w,2,p[0][5],emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);

                  /* printf("aya keshti ba size 5 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s5);
                   if(s5==1)
                   emtiaze2+=5;
                   printf("aya keshti ba size 3 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s6);
                   if(s6==1)
                   emtiaze2+=8;
                   printf("aya keshti ba size 2 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s7);
                   if(s7==1)
                   emtiaze2+=12;
                   printf("aya keshti ba size 1 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s8);
                   if(s8==1)
                   emtiaze2+=25;*/
                  cls();
                  show(c);
                  //savefile(c);
                  _sleep(2000);
                  cls();
              }
              if(shomaresh2==21)
              {
                  printf("bot barande ast ba emtiaze = %d\n",emtiaze2);
                  printf("bazikone avval bazande ast ba emtiaze  = %d",emtiaze1/2);
                  return 0;
              }
              if(shomaresh1==21)
              {
                  printf("bazikone avval barande ast ba emtiaze = %d\n",emtiaze1);
                  printf("bot bazande ast ba emtiaze  = %d",emtiaze2/2);
                  return 0;
              }





          }
          if(z%2==1)
          {
              printf("bot shoroo konande bazi ast\n");
              //  hadaf giri
              while(shomaresh1!=21 && shomaresh2!=21)
              {
                  // hadaf girie bot
                 // printf("nobat bazikone dovvom ast\n");
                  show(c);
                  //savefile(c);
                  _sleep(2000);
                  cls();
                 // printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                 // scanf("%d%d",&w,&q);
                  srand(time(NULL));
                  w=rand()%10;
                  q=rand()%10;
                  if(a[w][q]==0)
                      c[w][q]='w';
                  while(a[w][q]==1)
                  {
                      emtiaze2++;
                      shomaresh2++;
                      c[w][q]='e';
                      //printf("entekhabe digary konid\n");
                     // scanf("%d%d",&w,&q);
                      srand(time(NULL));
                      w=rand()%10;
                      q=rand()%10;
                  }
                  show(c);
                  //savefile(c);
                  check2(c,q,w,5,p[0][0],emtiaze2);
                  check2(c,q,w,3,p[0][1],emtiaze2);
                  check2(c,q,w,3,p[0][2],emtiaze2);
                  check2(c,q,w,2,p[0][3],emtiaze2);
                  check2(c,q,w,2,p[0][4],emtiaze2);
                  check2(c,q,w,2,p[0][5],emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  check2(c,q,w,1,'o',emtiaze2);
                  /* printf("aya keshti ba size 5 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s1);
                   if(s1==1)
                   emtiaze2+=5;
                   printf("aya keshti ba size 3 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s2);
                   if(s2==1)
                   emtiaze2+=8;
                   printf("aya keshti ba size 2 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s3);
                   if(s3==1)
                   emtiaze2+=12;
                   printf("aya keshti ba size 1 ra monfajer kardid?\n");
                   printf("1 : bale     2:kheir\n");
                   scanf("%d",&s4);
                   if(s4==1)
                   emtiaze2+=25;*/
                  cls();
                  show(c);
                  //savefile(c);
                  _sleep(2000);
                  cls();
                  // hadaf giri bazikone avval
                  printf("nobat bazikone avval ast\n");
                  show(d);
                 // savefile(d);
                  _sleep(2000);
                  cls();
                  printf("khane ey ra entekhab konid ba mokhtasate x va y\n");
                  scanf("%d%d",&r,&t);
                  if(b[r][t]==0)
                      d[r][t]='w';
                  while(b[r][t]==1)
                  {
                      emtiaze1++;
                      shomaresh1++;
                      d[r][t]='e';
                      printf("entekhabe digary konid\n");
                      scanf("%d%d",&r,&t);
                  }
                  show(d);
                  //savefile(d);
                  check2(d,r,t,5,p[1][0],emtiaze1);
                  check2(d,r,t,3,p[1][1],emtiaze1);
                  check2(d,r,t,3,p[1][2],emtiaze1);
                  check2(d,r,t,2,p[1][3],emtiaze1);
                  check2(d,r,t,2,p[1][4],emtiaze1);
                  check2(d,r,t,2,p[1][5],emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  check2(d,r,t,1,'o',emtiaze1);
                  /*  printf("aya keshti ba size 5 ra monfajer kardid?\n");
                    printf("1 : bale     2:kheir\n");
                    scanf("%d",&s5);
                    if(s5==1)
                    emtiaze1+=5;
                    printf("aya keshti ba size 3 ra monfajer kardid?\n");
                    printf("1 : bale     2:kheir\n");
                    scanf("%d",&s6);
                    if(s6==1)
                    emtiaze1+=8;
                    printf("aya keshti ba size 2 ra monfajer kardid?\n");
                    printf("1 : bale     2:kheir\n");
                    scanf("%d",&s7);
                    if(s7==1)
                    emtiaze1+=12;
                    printf("aya keshti ba size 1 ra monfajer kardid?\n");
                    printf("1 : bale     2:kheir\n");
                    scanf("%d",&s8);
                    if(s8==1)
                    emtiaze1+=25;*/
                  cls();
                  show(d);
                  //savefile(d);
                  _sleep(2000);
                  cls();

              }
              if(shomaresh2==21)
              {
                  printf("bazikone dovvom barande ast ba emtiaze = %d\n",emtiaze2);
                  printf("bazikone avval bazande ast ba emtiaze  = %d",emtiaze1/2);
                  return 0;
              }
              if(shomaresh1==21)
              {
                  printf("bazikone avval barande ast ba emtiaze = %d\n",emtiaze1);
                  printf("bazikone dovvom bazande ast ba emtiaze  = %d",emtiaze2/2);
                  return 0;
              }
          }

      }
      if (x == 3)
      {
        //  loadfile(fp);
      }
      if (x == 4)
      {
        // loadfile(fp);

      }
      if (x == 5)
      {
          int a10,a9;
          char b10;
          printf("1:ships --> gheire faal :( \n");
          printf("2:map size --> gheire faal :( \n");
          printf("3:theme --> faal :) \n");
          scanf("%d",&a9);
          if(a9==3)
          {
              printf("adadi ra ba tavajoh be list baraye range neveshte entekhab konid]n");
              printf("0 = Black , 1 = Blue , 2 = Green\n");
              printf("3 = Aqua , 4 = Red , 5 = Purple\n");
              printf("6 = Yellow ,  7 = White ,  8 = Gray\n");
              scanf("%d",&a10);
              printf("harfi ra motabeghe jadval baraye theme entekhab konid\n");
              printf(" A = Light Green , B = Light Aqua  , C = Light Red\n");
              printf("  D = Light Purple , E = Light Yellow , F = Bright White\n");
              scanf("%c",&b10);
              char A=b10;
              int B=a10;
              system(" COLOR AB");
          }
      }
      if (x == 6)
      {
          printf("emtiaze nafare avval =\n", emtiaze1);
          printf("emtiaze nafare dovvom / bot\n =", emtiaze2);
      }
    if(x==7)
    {
      return 0;
    }
    return 0;
}

