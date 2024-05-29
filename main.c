#include <stdio.h>
#include <stdlib.h>

void Yemek_ye(int *dereceler) //azaltma kısmı hatalı düzel
{
    char input[20];

    printf("Ne yemek istersin: \n1:doner ye\n2: corba\n3: kuruyemis ye\n");

    printf("\n\ngireceginiz yemegi adet ve yemek bitisik olacak sekilde girin(or: 2doner)");

    printf("\n\nHangisini istiyorsunuz :");

    scanf("%s",input);

    // Sayıyı ayıklama
    int number;
    int result = sscanf(input, "%d", &number);

    if (result != 1)
    {
        printf("Hata: Sayı bulunamadı.\n");
        return 1;
    }

    // Kalan kelimeyi al
    char word[100];
    result = sscanf(input, "%*d %s", word);

    if (result != 1)
    {
        printf("Hata: Kelime bulunamadı.\n");
        return 1;
    }

    if(strcmp(word,"doner")==0)
    {

        for(int j=0; j<10; j++)
            dereceler[j]--;
        dereceler[0]=dereceler[0]+number+3;
    }

    if(strcmp(word,"corba")==0)
    {
        for(int j=0; j<10; j++)
            dereceler[j]--;
        dereceler[0]=dereceler[0]+number+2;
    }
    if(strcmp(word,"kuruyemis")==0)
    {
        for(int j=0; j<10; j++)
            dereceler[j]--;
        dereceler[0]=dereceler[0]+number+1;
    }
}


void Uyku_uyu(int *dereceler,int n)
{
    printf("\n");

    if(dereceler[1]>=8 && n==1)
        printf("uykunuz var");

    if(dereceler[1])

        if(n<3)
        {
            dereceler[1]=dereceler[1]+2;

            for(int i=0; i<10; i++)
                dereceler[i]--;
            return Uyku_uyu(dereceler,n+1);
        }

}


void Sevgi_gor(int *dereceler)
{
    int chose;
    printf("Sevgi gor :\n 1: Ailenin yanina git\n 2: Kiz arkadasinin yanina git\n 3: Evcil hayvanini sev");
    printf("\nHangisini istiyorsunuz :");
    scanf("%d",&chose);

    if(chose==1)
    {
        for( int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[2]+=4;
    }

    if(chose==2)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[2]+=3;
        dereceler[9]--;
    }

    if(chose==3)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[2]+=2;
    }
}

void Sosyal_ol(int *dereceler)
{
    int chose;
    printf("Sosyalles : :\n 1: Arkadaslarinla bulus \n 2: Parka cik \n 3: Cluba cik");
    printf("\nHangisini istiyorsunuz :");

    scanf("%d",&chose);

    if(chose==1)
    {
        for( int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[3]+=4;
        dereceler[9]--;
    }
    if(chose==2)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[3]+=3;
    }
    if(chose==3)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[3]+=2;
        dereceler[9]--;
    }
}

void Saglikli_yasam(int *dereceler)
{
    int chose;
    printf("Saglikli yasa : :\n 1: Spora git \n 2: Saglikli beslen \n 3: Yoga yap");
    printf("\nHangisini istiyorsunuz :");

    scanf("%d",&chose);

    if(chose==1)
    {
        for( int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[4]+=4;
    }

    if(chose==2)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[4]+=4;
    }
    if(chose==3)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[4]+=3;
    }
}

void Al_egitim(int *dereceler)
{
    int chose;
    printf("Egitim al : :\n 1: Okula git\n 2: Dershaneye git\n 3: Ders calis");
    printf("\nHangisini istiyorsunuz :");

    scanf("%d",&chose);

    if(chose==1)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[5]+=4;
    }

    if(chose==2)
    {
        for( int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[5]+=3;
        dereceler[9]--;
    }

    if(chose==3)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[5]+=2;
    }
}

void Hijyen(int *dereceler)
{
    int chose;
    printf("Hijyen : :\n 1: Evi fosur fosur yika\n 2: Dus al\n 3: Dis fırcala");
    printf("\nHangisini istiyorsunuz :");

    scanf("%d",&chose);

    if(chose==1)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[6]+=4;
    }

    if(chose==2)
    {
        for( int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[6]+=2;
    }

    if(chose==3)
    {
        int i=0;
        for(; i<10; i++)
            dereceler[i]--;
        dereceler[6]+=2;
    }
}

