bool{
char flag;
}

bool.flag = true / false

char true = 1;
char false = 0;

bool(string)-> if string is ""  return false else  return true
bool(int)-> if int == 0 return false else  return true
bool(char)->bool(int)
bool(float)->bool(int)
bool(double)->bool(int)
bool(void* NULL)return false
...



#define bool(typ, var) convert_ ## typ ## _to_boolean_type(var)


