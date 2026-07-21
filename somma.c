double somma (int a, double b, double c) {
    return a + b + c;
}

double media (int a, double b, double c) {
    return somma(a, b, c)/3;
}

double massimo (int a, double b, double c) {
    double temp = 0;
    if (a >= b) temp = a;
    else if (b > a) temp = b;
    if (temp > c) return temp;
    else return c;
}
 
int main(){
    double a = somma (1, 5.5, 7.2);
}