# define N 10
int array[N]={0,5,7,11,13,17,19,23,28};


int division(int div, int a){
    return div+(a/2);
}

int calculo(int *arr,int n){
    int numero=0;
    for(int i=0; i<n;i++){
        numero=mul(numero, arr[i]);
    }
    return numero;
}

int main(){
    int valor = calculo(array,N);
    return 0;
    
