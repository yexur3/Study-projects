#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[15];
    int max;

    // ������������� ���������� ��������� �����
    srand(time(0));

    // ��������� ������ ���������� ������� � ������� ���
    for(int i = 0; i < 15; i++){
        m[i] = rand() % 100 + 1;
        printf("%d ", m[i]);  // ��� ����������� ������� ������
    }
    printf("\n");

    // ���� ������������ �������
    max = m[0];  // ������������, ��� ������ ������� � ������������
    for(int i = 1; i < 15; i++){
        if(m[i] > max){
            max = m[i];
        }
    }
    printf("������������ ��������: %d\n", max);
    return 0;
}
