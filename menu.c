#include <stdio.h>

void writeMenu(){
    const char menuHeader[]="=========";
    const char menuTitle[]="Aplikacja Mini-Bank";
    const char Menu1option[]= "1.Sprawdz saldo";
     const char Menu2option[]= "2.Wplac Pieniadze";
     const char Menu3option[]= "3.Wyplac Pieniadze";
     const char Menu4option[]= "4.Historia operacji";
     const char Menu5option[]= "5.Wyjdz";
     const char prompt[] = "wybierz opcje:";

     const char * menuList[] = {
        menuHeader, menuTitle,
        menuHeader, Menu1option,
        Menu2option, Menu3option,
        Menu4option, Menu5option,
        menuHeader, prompt 
     };
     for (int i=0; i<10;i++){
        printf("%s\n",menuList[i]);
     }
}
int menu(){
        int response = 0;
        while(1==1){
            writeMenu();
            scanf("%d",&response);
            if(response==1)
            printf("Wybrales sprawdz saldo\n");
            if(response==2)
            printf("Wybrales wplac pieniadze\n");
            if(response==3)
            printf("Wybrales wyplac pieniadze\n");
            if(response==4)
            printf("Wybrales historia operacjo\n");
            if(response==5)
            break;
        }
     }
