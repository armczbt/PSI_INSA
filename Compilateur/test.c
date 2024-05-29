int main(){

int *a;

int b = 4;
print(b);


a = &b;
print(*a);

b = 15;
print(*a);


*a = 18;

print(*a);

b = *a;

print(b);
}