---
title: "Classe bernoulli_distribution | Microsoft Docs"
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
  - "tr1.bernoulli_distribution"
  - "random/std::tr1::bernoulli_distribution"
  - "std.tr1.bernoulli_distribution"
  - "bernoulli_distribution"
  - "tr1::bernoulli_distribution"
  - "std::tr1::bernoulli_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bernoulli_distribution (classe)"
  - "bernoulli_distribution (classe) [TR1]"
ms.assetid: 586bcde1-95ca-411a-bf17-4aaf19482f34
caps.latest.revision: 22
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe bernoulli_distribution
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una distribuzione Bernoulli.  
  
## Sintassi  
  
```  
class bernoulli_distribution { public:     // types     typedef bool result_type;     struct param_type;     // constructors and reset functions     explicit bernoulli_distribution(double p = 0.5);     explicit bernoulli_distribution(const param_type& parm);     void reset();     // generating functions     template<class URNG>     result_type operator()(URNG& gen);     template<class URNG>     result_type operator()(URNG& gen, const param_type& parm);     // property functions     double p() const;     param_type param() const;     void param(const param_type& parm);     result_type min() const;     result_type max() const; };  
```  
  
## Note  
 La classe descrive una distribuzione che produce valori di tipo `bool`, distribuiti in base alla funzione di probabilità discreta di Bernoulli.  La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[bernoulli\_distribution::bernoulli\_distribution](../Topic/bernoulli_distribution::bernoulli_distribution.md)|`bernoulli_distribution::p`|`bernoulli_distribution::param`|  
|`bernoulli_distribution::operator()`||[bernoulli\_distribution::param\_type](../Topic/bernoulli_distribution::param_type.md)|  
  
 Il membro di proprietà `p()` restituisce il valore per il parametro di distribuzione attualmente archiviato `p`.  
  
 Per altre informazioni sulle classi di distribuzione e i rispettivi membri, vedere [\<random\>](../standard-library/random.md).  
  
 Per informazioni dettagliate sulla funzione di probabilità discreta di Bernoulli, vedere l'articolo di Wolfram MathWorld relativo alla [Distribuzione di Bernoulli](http://go.microsoft.com/fwlink/?LinkId=398467).  
  
## Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double p, const int s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1729);  
  
    std::bernoulli_distribution distr(p);  
  
    std::cout << "p == " << distr.p() << std::endl;  
  
    // generate the distribution as a histogram  
    std::map<bool, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    std::cout << "Histogram for " << s << " samples:" << std::endl;  
    for (const auto& elem : histogram) {  
        std::cout << std::boolalpha << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    double p_dist = 0.5;  
    int samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a double value for p distribution (where 0.0 <= p <= 1.0): ";  
    std::cin >> p_dist;  
    std::cout << "Enter an integer value for a sample count: ";  
    std::cin >> samples;  
  
    test(p_dist, samples);  
}  
  
```  
  
## Output  
  
```  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .45  
Enter an integer value for a sample count: 100  
p == 0.45  
Histogram for 100 samples:  
false :::::::::::::::::::::::::::::::::::::::::::::::::::::  
 true :::::::::::::::::::::::::::::::::::::::::::::::  
```  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)