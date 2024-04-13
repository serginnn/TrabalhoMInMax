#ifndef minMax_H
#define minMax__H

#include <iostream>
#include <vector>

using namespace std;

class minMax
{

public:
    void MinMax1(vector<int>&vetor);
    void MinMax2(vector<int>&vetor);
    void MinMax3(vector<int>&vetor);
    void Preencher(vector<int>&vetor, int tamanho);
    double calcularMedia1(minMax& m, vector<int>&vetor, int vezes);
    double calcularMedia2(minMax& m, vector<int>&vetor, int vezes);
    double calcularMedia3(minMax& m, vector<int>&vetor, int vezes);
    double calcularMediaCrescente1(minMax& m, vector<int>&vetor, int vezes);
    double calcularMediaCrescente2(minMax& m, vector<int>&vetor, int vezes);
    double calcularMediaCrescente3(minMax& m, vector<int>&vetor, int vezes);
    double calcularMediaDecrescente1(minMax& m, vector<int>&vetor, int vezes);
    double calcularMediaDecrescente2(minMax& m, vector<int>&vetor, int vezes);
    double calcularMediaDecrescente3(minMax& m, vector<int>&vetor, int vezes);
    void executarTestesMinMax();
};

#endif