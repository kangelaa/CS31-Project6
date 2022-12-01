//
//  main.cpp
//  Project 6
//
//  Created by Angela Kan on 12/1/20.
//

#include <iostream>

using namespace std;
//
//// return true if two C strings are equal
//bool strequal(const char str1[], const char str2[])
//{
//    const char* ptr1 = str1;
//    const char* ptr2 = str2;
//
//    int count1 = 0;
//    int count2 = 0;
//    while (*ptr1 != '\0' && *ptr2 != '\0')
//    {
//        if (*ptr1 != *ptr2)  // compare corresponding characters
//            return false;
//        if (ptr1[1] != '\0')
//            count1++;
//        if (ptr2[1] != '\0')
//            count2++;
//        ptr1++;             // advance to the next character
//        ptr2++;
//    }
//    return count1 == count2;   // both ended at same time?
//}
//
//int main()
//{
//  char a[15] = "Shi";
//  char b[15] = "Shi";
//
//  if (strequal(a,b))
//      cout << "They're the same person!\n";
//}
//


//void computeCube(int n, int* ncubed)
//    {
//        *ncubed = n * n * n;
//    }
//
//    int main()
//    {
//        int n;
//        int* ptr = &n;
//        computeCube(5, ptr);
//        cout << "Five cubed is " << *ptr << endl;
//    }

//int main(){
//    double* cat;
//    double mouse[5];    //do i have to initialize w/ values?
//    cat = &mouse[4];
//    *cat = 25;
//    *(mouse + 3) = 54;
//    cat -= 3;
//    cat[1] = 42;
//    cat[0] = 27;
//    bool b = (*cat == *(cat+1)) ? true : false;
//    bool d = (cat == &mouse[0]) ? true : false;
//}

//double mean(const double* scores, int numScores)
//{
//    const double* ptr = scores;
//    double tot = 0;
//    for (int i=0; i<numScores; i++)
//    {
//        tot += *(ptr + i);
//    }
//    return tot/numScores;
//}
//
//int main(){
//    const double scores[4] = {10, 1, 1, 1};
//    cout << mean(scores, 4) << endl;
//}

// This function searches through str for the character chr.
// If the chr is found, it returns a pointer into str where
// the character was first found, otherwise nullptr (not found).

//const char* findTheChar(const char* str, char chr)
//{
//    for (str = str; *str != '\0'; str++){
//        if (*str == chr)
//            return str;
//    }
//    return nullptr;
//}
//
//int main(){
//    const char str[] = "Hello";
//    cout << findTheChar(str, 'o') << endl;
//}

//#include <iostream>
//using namespace std;
//
//int* maxwell(int* a, int* b)
//{
//    if (*a > *b)
//        return a;
//    else
//        return b;
//}
//
//void swap1(int* a, int* b)
//{
//    int* temp = a;
//    a = b;
//    b = temp;
//}
//
//void swap2(int* a, int* b)
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main()
//{
//    int array[6] = { 5, 3, 4, 17, 22, 19 };
//    //int array[6] = { -1, 79, 4, 9, 22, 19 };
//
//
//    int* ptr = maxwell(array, &array[2]);
//    *ptr = -1;
//    ptr += 2;
//    ptr[1] = 9;
//    *(array+1) = 79;
//
//    cout << &array[5] - ptr << endl;
//
//    swap1(&array[0], &array[1]);
//    swap2(array, &array[2]);
//
//    for (int i = 0; i < 6; i++)
//        cout << array[i] << endl;
//}
//

void removeS(char* str){
    while (*str != '\0'){
        if (*str == 's' || *str == 'S'){
            char* ptr = str;
            while (*ptr != '\0'){
                *ptr = *(ptr+1);
                ptr++;
            }
            str--;
        }
        str++;
    }
}

int main()
{
    char msg[50] = "She'll be a massless princess.";
    removeS(msg);
    cout << msg << endl;  // prints   he'll be a male prince.
}
