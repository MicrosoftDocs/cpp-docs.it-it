---
title: "Classe negative_binomial_distribution | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::negative_binomial_distribution"
  - "tr1.negative_binomial_distribution"
  - "std.tr1.negative_binomial_distribution"
  - "random/std::tr1::negative_binomial_distribution"
  - "std::tr1::negative_binomial_distribution"
  - "negative_binomial_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "negative_binomial_distribution (classe)"
ms.assetid: 7f5f0967-7fdd-4578-99d4-88f292b4fe9c
caps.latest.revision: 15
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe negative_binomial_distribution
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una distribuzione binomiale negativa.  
  
## Sintassi  
  
```  
template<class IntType = int> class negative_binomial_distribution { public:     // types     typedef IntType result_type;     struct param_type;     // constructor and reset functions     explicit negative_binomial_distribution(IntType k = 1, double p = 0.5);     explicit negative_binomial_distribution(const param_type& parm);     void reset();     // generating functions     template<class URNG>     result_type operator()(URNG& gen);     template<class URNG>     result_type operator()(URNG& gen, const param_type& parm);     // property functions     IntType k() const;     double p() const;     param_type param() const;     void param(const param_type& parm);     result_type min() const;     result_type max() const; };  
```  
  
#### Parametri  
 `IntType`  
 Tipo di risultati Integer. Per impostazione predefinita, `int`.  Per informazioni sui tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 La classe modello descrive una distribuzione che produce valori di un tipo integrale specificato dall'utente o di tipo `int` se non è specificato alcun valore, distribuiti secondo la funzione di probabilità discreta binomiale negativa.  La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[negative\_binomial\_distribution::negative\_binomial\_distribution](../Topic/negative_binomial_distribution::negative_binomial_distribution.md)|`negative_binomial_distribution::k`|`negative_binomial_distribution::param`|  
|`negative_binomial_distribution::operator()`|`negative_binomial_distribution::p`|[negative\_binomial\_distribution::param\_type](../Topic/negative_binomial_distribution::param_type.md)|  
  
 I membri di proprietà `k()` e `p()` restituiscono i valori rispettivi per i parametri di distribuzione attualmente archiviati `k` e `p`.  
  
 Per altre informazioni sulle classi di distribuzione e i rispettivi membri, vedere [\<random\>](../standard-library/random.md).  
  
 Per informazioni dettagliate sulla funzione di probabilità discreta binomiale negativa, vedere l'articolo di Wolfram MathWorld relativo [Distribuzione binomiale negativa](http://go.microsoft.com/fwlink/?LinkId=400516).  
  
## Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const int k, const double p, const int& s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1729);  
  
    std::negative_binomial_distribution<> distr(k, p);  
  
    std::cout << std::endl;  
    std::cout << "k == " << distr.k() << std::endl;  
    std::cout << "p == " << distr.p() << std::endl;  
  
    // generate the distribution as a histogram  
    std::map<int, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    std::cout << "Histogram for " << s << " samples:" << std::endl;  
    for (const auto& elem : histogram) {  
        std::cout << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    int    k_dist = 1;  
    double p_dist = 0.5;  
    int    samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter an integer value for k distribution (where 0 < k): ";  
    std::cin >> k_dist;  
    std::cout << "Enter a double value for p distribution (where 0.0 < p <= 1.0): ";  
    std::cin >> p_dist;  
    std::cout << "Enter an integer value for a sample count: ";  
    std::cin >> samples;  
  
    test(k_dist, p_dist, samples);  
}  
  
```  
  
## Output  
 Prima esecuzione:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for k distribution (where 0 < k): 1  
Enter a double value for p distribution (where 0.0 < p <= 1.0): .5  
Enter an integer value for a sample count: 100  
  
k == 1  
p == 0.5  
Histogram for 100 samples:  
    0 :::::::::::::::::::::::::::::::::::::::::::  
    1 ::::::::::::::::::::::::::::::::  
    2 ::::::::::::  
    3 :::::::  
    4 ::::  
    5 ::  
```  
  
 Seconda esecuzione:  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for k distribution (where 0 < k): 100  
Enter a double value for p distribution (where 0.0 < p <= 1.0): .667  
Enter an integer value for a sample count: 100  
  
k == 100  
p == 0.667  
Histogram for 100 samples:  
   31 ::  
   32 :  
   33 ::  
   34 :  
   35 ::  
   37 ::  
   38 :  
   39 :  
   40 ::  
   41 :::  
   42 :::  
   43 :::::  
   44 :::::  
   45 ::::  
   46 ::::::  
   47 ::::::::  
   48 :::  
   49 :::  
   50 :::::::::  
   51 :::::::  
   52 ::  
   53 :::  
   54 :::::  
   56 ::::  
   58 :  
   59 :::::  
   60 ::  
   61 :  
   62 ::  
   64 :  
   69 ::::  
```  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)