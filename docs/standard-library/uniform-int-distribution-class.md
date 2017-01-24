---
title: "Classe uniform_int_distribution | Microsoft Docs"
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
  - "tr1.uniform_int_distribution"
  - "random/std::tr1::uniform_int_distribution"
  - "uniform_int_distribution"
  - "tr1::uniform_int_distribution"
  - "std.tr1.uniform_int_distribution"
  - "std::tr1::uniform_int_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "uniform_int_distribution (classe)"
ms.assetid: a1867dcd-3bd9-4787-afe3-4b62692c1d04
caps.latest.revision: 20
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe uniform_int_distribution
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una distribuzione Integer uniforme \(ogni valore è ugualmente probabile\) all'interno di un intervallo di output è inclusivo\-inclusivo.  
  
## Sintassi  
  
```  
template<class IntType = int> class uniform_int_distribution { public:     // types     typedef IntType result_type;     struct param_type;     // constructors and reset functions     explicit uniform_int_distribution(IntType a = 0, IntType b = numeric_limits<IntType>::max());     explicit uniform_int_distribution(const param_type& parm);     void reset();     // generating functions     template<class URNG>     result_type operator()(URNG& gen);     template<class URNG>     result_type operator()(URNG& gen, const param_type& parm);     // property functions     result_type a() const;     result_type b() const;     param_type param() const;     void param(const param_type& parm);     result_type min() const;     result_type max() const; };  
```  
  
#### Parametri  
 `IntType`  
 Tipo di risultati Integer. Per impostazione predefinita, `int`.  Per informazioni sui tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 La classe modello descrive una distribuzione inclusiva\-inclusiva che produce valori di un tipo integrale definito dall'utente con una distribuzione in cui ogni valore è ugualmente probabile.  La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[uniform\_int\_distribution::uniform\_int\_distribution](../Topic/uniform_int_distribution::uniform_int_distribution.md)|`uniform_int_distribution::a`|`uniform_int_distribution::param`|  
|`uniform_int_distribution::operator()`|`uniform_int_distribution::b`|[uniform\_int\_distribution::param\_type](../Topic/uniform_int_distribution::param_type.md)|  
  
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
  
void test(const int a, const int b, const int s) {  
  
    // uncomment to use a non-deterministic seed  
    //    std::random_device rd;  
    //    std::mt19937 gen(rd());  
    std::mt19937 gen(1729);  
  
    std::uniform_int_distribution<> distr(a, b);  
  
    std::cout << "lower bound == " << distr.a() << std::endl;  
    std::cout << "upper bound == " << distr.b() << std::endl;  
  
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
    int a_dist = 1;  
    int b_dist = 10;  
  
    int samples = 100;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter an integer value for the lower bound of the distribution: ";  
    std::cin >> a_dist;  
    std::cout << "Enter an integer value for the upper bound of the distribution: ";  
    std::cin >> b_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(a_dist, b_dist, samples);  
}  
  
```  
  
## Output  
  **Use CTRL\-Z to bypass data entry and run using default values.  Enter an integer value for the lower bound of the distribution: 0**  
**Enter an integer value for the upper bound of the distribution: 12**  
**Enter an integer value for the sample count: 200**  
**lower bound \=\= 0**  
**upper bound \=\= 12**  
**Distribution for 200 samples:     0 :::::::::::::::     1 :::::::::::::::::::::     2 ::::::::::::::::::     3 :::::::::::::::     4 :::::::     5 :::::::::::::::::::::     6 :::::::::::::     7 ::::::::::     8 :::::::::::::::     9 :::::::::::::    10 ::::::::::::::::::::::    11 :::::::::::::    12 :::::::::::::::::**    
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)