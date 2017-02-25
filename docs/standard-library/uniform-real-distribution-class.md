---
title: "Classe uniform_real_distribution | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::uniform_real_distribution"
  - "std::tr1::uniform_real_distribution"
  - "random/std::tr1::uniform_real_distribution"
  - "uniform_real_distribution"
  - "std.tr1.uniform_real_distribution"
  - "tr1.uniform_real_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "uniform_real_distribution (classe)"
ms.assetid: 5cf906fd-0319-4984-b21b-98425cd7532d
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe uniform_real_distribution
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una distribuzione a virgola mobile uniforme \(ogni valore è ugualmente probabile\) all'interno di un intervallo di output che è inclusivo\-inclusivo.  
  
## Sintassi  
  
```  
template<class RealType = double> class uniform_real_distribution { public:     // types     typedef RealType result_type;     struct param_type;     // constructors and reset functions     explicit uniform_real_distribution(RealType a = 0.0, RealType b = 1.0);     explicit uniform_real_distribution(const param_type& parm);     void reset();     // generating functions     template<class URNG>     result_type operator()(URNG& gen);     template<class URNG>     result_type operator()(URNG& gen, const param_type& parm);     // property functions     result_type a() const;     result_type b() const;     param_type param() const;     void param(const param_type& parm);     result_type min() const;     result_type max() const; };  
```  
  
#### Parametri  
 `RealType`  
 Tipo di risultato a virgola mobile. Per impostazione predefinita, `double`.  Per informazioni sui tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 La classe modello descrive una distribuzione inclusiva\-esclusiva che produce valori di un tipo a virgola mobile definito dall'utente con una distribuzione in cui ogni valore è ugualmente probabile.  La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[uniform\_real\_distribution::uniform\_real\_distribution](../Topic/uniform_real_distribution::uniform_real_distribution.md)|`uniform_real_distribution::a`|`uniform_real_distribution::param`|  
|`uniform_real_distribution::operator()`|`uniform_real_distribution::b`|[uniform\_real\_distribution::param\_type](../Topic/uniform_real_distribution::param_type.md)|  
  
 Il membro della proprietà `a()` restituisce il limite minimo della distribuzione attualmente archiviato, mentre `b()` restituisce il limite massimo attualmente archiviato.  Per questa classe di distribuzione, i valori minimo e massimo sono gli stessi restituiti dalle funzioni di proprietà comuni `min()` e `max()` descritte nell'argomento [\<random\>](../standard-library/random.md).  
  
 Per altre informazioni sulle classi di distribuzione e i rispettivi membri, vedere [\<random\>](../standard-library/random.md).  
  
## Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double a, const double b, const int s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1729);  
  
    std::uniform_real_distribution<> distr(a,b);  
  
    std::cout << "lower bound == " << distr.a() << std::endl;  
    std::cout << "upper bound == " << distr.b() << std::endl;  
  
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
            << std::setprecision(10) << elem.first << std::endl;  
    }  
    std::cout << std::endl;  
}  
  
int main()  
{  
    double a_dist = 1.0;  
    double b_dist = 1.5;  
  
    int samples = 10;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the lower bound of the distribution: ";  
    std::cin >> a_dist;  
    std::cout << "Enter a floating point value for the upper bound of the distribution: ";  
    std::cin >> b_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(a_dist, b_dist, samples);  
}  
  
```  
  
## Output  
  **Use CTRL\-Z to bypass data entry and run using default values.  Enter a floating point value for the lower bound of the distribution: .5**  
**Enter a floating point value for the upper bound of the distribution: 1**  
**Enter an integer value for the sample count: 20**  
**lower bound \=\= 0.5**  
**upper bound \=\= 1**  
**Distribution for 20 samples:           1: 0.5144304741           2: 0.6003997192           3: 0.6060792968           4: 0.6270416650           5: 0.6295091197           6: 0.6437749373           7: 0.6513740058           8: 0.7062379346           9: 0.7117609406          10: 0.7206888566          11: 0.7423223702          12: 0.7826033033          13: 0.8112872958          14: 0.8440467608          15: 0.8461254641          16: 0.8598305065          17: 0.8640874069          18: 0.8770968361          19: 0.9397858282          20: 0.9804645012**    
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)