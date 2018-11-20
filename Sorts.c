#include <stdlib.h>
#include <stdio.h>
//Faltou a leitura do vetor por ponteiros

void ler_vetor_normal(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}
void mostrar_vetor_normal(int v[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d-", v[i]);
    }
}
void ler_vetor_malloc(int *b, int n){
    int i;
    for(i=0; i<n; i++){
        scanf("%d", (b+i));
    }
}
void mostrar_vetor_malloc(int *b, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d-", *(b+i));
    }
}
void bubble_sort_cres(int v[], int n){
    int i,j,aux;
    for (i=0;i<(n-1);i++){
        for (j=0;j<(n-i-1);j++){
            if (v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}
void selection_sort_cres(int v[], int n){
    int i,j, menor,aux=0;

    for (i=0; i<(n-1); i++){
        menor=i;
        for (j=(i+1); j<n; j++){
            if (v[j]<v[menor]){
                menor=j;
            }
        }
        if (i!=menor){
            aux=v[i];
            v[i]=v[menor];
            v[menor]=aux;
        }
    }
}
void insertion_sort_cres(int v[], int n){
    int i,j,aux;

    for (i=1;i<n;i++){
        aux=v[i];
        j=i-1;
        while((j>=0)&&(v[j]>aux)){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=aux;
    }
}
void bubble_sort_decre(int v[], int n){
    int i,j,aux;
    for (i=0;i<(n-1);i++){
        for (j=0;j<(n-i-1);j++){
            if (v[j]<v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}
void selection_sort_decre(int v[], int n){
    int i,j, menor,aux=0;

    for (i=0; i<(n-1); i++){
        menor=i;
        for (j=(i+1); j<n; j++){
            if (v[j]>v[menor]){
                menor=j;
            }
        }
        if (i!=menor){
            aux=v[i];
            v[i]=v[menor];
            v[menor]=aux;
        }
    }
}
void insertion_sort_decre(int v[], int n){  
    int i,j,aux;

    for (i=1;i<n;i++){
        aux=v[i];
        j=i-1;
        while((j>=0)&&(v[j]<aux)){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=aux;
    }
}
void bubble_sort_malloc_decre(int *b, int n){
    int i,j,aux;
    for (i=0;i<(n-1);i++){
        for (j=0;j<(n-i-1);j++){
            if (*(b+j)<*(b+j+1)){
                aux=*(b+j);
                *(b+j)=*(b+j+1);
                *(b+j+1)=aux;
            }
        }
    }
}
void bubble_sort_malloc_cres(int *b, int n){
    int i,j,aux;
    for (i=0;i<(n-1);i++){
        for (j=0;j<(n-i-1);j++){
            if (*(b+j)>*(b+j+1)){
                aux=*(b+j);
                *(b+j)=*(b+j+1);
                *(b+j+1)=aux;
            }
        }
    }
}
void selection_sort_malloc_decre(int *b, int n){
    int i,j, menor,aux=0;

    for (i=0; i<(n-1); i++){
        menor=i;
        for (j=(i+1); j<n; j++){
            if (*(b+j)>*(b+menor)){
                menor=j;
            }
        }
        if (i!=menor){
            aux=*(b+i);
            *(b+i)=*(b+menor);
            *(b+menor)=aux;
        }
    }
}
void selection_sort_malloc_cres(int *b, int n){
    int i,j, menor,aux=0;

    for (i=0; i<(n-1); i++){
        menor=i;
        for (j=(i+1); j<n; j++){
            if (*(b+j)<*(b+menor)){
                menor=j;
            }
        }
        if (i!=menor){
            aux=*(b+i);
            *(b+i)=*(b+menor);
            *(b+menor)=aux;
        }
    }
}
void insertion_sort_malloc_decre(int *b, int n){
    int i,j,aux;

    for (i=1;i<n;i++){
        aux=*(b+i);
        j=i-1;
        while((j>=0)&&(*(b+j)<aux)){
            *(b+j+1)=*(b+j);
            j--;
        }
        *(b+j+1)=aux;
    }
}
void insertion_sort_malloc_cres(int *b, int n){
    int i,j,aux;

    for (i=1;i<n;i++){
        aux=*(b+i);
        j=i-1;
        while((j>=0)&&(*(b+j)>aux)){
            *(b+j+1)=*(b+j);
            j--;
        }
        *(b+j+1)=aux;
    }
}
int busca_linear_normal(int v[], int n, int numpesquisado){
    int i;
    for(i=0;i<n;i++){
        if(numpesquisado==v[i]){
            return 1;
        }
    }
    return 0;
}
int busca_linear_malloc(int *b, int n, int numpesquisado){
    int i;
    for(i=0;i<n;i++){
        if(numpesquisado==*(b+i)){
            return 1;
        }
    }
    return 0;
}
int busca_binaria_normal(int vet[], int n, int numpesquisado, char ordem){
    int i=0,f,m; 
    f = n-1; 
    if(ordem=='c'){
        while(i<=f){ 
        m = (i+f)/2;
        if( numpesquisado == vet[m] ){ 
            return 1;
        }
        if(numpesquisado<vet[m]){ // < crescente, > Decrescente
        f = m-1;
        }else{
            i = m+1;
        }
    } 
     return 0; 
    }else{
        while(i<=f){ 
        m = (i+f)/2;
        if( numpesquisado == vet[m] ){ 
            return 1;
        }
        if(numpesquisado>vet[m]){ // < crescente, > Decrescente
        f = m-1;
        }else{
            i = m+1;
        }
    } 
     return 0; 
    }
}
int busca_binaria_malloc(int *b, int n, int numpesquisado, char ordem){
    int i=0,f,m; 
    f = n-1; 
    if(ordem=='c'){
        while(i<=f){ 
        m = (i+f)/2;
        if( numpesquisado == *(b+m)){ 
            return 1;
        }
        if(numpesquisado<*(b+m)){ // < crescente, > Decrescente
            f = m-1;
        }else{
            i = m+1;
        }
    } 
     return 0; 
    }else{
        while(i<=f){ 
        m = (i+f)/2;
        if( numpesquisado == *(b+m) ){ 
            return 1;
        }
        if(numpesquisado>*(b+m)){ // < crescente, > Decrescente
            f = m-1;
        }else{
            i = m+1;
        }
    } 
     return 0; 
    }
}
int main(){
    char letrametodo, ordem, letraalloc, restart, numpesquisado, letraBusca, letraBuscaModo, bacana, bacana2;
    int tamvetor, *p;
    printf("Qual metodo deseja usar? ('b', 'i' ou 's')\n");
    scanf("%c", &letrametodo);
    printf("Deseja em ordem crescente ou decrecente? ('c'ou 'd')\n");
    fflush(stdin);
    scanf("%c", &ordem);
    printf("Deseja usar alocacao dinamica e ponteiros?('s', 'n')\n");
    fflush(stdin);
    scanf("%c", &letraalloc);
    printf("Qual o tamanho do vetor\n");
    scanf("%d", &tamvetor);
    int vet[tamvetor];
    p=malloc(tamvetor*sizeof(int));
        if(!p){
            printf("Tamanho de memória insuficiente");
            exit(1);
        }
    if(letraalloc=='n'){
        printf("Digite seu vetor de tamanho %d\n", tamvetor);
        ler_vetor_normal(vet, tamvetor);
        switch(letrametodo){
                case 'b':
                    ordem=='d' ? bubble_sort_decre(vet, tamvetor) : bubble_sort_cres(vet, tamvetor);
                break;
                case 's':
                    ordem=='d' ? selection_sort_decre(vet, tamvetor) : selection_sort_cres(vet, tamvetor);
                break;
                case 'i':
                    ordem=='d' ? insertion_sort_decre(vet, tamvetor) : insertion_sort_cres(vet, tamvetor);
                break;
            }
        mostrar_vetor_normal(vet, tamvetor);
    }else{
        printf("Digite seu vetor de tamanho %d\n", tamvetor);
        ler_vetor_malloc(p, tamvetor);
        switch(letrametodo){
                case 'b':
                    ordem=='d' ? bubble_sort_malloc_decre(p, tamvetor) : bubble_sort_malloc_cres(p, tamvetor);
                break;
                case 's':
                    ordem=='d' ? selection_sort_malloc_decre(p, tamvetor) : selection_sort_malloc_cres(p, tamvetor);
                break;
                case 'i':
                    ordem=='d' ? insertion_sort_malloc_decre(p, tamvetor) : insertion_sort_malloc_cres(p, tamvetor);
                break;
        }
        mostrar_vetor_malloc(p, tamvetor);
    }
    printf("\nDeseja fazer uma busca? ('s' ou 'n')\n");
    fflush(stdin);
    scanf("%c", &letraBusca);
    if(letraBusca=='s'){
        bacana=letraalloc;
        bacana2=ordem;
        printf("Binaria ou linear? ('b' ou 'l')\n");
        fflush(stdin);
        scanf("%c", &letraBuscaModo);
        printf("Qual o numero procurado?\n");
        fflush(stdin);
        scanf("%d", &numpesquisado);
        if((letraBuscaModo=='l') && (bacana=='n')){
            (busca_linear_normal(vet, tamvetor, numpesquisado)) ? printf("Seu numero existe") : printf("Seu numero nao existe");
        }if((letraBuscaModo=='l') && (bacana=='s')){
            (busca_linear_malloc(p, tamvetor, numpesquisado)) ? printf("Seu numero existe") : printf("Seu numero nao existe");
        }if((letraBuscaModo=='b') && (bacana=='n')){
            (busca_binaria_normal(vet, tamvetor, numpesquisado, bacana2)) ? printf("Seu numero existe") : printf("Seu numero nao existe");
        }if((letraBuscaModo=='b') && (bacana=='s')){
            (busca_binaria_malloc(p, tamvetor, numpesquisado, bacana2)) ? printf("Seu numero existe") : printf("Seu numero nao existe");
        }
    }
    printf("\nDeseja continuar operando? ('s' ou 'n')\n");
    fflush(stdin);
    scanf("%c", &restart);
    fflush(stdin);
    free(p);
    p=NULL;
    restart=='s' ? main() : exit(0);
}
