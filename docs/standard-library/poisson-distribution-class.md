---
title: "Classe poisson_distribution | Microsoft Docs"
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
  - "poisson_distribution"
  - "std.tr1.poisson_distribution"
  - "random/std::tr1::poisson_distribution"
  - "std::tr1::poisson_distribution"
  - "tr1.poisson_distribution"
  - "tr1::poisson_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "poisson_distribution (classe)"
  - "poisson_distribution (classe) [TR1]"
ms.assetid: 09614281-349a-45f7-8e95-c0196be0a937
caps.latest.revision: 19
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe poisson_distribution
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una distribuzione di Poisson.  
  
## Sintassi  
  
```  
template<class IntType = int> class poisson_distribution { public:     // types     typedef IntType result_type;     struct param_type;     // constructors and reset functions     explicit poisson_distribution(double mean = 1.0);     explicit poisson_distribution(const param_type& parm);     void reset();     // generating functions     template<class URNG>     result_type operator()(URNG& gen);     template<class URNG>     result_type operator()(URNG& gen, const param_type& parm);     // property functions     double mean() const;     param_type param() const;     void param(const param_type& parm);     result_type min() const;     result_type max() const; };  
```  
  
#### Parametri  
 `IntType`  
 Tipo di risultati Integer. Per impostazione predefinita, `int`.  Per informazioni sui tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 La classe di modelli descrive una distribuzione che produce valori di un tipo integrale specificato dall'utente con una distribuzione di Poisson.  La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[poisson\_distribution::poisson\_distribution](../Topic/poisson_distribution::poisson_distribution.md)|`poisson_distribution::mean`|`poisson_distribution::param`|  
|`poisson_distribution::operator()`||[poisson\_distribution::param\_type](../Topic/poisson_distribution::param_type.md)|  
  
 La funzione di proprietà `mean()` restituisce il valore per il parametro di distribuzione archiviato `mean`.  
  
 Per altre informazioni sulle classi di distribuzione e i rispettivi membri, vedere [\<random\>](../standard-library/random.md).  
  
 Per informazioni dettagliate sulla distribuzione di Poisson, vedere l'articolo di Wolfram MathWorld relativo alla [Distribuzione di Poisson](http://go.microsoft.com/fwlink/?LinkId=401112).  
  
## Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double p, const int s) {  
  
    // uncomment to use a non-deterministic generator  
    //    std::random_device gen;  
    std::mt19937 gen(1701);  
  
    std::poisson_distribution<> distr(p);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "p() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.mean() << std::endl;  
  
    // generate the distribution as a histogram  
    std::map<int, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    std::cout << "Distribution for " << s << " samples:" << std::endl;  
    for (const auto& elem : histogram) {  
        std::cout << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    double p_dist = 1.0;  
  
    int samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the 'mean' distribution parameter (must be greater than zero): ";  
    std::cin >> p_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(p_dist, samples);  
}  
  
```  
  
## Output  
 Primo test:  
  
  **Use CTRL\-Z to bypass data entry and run using default values.  Immettere un valore a virgola mobile per il parametro di distribuzione 'mean' \(deve essere maggiore di zero\): 1**  
**Enter an integer value for the sample count: 100**  
**min\(\) \=\= 0**  
**max\(\) \=\= 2147483647**  
**p\(\) \=\= 1.0000000000**  
**Distribution for 100 samples:     0 ::::::::::::::::::::::::::::::     1 ::::::::::::::::::::::::::::::::::::::     2 :::::::::::::::::::::::     3 ::::::::     5 :**  Secondo test:  
  
  **Use CTRL\-Z to bypass data entry and run using default values.  Immettere un valore a virgola mobile per il parametro di distribuzione 'mean' \(deve essere maggiore di zero\): 10**  
**Enter an integer value for the sample count: 100**  
**min\(\) \=\= 0**  
**max\(\) \=\= 2147483647**  
**p\(\) \=\= 10.0000000000**  
**Distribution for 100 samples:     3 :     4 ::     5 ::     6 ::::::::     7 ::::     8 ::::::::     9 ::::::::::::::    10 ::::::::::::    11 ::::::::::::::::    12 :::::::::::::::    13 ::::::::    14 ::::::    15 :    16 ::    17 :**    
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)