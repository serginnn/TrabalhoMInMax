#include "minMax.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <random>
#include <ctime>
#include <iomanip>
#include <algorithm>

void minMax::Preencher( vector<int> &vetor, const int tamanho)
{
    for (int j=0; j < tamanho; j++)
    {
        vetor.push_back(rand() % 1000);
    }
};

void minMax::MinMax1(vector<int> &vetor)
{
    int min = vetor[0];
    int max = vetor[0];
   
        
        for (vector<int>::size_type j=1; j < vetor.size(); j++)
        {
            if (vetor[j] > max)
            {
                max = vetor[j];
            }
            if (vetor[j] < min)
            {
                min = vetor[j];
            }
        }
  
}

void minMax::MinMax2(vector<int> &vetor)
{   
    int max = vetor[0];
    int min = vetor[0];
    

    for (vector<int>::size_type i=1; i < vetor.size(); i++)
    {
        if (vetor[i] > max)
            max = vetor[i];
        else if (vetor[i] < min)
            min = vetor[i];
    }
}

void minMax::MinMax3(vector<int>&vetor)
{   
    int min= vetor[0];
    int max= vetor[0];
    int FimDoAnel;
    if (vetor.size() % 2 != 0)
    {
        vetor.push_back(vetor[vetor.size() - 1]);
        FimDoAnel = vetor.size();
    }
    else
    {
        FimDoAnel = vetor.size() - 1;
    }

    if (vetor[0] > vetor[1])
    {
        max = vetor[0];
        min = vetor[1];
    }
    int i = 2;
    while (i < FimDoAnel)
    {
        if (vetor[i] > vetor[i + 1])
        {
            if (vetor[i] > max)
            {
                max = vetor[i];
            }
            if (vetor[i + 1] < min)
            {
                min = vetor[i + 1];
            }
        }
        else
        {
            if (vetor[i + 1] > max)
            {
                max = vetor[i + 1];
            }
            if (vetor[i] < min)
            {
                min = vetor[i];
            }
        }
        i += 2;
    }

}

double minMax::calcularMedia1(minMax& m, vector<int>&vetor, int vezes) {
    double tempo_total = 0.0;

    for(int i = 0; i < vezes; i++) {
        clock_t start = clock(); 
        m.MinMax1(vetor);
        clock_t end = clock(); 
        double tempo = static_cast<double>(end - start) / CLOCKS_PER_SEC; 
        tempo_total += tempo;
    }
    
    return tempo_total / vezes; 
}

double minMax::calcularMedia2(minMax& m, vector<int>&vetor, int vezes) {
    double tempo_total = 0.0;

    for(int i = 0; i < vezes; i++) {
        clock_t start = clock(); 
        m.MinMax2(vetor);
        clock_t end = clock(); 
        double tempo = static_cast<double>(end - start) / CLOCKS_PER_SEC; 
        tempo_total += tempo;
    }
    
    return tempo_total / vezes; 
}

double minMax::calcularMedia3(minMax& m, vector<int>&vetor, int vezes) {
    double tempo_total = 0.0;

    for(int i = 0; i < vezes; i++) {
        clock_t start = clock(); 
        m.MinMax3(vetor);
        clock_t end = clock(); 
        double tempo = static_cast<double>(end - start) / CLOCKS_PER_SEC; 
        tempo_total += tempo;
    }
    
    return tempo_total / vezes; 
}

double minMax::calcularMediaCrescente1(minMax& m, vector<int>&vetor, int vezes){
    vector<int> vetor_ordenado = vetor;
    double tempo_total= 0.0;
    sort(vetor_ordenado.begin(), vetor_ordenado.end());
    for(int i=0; i <vezes; i++){
    clock_t start = clock();
    m.MinMax1(vetor_ordenado);
    clock_t end = clock();
    double tempo = static_cast<double>(end-start)/ CLOCKS_PER_SEC;
    tempo_total+= tempo;
    }

    return tempo_total/vezes;

}

