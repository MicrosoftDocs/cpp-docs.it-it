---
title: "Classe fisher_f_distribution | Microsoft Docs"
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
  - "std.tr1.fisher_f_distribution"
  - "tr1.fisher_f_distribution"
  - "std::tr1::fisher_f_distribution"
  - "fisher_f_distribution"
  - "random/std::tr1::fisher_f_distribution"
  - "tr1::fisher_f_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fisher_f_distribution (classe)"
ms.assetid: 9513b6ce-3309-4be1-829b-f504bca35bbf
caps.latest.revision: 17
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe fisher_f_distribution
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una distribuzione F di Fisher.  
  
## Sintassi  
  
```  
template<class RealType = double>  
class fisher_f_distribution  
{  
public:  
    // types  
    typedef RealType result_type;  
    struct param_type;  
    // constructor and reset functions  
    explicit fisher_f_distribution(RealType m = 1.0, RealType n = 1.0);  
    explicit fisher_f_distribution(const param_type& parm);  
    void reset();  
    // generating functions  
    template<class URNG>  
    result_type operator()(URNG& gen);  
    template<class URNG>  
    result_type operator()(URNG& gen, const param_type& parm);  
    // property functions  
    RealType m() const;  
    RealType n() const;  
    param_type param() const;  
    void param(const param_type& parm);  
    result_type min() const;  
    result_type max() const;  
};  
```  
  
#### Parametri  
 `RealType`  
 Tipo di risultato a virgola mobile. Per impostazione predefinita, `double`. Per i tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 La classe di modelli descrive una distribuzione che produce valori di un tipo integrale specificato dall'utente o di tipo `double` se non è specificato alcun valore, distribuiti in base alla distribuzione F di Fisher. La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[fisher\_f\_distribution::fisher\_f\_distribution](../Topic/fisher_f_distribution::fisher_f_distribution.md)|`fisher_f_distribution::m`|`fisher_f_distribution::param`|  
|`fisher_f_distribution::operator()`|`fisher_f_distribution::n`|[fisher\_f\_distribution::param\_type](../Topic/fisher_f_distribution::param_type.md)|  
  
 Le funzioni di proprietà `m()` e `n()` restituiscono i valori rispettivi per i parametri di distribuzione archiviati `m` e `n`, rispettivamente.  
  
 Per ulteriori informazioni sulle classi di distribuzione e i relativi membri, vedere [\<random\>](../standard-library/random.md).  
  
 Per informazioni dettagliate sulla distribuzione F, vedere l'articolo di Wolfram MathWorld relativo [distribuzione F](http://go.microsoft.com/fwlink/?LinkId=400899).  
  
## Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double m, const double n, const int s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1701);  
  
    std::fisher_f_distribution<> distr(m, n);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "m() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.m() << std::endl;  
    std::cout << "n() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.n() << std::endl;  
  
    // generate the distribution as a histogram  
    std::map<double, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    std::cout << "Distribution for " << s << " samples:" << std::endl;  
    int counter = 0;  
    for (const auto& elem : histogram) {  
        std::cout << std::fixed << std::setw(11) << ++counter << ": "  
            << std::setw(14) << std::setprecision(10) << elem.first << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    double m_dist = 1;  
    double n_dist = 1;  
    int samples = 10;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the \'m\' distribution parameter (must be greater than zero): ";  
    std::cin >> m_dist;  
    std::cout << "Enter a floating point value for the \'n\' distribution parameter (must be greater than zero): ";  
    std::cin >> n_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(m_dist, n_dist, samples);  
}  
  
```  
  
## Output  
 Prima esecuzione:  
  
```  
Enter a floating point value for the 'm' distribution parameter (must be greater than zero): 1  
Enter a floating point value for the 'n' distribution parameter (must be greater than zero): 1  
Enter an integer value for the sample count: 10  
  
min() == 0  
max() == 1.79769e+308  
m() == 1.0000000000  
n() == 1.0000000000  
Distribution for 10 samples:  
          1:   0.0204569549  
          2:   0.0221376644  
          3:   0.0297234962  
          4:   0.1600937252  
          5:   0.2775342196  
          6:   0.3950701700  
          7:   0.8363200295  
          8:   0.9512500702  
          9:   2.7844815974  
         10:   3.4320929653  
```  
  
 Seconda esecuzione:  
  
```  
Enter a floating point value for the 'm' distribution parameter (must be greater than zero): 1  
Enter a floating point value for the 'n' distribution parameter (must be greater than zero): .1  
Enter an integer value for the sample count: 10  
  
min() == 0  
max() == 1.79769e+308  
m() == 1.0000000000  
n() == 0.1000000000  
Distribution for 10 samples:  
          1:   0.0977725649  
          2:   0.5304122767  
          3:   4.9468518084  
          4:  25.1012074939  
          5:  48.8082121613  
          6: 401.8075539377  
          7: 8199.5947873699  
          8: 226492.6855335717  
          9: 2782062.6639740225  
         10: 20829747131.7185860000  
```  
  
 Terza esecuzione:  
  
```  
Enter a floating point value for the 'm' distribution parameter (must be greater than zero): .1  
Enter a floating point value for the 'n' distribution parameter (must be greater than zero): 1  
Enter an integer value for the sample count: 10  
  
min() == 0  
max() == 1.79769e+308  
m() == 0.1000000000  
n() == 1.0000000000  
Distribution for 10 samples:  
          1:   0.0000000000  
          2:   0.0000000000  
          3:   0.0000000000  
          4:   0.0000000000  
          5:   0.0000000033  
          6:   0.0000073975  
          7:   0.0000703800  
          8:   0.0280427735  
          9:   0.2660239949  
         10:   3.4363333954  
```  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)