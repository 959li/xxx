#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void GetMemory(char* p) {
//
//	p = (char*)malloc(100);
//}
//
//void test(void) {
//
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main() {
//
//	test();
//	return 0;
//}
//��ΪGetMemory������ֵ���� ��p��str��һ����ʱ���� �򿪱ٵĿռ��ڶ�����str���޹�ϵ �����޷����� ����GetMemory����������p��
//���� �򿪱ٵĿռ��޷��ͷ� ����ڴ�й©

//�Ĵ� 1
//char * GetMemory(char* p) {
//
//	p = (char*)malloc(100);
//	return p;
//}
//
//void test(void) {
//
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//
//	test();
//	return 0;
//}
//��GetMemory��������p�ĵ�ַ ��str������str�ĵ�ַ����

//�Ĵ�2
//void GetMemory(char** p) {
//
//	*p = (char*)malloc(100);
//}
//
//void test(void) {
//
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//
//	test();
//	return 0;
//}

//ֱ�Ӵ�str�ĵ�ַ ������ֵ���� ����*p����str�ĵ�ַ��

//�� 

//char* Getmeory() {
//	char p[] = "hello world";
//	return p;
//}
//void test() {
//
//	char* str = NULL;
//	str = Getmeory();
//	printf(str);
//}
//int main() {
//	test();
//	return 0;
//}
// p���Ǿֲ����� ��Getmeory����ʱ����p ��ʱp���ڴ�������ʲô�Ѿ���ȷ���� ���صĵ�ַ��������� �ڷ��ʾ��ǷǷ������ڴ�

//int flipLights(int n, int presses) {
//    
//
//        switch (n)
//        {
//        case 0:
//            return 0;
//        case 1:
//            return (presses>0)+1;
//        case 2:
//            return (presses>1)+(presses>0)*2 + 1;
//    
//       }
//
//        switch (presses)
//        {
//        case 0:
//            return 1;
//        case 1:
//            return 4;
//        case 2:
//            return 7;
//   
//        }
//        return 8;
//    
//}
 /*
int main() {

    int x = flipLights(3, 1);
}*/

    int romanToInt(char* s) {
        if (s == "IV")
        {
            return 4;
        }

        if (s == "IX") {
            return 9;
        }
        if (s == "XL") {
            return 40;
        }
        if (s == "XC") {
            return 90;
        }
        if (s == "CD") {
            return 400;
        }
        if (s == "CM") {
            return 900;
        }
        int  i = 0;
        int q = 0;
        for (i = 0; s[i] != '\0'; i++) {

        }
        int x;
        int y;
        int z;
        int j;
        int k;
        int l;
        int o;
        int a = 0;
        int r = 0;
        int d = 0;
        x = y = z = j = k = l = o = 0;
        for (q = 0; q < i; q++) {
            switch (s[q]) {
            case 'I':
                if (s[q + 1] == 'V' || s[q + 1] == 'X') {
                    a++;
                }
                x++;
                break;
            case 'V':
                y++;
                break;
            case 'X':
                if (s[q + 1] == 'L' || s[q + 1] == 'C') {
                    r++;
                }
                z++;
                break;
            case 'L':
                j++;
                break;
            case 'C':
                if (s[q + 1] == 'D' || s[q + 1] == 'M') {
                    d++;
                }
                k++;
                break;
            case 'D':
                l++;
                break;
            case 'M':
                o++;
                break;
            defalut:
                break;
            }
        }
        return 1 * x + 5 * y + 10 * z + 50 * j + 100 * k + 500 * l + 1000 * o - 2 * a - 20 * r - 200 * d;
    }

int main() {

    char s[] = "MCMXCIV";
    int f = romanToInt(s);
}