void Tuvalet(int *dereceler)
{
    int chose;
    printf("Tuvalet : :\n 1: ,Tuvalet\n 2: Buyuk tuvalet\n 3: Kucuk tuvalet");
    printf("\nHangisini istiyorsunuz :");

    scanf("%d",&chose);

    if(chose==1)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[7]+=4;
    }

    if(chose==2)
    {
        for( int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[7]+=3;
    }

    if(chose==3)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[7]+=2;
    }
}

void Eglence(int *dereceler)
{
    int chose;
    printf("Eglence : :\n 1: Konsere git\n 2: Bilgisayar oyunu oyna\n 3: Arkadalarinla bowling oyna");
    printf("\nHangisini istiyorsunuz :");

    scanf("%d",&chose);

    if(chose==1)
    {
        for( int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[8]+=3;
        dereceler[9]--;
    }

    if(chose==2)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[8]+=2;
    }

    if(chose==3)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[8]+=2;
    }
}

void Para_kazan(int *dereceler)
{
    int chose;
    printf("Para kazan : :\n 1: Full-time ise gir\n 2: Part-time ise gir\n 3: Gunluk iste calis");
    printf("\nHangisini istiyorsunuz :");

    scanf("%d",&chose);

    if(chose==1)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[9]+=4;
        dereceler[3]--;
    }

    if(chose==2)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[9]+=3;
    }

    if(chose==3)
    {
        for(int i=0; i<10; i++)
            dereceler[i]--;
        dereceler[9]+=2;
    }
}

int main()
{
    char ihtiyaclar[11][11]= {"Tokluk","Uyku","Sevgi","Sosyallesme","Saglik","Egitim","Hijyen","Tuvalet","Eglence","Para"};
    int dereceler[11]= {5,5,5,5,5,5,5,5,5,5};

    char karekteradi[20];
    char yasi[5];

    printf("lutfen karaketin adini girinin :");
    scanf("%s",karekteradi);
    printf("\nlutfen karekterin yasini girin :");
    scanf("%d",&yasi);
    while(1)
    {
        if(dereceler[0]==0)
        {
            printf("karakter acliktan oldu");
            break;
        }
        if(dereceler[1]==0)
        {
            printf("karakter uykusuzluktan oldu");
            break;
        }
        if(dereceler[4]==0)
        {
            printf("karakter sagliksizdan oldu");
            break;
        }
        printf("1 : Yemek_ye\n");
        printf("2 : Uyku_uyu\n");
        printf("3 : Sevgi_gor\n");
        printf("4 : Sosyal_ol\n");
        printf("5 : Saglikli_yasam\n");
        printf("6 : Al_egitim\n");
        printf("7 : Hijyen\n");
        printf("8 : Tuvalet\n");
        printf("9 : Eglence\n");
        printf("10 : Para_kazan\n");
        printf("hangi fonsiynu istiyorsunuz :");

        int fonk;
        scanf("%d",&fonk);
        switch(fonk)
        {
        case 1:
            Yemek_ye(dereceler);
            break;
        case 2:
            Uyku_uyu(dereceler,0);
            break;
        case 3 :
            Sevgi_gor(dereceler);
            break;
        case 4:
            Sosyal_ol(dereceler);
            break;
        case 5 :
            Saglikli_yasam(dereceler);
            break;
        case 6 :
            Al_egitim(dereceler);
            break;
        case 7 :
            Hijyen(dereceler);
            break;
        case 8 :
            Tuvalet(dereceler);
            break;
        case 9 :
            Eglence(dereceler);
            break;
        case 10 :
            Para_kazan(dereceler);
            break;
        default :
            printf("uygun fonksiyon seciniz");
        }
        printf("\n\n\n");

        if(dereceler[2]==0)
            dereceler[4]--;
        if(dereceler[6]==0)
            dereceler[4]--;
        if(dereceler[7]==0)
            dereceler[6]--;
        if(dereceler[9]==0)
            dereceler[4]--;



        for(int i=0; i<10; i++)
        {
            if(dereceler[i]<0)
                dereceler[i]=0;
            if(dereceler[i]>10)
                dereceler[i]=10;

            printf("%s :%d\n",ihtiyaclar[i],dereceler[i]);
        }


        printf("\n\n\n");

    }
    return 0;
}
