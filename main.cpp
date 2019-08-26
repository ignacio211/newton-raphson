/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ignacio
 *
 * Created on 25 de agosto de 2019, 19:49
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    int num_term;
    float evaluacion=2; //cambiar nombre, debe ir aumentando AUTOMATICAMENTE
    float coef;
    float resultado=0;
    float resultado_derivado=0;

    float coef_derivado[10];
    float exp_derivado[10];
    int num_iteraciones=5;
    float newton;

   cout << "Numero de terminos del polinomio" << endl;
   cin >> num_term;

   //cout <<"Ingrese valor a evaluar" << endl;
   //cin >> evaluacion;    // ESTE VALOR DEBE IR AUMENTANDO AUTOMATICAMENTE


   
   
   
   
   for(int i=0; i<num_term; i++)
    {
        cout << "Ingrese el exponente del termino " << i+1 << endl;
        float exponente[i];
        cin >> exponente[i];

        cout << "Ingrese el coeficiente del termino " << i+1 << endl;
        float coef[i];
        cin >> coef[i];

        coef_derivado[i]= exponente[i]*coef[i];
        //cout << "coeficiente derivado: " << coef_derivado[i] << endl;

        exp_derivado[i]=exponente[i]-1;
        //cout << "exponente derivado: "<< exp_derivado[i] << endl;

        
        
        
        
        resultado=(coef[i]*pow(evaluacion,exponente[i])) + resultado; // EL RESULTADO SE DEBE GUARDAR PARA USARLO EN LA FORMULA DE NEWTON RAPHSON
        resultado_derivado= (coef_derivado[i]*pow(evaluacion,exp_derivado[i])) + resultado_derivado;
        
    }

        
        //r[0]=resultado;
        //rd[0]=resultado_derivado;
        //cout << r[0];
        //cout << "Resultado= " << resultado << endl; // 
        //cout << "Resultado derivado= " << resultado_derivado; // 
        
        newton=1-float(resultado/resultado_derivado); //primera iteracion
                
                cout << newton;
              
  }

        
   
    
    