double minMax::calcularMediaCrescente2(minMax& m, vector<int>&vetor, int vezes){
    vector<int> vetor_ordenado = vetor;
    double tempo_total= 0.0;
    sort(vetor_ordenado.begin(), vetor_ordenado.end());
    for(int i=0; i <vezes; i++){
    clock_t start = clock();
    m.MinMax2(vetor_ordenado);
    clock_t end = clock();
    double tempo = static_cast<double>(end-start)/ CLOCKS_PER_SEC;
    tempo_total+= tempo;
    }

    return tempo_total/vezes;

}

double minMax::calcularMediaCrescente3(minMax& m, vector<int>&vetor, int vezes){
    vector<int> vetor_ordenado = vetor;
    double tempo_total= 0.0;
    sort(vetor_ordenado.begin(), vetor_ordenado.end());
    for(int i=0; i <vezes; i++){
    clock_t start = clock();
    m.MinMax3(vetor_ordenado);
    clock_t end = clock();
    double tempo = static_cast<double>(end-start)/ CLOCKS_PER_SEC;
    tempo_total+= tempo;
    }

    return tempo_total/vezes;

}

double minMax::calcularMediaDecrescente1(minMax& m, vector<int>&vetor, int vezes){
    vector<int> vetor_ordenado = vetor;
    double tempo_total= 0.0;
    sort(vetor_ordenado.begin(), vetor_ordenado.end(), greater<int>());
    for(int i=0; i <vezes; i++){
    clock_t start = clock();
    m.MinMax1(vetor_ordenado);
    clock_t end = clock();
    double tempo = static_cast<double>(end-start)/ CLOCKS_PER_SEC;
    tempo_total+= tempo;
    }

    return tempo_total/vezes;

}

double minMax::calcularMediaDecrescente2(minMax& m, vector<int>&vetor, int vezes){
    vector<int> vetor_ordenado = vetor;
    double tempo_total= 0.0;
    sort(vetor_ordenado.begin(), vetor_ordenado.end(), greater<int>());
    for(int i=0; i <vezes; i++){
    clock_t start = clock();
    m.MinMax2(vetor_ordenado);
    clock_t end = clock();
    double tempo = static_cast<double>(end-start)/ CLOCKS_PER_SEC;
    tempo_total+= tempo;
    }

    return tempo_total/vezes;

}

double minMax::calcularMediaDecrescente3(minMax& m, vector<int>&vetor, int vezes){
    vector<int> vetor_ordenado = vetor;
    double tempo_total= 0.0;
    sort(vetor_ordenado.begin(), vetor_ordenado.end(), greater<int>());
    for(int i=0; i <vezes; i++){
    clock_t start = clock();
    m.MinMax3(vetor_ordenado);
    clock_t end = clock();
    double tempo = static_cast<double>(end-start)/ CLOCKS_PER_SEC;
    tempo_total+= tempo;
    }

    return tempo_total/vezes;

}

