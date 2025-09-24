#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dia[4];
    int d_1, h_1, m_1, s_1, d_2, h_2, m_2, s_2, total, total1, total2;
    scanf("%s %d", dia, &d_1);
    scanf("%d : %d : %d", &h_1, &m_1, &s_1);
    scanf("%s %d", dia, &d_2);
    scanf("%d : %d : %d", &h_2, &m_2, &s_2);
    d_1 = d_1*86400;
    h_1 = h_1*3600;
    m_1 = m_1*60;
    d_2 = d_2*86400;
    h_2 = h_2*3600;
    m_2 = m_2*60;
    total1 = d_1+h_1+m_1+s_1;
    total2 = d_2+h_2+m_2+s_2;
    total = abs(total1-total2);
    printf("%d dia(s)\n", total/86400);
    total = total%86400;
    printf("%d hora(s)\n", total/3600);
    total = total%3600;
    printf("%d minuto(s)\n", total/60);
    total = total%60;
    printf("%d segundo(s)\n", total);
    return 0;
}