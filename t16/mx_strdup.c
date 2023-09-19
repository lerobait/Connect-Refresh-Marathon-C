char *mx_strnew(const int size);

char *mx_strcpy(char *dst, const char *src);

int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
    int length = mx_strlen(str);
    char *s1 = mx_strnew(length);
    char *s2 = mx_strcpy(s1, str);
    return s2;
}
