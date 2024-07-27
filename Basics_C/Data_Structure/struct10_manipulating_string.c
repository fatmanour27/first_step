//* strlen() func : give the length of string/ count num of character in string return int value
//* strlen() func : stop counting when NULL character found
//* Header file : <string.h>
//* syntax : strlen(const char *str);

//* strcpy() func : copy contents of string into another string, return pointer its type char
//* Header file : <string.h>
//* syntax : char *strcpy(char *dest, const char *src) //src copied into dest  //dest: pointer to destination array(be copied) //src: pointer to copied string

//* strcat() func : concatenate two strings
//* Header file : <string.h>
//* syntax : char *strcat(char *dest, const char *src)  //concatenate src (source string) with end of dest (destination string)
#include <stdio.h>
#include <string.h>
//strlen() func
int main()
{
    char a[20] = "Program";
    char b[20] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    char c[20] = {'\0'};  //*return NULL characcter then the int value, which returned = 0

    printf("\n Length of string a = %d", strlen(a));
    printf("\n Length of string b = %d", strlen(b));
    printf("\n Length of string c = %d", strlen(c));

    return 0;
}
//strcpy() func
int main()
{
    char str_will_copied[] = "Embedded Systems";
    char newplace_for_copied_str[20] = {'\0'};

    printf("\n newplace for copied string: %s", strcpy(newplace_for_copied_str, str_will_copied));

    return 0;    
}
//strcat() func
int main()
{
    char end_of_string[] = "Embedded ";

    printf("\n end of string: %s", strcat(end_of_string, "Systems"));  //*systems is string which concatenated with end of Embedded string

    return 0;    
}
//strcmp() func
int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    result = strcmp(str1, str2);   //*compare str1 with str2, abcd with abCd = 1 because two string aren't similar (positive because ASCII code of c > C)
    printf("\n compare str1 with str2 = %d", result);

    result = strcmp(str2, str1);   //*compare str2 with str1, abCd with abcd = -1 because two strings aren't similar (negative because ASCII code of C < c)
    printf("\n compare str2 with str1 = %d", result);

    result = strcmp(str1, str3);   //*compare str1 with str3, abcd with abcd = 0 because two strings are similar
    printf("\n compare str1 with str3 = %d", result);

    return 0;
}