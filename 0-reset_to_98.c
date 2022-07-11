void reset_to_98(int *n){
int a;
n=&a;
}
int main(){
int n;
n=98;
reset_to_98(&n);
return(0);
}
