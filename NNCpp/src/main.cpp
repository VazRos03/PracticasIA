#include <iostream>
#include <vector>
#include <cmath>

//funcion de activacion 
double sigmoid(double x){
    return 1.0 / (1.0 + exp(-x));
}

//neurona simple, donde sus parametros tendremos la entrada y el peso~
double neurona(std::vector<double> x, std::vector<double> w ){
    double suma = 0;
    for (int i =0; i<x.size(); i++){
        suma += x[i] * w[i];
    }
    return sigmoid(suma);
}

//funcion principal
int main(){
    std::vector<double> entrada = {1.0,0.5};
    std::vector<double> pesos = {0.8,-0.2};

    double salida = neurona(entrada, pesos);

    std::cout<<"Salida: " << salida << std::endl;

    return 0;
}