void minMax::executarTestesMinMax(){
    minMax m;
    int vezes=10;
    double tempoDeExecuçãoMinMax1_1, tempoDeExecuçãoMinMax1_2, tempoDeExecuçãoMinMax1_3, tempoDeExecuçãoMinMax1_4;
    double tempoDeExecuçãoMinMax2_1, tempoDeExecuçãoMinMax2_2, tempoDeExecuçãoMinMax2_3, tempoDeExecuçãoMinMax2_4;
    double tempoDeExecuçãoMinMax3_1, tempoDeExecuçãoMinMax3_2, tempoDeExecuçãoMinMax3_3, tempoDeExecuçãoMinMax3_4;
    double tempoCrescenteMinMax1_1, tempoCrescenteMinMax1_2, tempoCrescenteMinMax1_3, tempoCrescenteMinMax1_4;
    double tempoCrescenteMinMax2_1, tempoCrescenteMinMax2_2, tempoCrescenteMinMax2_3, tempoCrescenteMinMax2_4;
    double tempoCrescenteMinMax3_1, tempoCrescenteMinMax3_2, tempoCrescenteMinMax3_3, tempoCrescenteMinMax3_4;
    double tempoDecrescenteMinMax1_1, tempoDecrescenteMinMax1_2, tempoDecrescenteMinMax1_3, tempoDecrescenteMinMax1_4;
    double tempoDecrescenteMinMax2_1, tempoDecrescenteMinMax2_2, tempoDecrescenteMinMax2_3, tempoDecrescenteMinMax2_4;
    double tempoDecrescenteMinMax3_1, tempoDecrescenteMinMax3_2, tempoDecrescenteMinMax3_3, tempoDecrescenteMinMax3_4;
    string arqsaida= "datasets/Out.mps";

    vector<int> vetor1;
    vector<int> vetor2;
    vector<int> vetor3;
    vector<int> vetor4;

    m.Preencher(vetor1, 1000);
    m.Preencher(vetor2, 10000);
    m.Preencher(vetor3, 100000);
    m.Preencher(vetor4, 500000);

    tempoDeExecuçãoMinMax1_1= m.calcularMedia1(m, vetor1, vezes);
    tempoDeExecuçãoMinMax1_2= m.calcularMedia1(m, vetor2, vezes);
    tempoDeExecuçãoMinMax1_3= m.calcularMedia1(m, vetor3, vezes);
    tempoDeExecuçãoMinMax1_4= m.calcularMedia1(m, vetor4, vezes);

    tempoDeExecuçãoMinMax2_1= m.calcularMedia2(m, vetor1, vezes);
    tempoDeExecuçãoMinMax2_2= m.calcularMedia2(m, vetor2, vezes);
    tempoDeExecuçãoMinMax2_3= m.calcularMedia2(m, vetor3, vezes);
    tempoDeExecuçãoMinMax2_4= m.calcularMedia2(m, vetor4, vezes);

    tempoDeExecuçãoMinMax3_1= m.calcularMedia3(m, vetor1, vezes);
    tempoDeExecuçãoMinMax3_2= m.calcularMedia3(m, vetor2, vezes);
    tempoDeExecuçãoMinMax3_3= m.calcularMedia3(m, vetor3, vezes);
    tempoDeExecuçãoMinMax3_4= m.calcularMedia3(m, vetor4, vezes);

    tempoCrescenteMinMax1_1=m.calcularMediaCrescente1(m,vetor1,vezes);
    tempoCrescenteMinMax1_2=m.calcularMediaCrescente1(m,vetor2,vezes);
    tempoCrescenteMinMax1_3=m.calcularMediaCrescente1(m,vetor3,vezes);
    tempoCrescenteMinMax1_4=m.calcularMediaCrescente1(m,vetor4,vezes);

    tempoCrescenteMinMax2_1=m.calcularMediaCrescente2(m,vetor1,vezes);
    tempoCrescenteMinMax2_2=m.calcularMediaCrescente2(m,vetor2,vezes);
    tempoCrescenteMinMax2_3=m.calcularMediaCrescente2(m,vetor3,vezes);
    tempoCrescenteMinMax2_4=m.calcularMediaCrescente2(m,vetor4,vezes);

    tempoCrescenteMinMax3_1=m.calcularMediaCrescente3(m,vetor1,vezes);
    tempoCrescenteMinMax3_2=m.calcularMediaCrescente3(m,vetor2,vezes);
    tempoCrescenteMinMax3_3=m.calcularMediaCrescente3(m,vetor3,vezes);
    tempoCrescenteMinMax3_4=m.calcularMediaCrescente3(m,vetor4,vezes);

    tempoDecrescenteMinMax1_1=m.calcularMediaDecrescente1(m,vetor1,vezes);
    tempoDecrescenteMinMax1_2=m.calcularMediaDecrescente1(m,vetor2,vezes);
    tempoDecrescenteMinMax1_3=m.calcularMediaDecrescente1(m,vetor3,vezes);
    tempoDecrescenteMinMax1_4=m.calcularMediaDecrescente1(m,vetor4,vezes);

    tempoDecrescenteMinMax2_1=m.calcularMediaDecrescente2(m,vetor1,vezes);
    tempoDecrescenteMinMax2_2=m.calcularMediaDecrescente2(m,vetor2,vezes);
    tempoDecrescenteMinMax2_3=m.calcularMediaDecrescente2(m,vetor3,vezes);
    tempoDecrescenteMinMax2_4=m.calcularMediaDecrescente2(m,vetor4,vezes);

    tempoDecrescenteMinMax3_1=m.calcularMediaDecrescente3(m,vetor1,vezes);
    tempoDecrescenteMinMax3_2=m.calcularMediaDecrescente3(m,vetor2,vezes);
    tempoDecrescenteMinMax3_3=m.calcularMediaDecrescente3(m,vetor3,vezes);
    tempoDecrescenteMinMax3_4=m.calcularMediaDecrescente3(m,vetor4,vezes);

    ofstream arq(arqsaida);
    if(!arq.is_open()){
        cout<< "Erro ao abrir arquivo de saída"<<endl;
    }
    else{
    arq << fixed << setprecision(8);
    arq<< "Tempo Medio de execução MinMax1(1000): " << tempoDeExecuçãoMinMax1_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1(10000): " << tempoDeExecuçãoMinMax1_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1(100000): " << tempoDeExecuçãoMinMax1_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1(500000): " << tempoDeExecuçãoMinMax1_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax2(1000): " << tempoDeExecuçãoMinMax2_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2(10000): " << tempoDeExecuçãoMinMax2_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2(100000): " << tempoDeExecuçãoMinMax2_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2(500000): " << tempoDeExecuçãoMinMax2_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax3(1000): " << tempoDeExecuçãoMinMax3_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3(10000): " << tempoDeExecuçãoMinMax3_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3(100000): " << tempoDeExecuçãoMinMax3_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3(500000): " << tempoDeExecuçãoMinMax3_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax1 Crescente(1000): " << tempoCrescenteMinMax1_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1 Crescente(10000): " << tempoCrescenteMinMax1_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1 Crescente(100000): " << tempoCrescenteMinMax1_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1 Crescente(500000): " << tempoCrescenteMinMax1_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax2 Crescente(1000): " << tempoCrescenteMinMax2_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2 Crescente(10000): " << tempoCrescenteMinMax2_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2 Crescente(100000): " << tempoCrescenteMinMax2_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2 Crescente(500000): " << tempoCrescenteMinMax2_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax3 Crescente(1000): " << tempoCrescenteMinMax3_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3 Crescente(10000): " << tempoCrescenteMinMax3_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3 Crescente(100000): " << tempoCrescenteMinMax3_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3 Crescente(500000): " << tempoCrescenteMinMax3_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax1 Decrescente(1000): " << tempoDecrescenteMinMax1_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1 Decrescente(10000): " << tempoDecrescenteMinMax1_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1 Decrescente(100000): " << tempoDecrescenteMinMax1_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax1 Decrescente(500000): " << tempoDecrescenteMinMax1_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax2 Decrescente(1000): " << tempoDecrescenteMinMax2_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2 Decrescente(10000): " << tempoDecrescenteMinMax2_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2 Decrescente(100000): " << tempoDecrescenteMinMax2_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax2 Decrescente(500000): " << tempoDecrescenteMinMax2_4 << "segundos"<< endl;
    arq<<endl;
    arq<< "Tempo Medio de execução MinMax3 Decrescente(1000): " << tempoDecrescenteMinMax3_1 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3 Decrescente(10000): " << tempoDecrescenteMinMax3_2 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3 Decrescente(100000): " << tempoDecrescenteMinMax3_3 << "segundos"<< endl;
    arq<< "Tempo Medio de execução MinMax3 Decrescente(500000): " << tempoDecrescenteMinMax3_4 << "segundos"<< endl;

    }
    arq.close();

}



