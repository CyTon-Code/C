#ifndef BOOL_LIBRARY_H
#define BOOL_LIBRARY_H

#define bool(typ, var) convert_ ## typ ## _to_boolean_type(var)
#define false  bool(char, 0)
#define true  bool(char, 1)

int str_len(const char *text);

int str_len(const char *text) {
    int length = 0;
    while (text[length++] != '\0');
    return length;
}

/**
* type:  bool
* <br>
* false:  (char) 0
* <br>
* true:  (char) 1
*/
typedef struct {
    char flag;
//    int id;
} boolean_type;

/*
 * функция преобразовывает число в bool
 * */
boolean_type convert_int_to_boolean_type(int number) {
    boolean_type var;  // tmp boolean_type

    // convert:
    if (number)
        var.flag = 1;
    else
        var.flag = 0;

    return var;
}

boolean_type convert_char_to_boolean_type(char number) {
    boolean_type var;
    if (number)
        var.flag = 1;
    else
        var.flag = 0;
    return var;
}

boolean_type convert_string_to_boolean_type(const char *_text) {
    char *key = "";
    boolean_type var;
    int length = str_len(key);

    for (int i = 0; i < length; i++) {
        if (key[i] != _text[i]) {
            var.flag = 1;
            return var;
        }
    }
    var.flag = 0;
    return var;
}

boolean_type convert_str_to_boolean_type(const char *_text) {
    char *key = "";
    boolean_type var;
    int length = str_len(key);

    for (int i = 0; i < length; i++) {
        if (key[i] != _text[i]) {
            var.flag = 1;
            return var;
        }
    }
    var.flag = 0;
    return var;
}


#endif //BOOL_LIBRARY_H
