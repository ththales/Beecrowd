#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, dia, calc;
    while(scanf("%d%d", &mes, &dia)!=EOF)
    {
        if(mes==12 && dia==25)
        {
            printf("E natal!\n");
        }
        else
        {
            if(mes==12 && dia==24)
            {
                printf("E vespera de natal!\n");
            }
            else
            {
                if(mes==12 && dia>25)
                {
                    printf("Ja passou!\n");
                }
                else
                {
                    if(mes==1)
                    {
                        dia = 31-dia;
                        calc = dia+29+31+30+31+30+31+31+30+31+30+25;
                    }
                    else
                    {
                        if(mes==2)
                        {
                            dia = 29-dia;
                            calc = dia+31+30+31+30+31+31+30+31+30+25;
                        }
                        else
                        {
                            if(mes==3)
                            {
                                dia = 31-dia;
                                calc = dia+30+31+30+31+31+30+31+30+25;
                            }
                            else
                            {
                                if(mes==4)
                                {
                                    dia = 30-dia;
                                    calc = dia+31+30+31+31+30+31+30+25;
                                }
                                else
                                {
                                    if(mes==5)
                                    {
                                        dia = 31-dia;
                                        calc = dia+30+31+31+30+31+30+25;
                                    }
                                    else
                                    {
                                        if(mes==6)
                                        {
                                            dia = 30-dia;
                                            calc = dia+31+31+30+31+30+25;
                                        }
                                        else
                                        {
                                            if(mes==7)
                                            {
                                                dia = 31-dia;
                                                calc = dia+31+30+31+30+25;
                                            }
                                            else
                                            {
                                                if(mes==8)
                                                {
                                                    dia = 31-dia;
                                                    calc = dia+30+31+30+25;
                                                }
                                                else
                                                {
                                                    if(mes==9)
                                                    {
                                                        dia = 30-dia;
                                                        calc = dia+31+30+25;
                                                    }
                                                    else
                                                    {
                                                        if(mes==10)
                                                        {
                                                            dia = 31-dia;
                                                            calc = dia+30+25;
                                                        }
                                                        else
                                                        {
                                                            if(mes==11)
                                                            {
                                                                dia = 30-dia;
                                                                calc = dia+25;
                                                            }
                                                            else
                                                            {
                                                                dia = 25-dia;
                                                                calc = dia;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    printf("Faltam %d dias para o natal!\n", calc);
                }
            }
        }
    }

    return 0;
}
