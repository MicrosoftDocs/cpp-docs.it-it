---
title: "Classe piecewise_constant_distribution | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.piecewise_constant_distribution"
  - "tr1.piecewise_constant_distribution"
  - "tr1::piecewise_constant_distribution"
  - "std::tr1::piecewise_constant_distribution"
  - "random/std::tr1::piecewise_constant_distribution"
  - "piecewise_constant_distribution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "piecewise_constant_distribution (classe)"
ms.assetid: 2c9a21fa-623e-4d63-b827-3f1556b6dedb
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe piecewise_constant_distribution
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una distribuzione costante a tratti con intervalli di larghezza diversa e probabilità uniforme in ogni intervallo.  
  
## Sintassi  
  
```  
template<class RealType = double> class piecewise_constant_distribution { public:     // types     typedef RealType result_type;     struct param_type;     // constructor and reset functions     piecewise_constant_distribution();     template<class InputIteratorI, class InputIteratorW>     piecewise_constant_distribution(InputIteratorI firstI, InputIteratorI lastI, InputIteratorW firstW);     template<class UnaryOperation>     piecewise_constant_distribution(initializer_list<RealType> intervals, UnaryOperation weightfunc);     template<class UnaryOperation>     piecewise_constant_distribution(size_t count, RealType xmin, RealType xmax, UnaryOperation weightfunc);     explicit piecewise_constant_distribution(const param_type& parm);     void reset();     // generating functions     template<class URNG>     result_type operator()(URNG& gen);     template<class URNG>     result_type operator()(URNG& gen, const param_type& parm);     // property functions     vector<result_type> intervals() const;     vector<result_type> densities() const;     param_type param() const;     void param(const param_type& parm);     result_type min() const;     result_type max() const; };  
```  
  
#### Parametri  
 `RealType`  
 Tipo di risultato a virgola mobile. Per impostazione predefinita, `double`.  Per informazioni sui tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 Questa distribuzione di campionamento ha intervalli di larghezza diversa e probabilità uniforme in ogni intervallo.  Per informazioni su altre distribuzioni di campionamento, vedere [Classe piecewise\_linear\_distribution](../standard-library/piecewise-linear-distribution-class.md) e [discrete\_distribution](../standard-library/discrete-distribution-class.md).  
  
 La tabella seguente include collegamenti ad articoli relativi ai singoli membri:  
  
||||  
|-|-|-|  
|[piecewise\_constant\_distribution::piecewise\_constant\_distribution](../Topic/piecewise_constant_distribution::piecewise_constant_distribution.md)|`piecewise_constant_distribution::intervals`|`piecewise_constant_distribution::param`|  
|`piecewise_constant_distribution::operator()`|`piecewise_constant_distribution::densities`|[piecewise\_constant\_distribution::param\_type](../Topic/piecewise_constant_distribution::param_type.md)|  
  
 La funzione di proprietà `intervals()` restituisce una `vector<RealType>` con l'insieme di intervalli archiviati della distribuzione.  
  
 La funzione di proprietà `densities()` restituisce un `vector<RealType>` con le densità archiviate per ogni insieme di intervalli, calcolate in base ai pesi specificati nei parametri del costruttore.  
  
 Per altre informazioni sulle classi di distribuzione e i rispettivi membri, vedere [\<random\>](../standard-library/random.md).  
  
## Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
using namespace std;  
  
void test(const int s) {  
  
    // uncomment to use a non-deterministic generator  
    // random_device rd;  
    // mt19937 gen(rd());  
    mt19937 gen(1701);  
  
    // Three intervals, non-uniform: 0 to 1, 1 to 6, and 6 to 15  
    vector<double> intervals{ 0, 1, 6, 15 };  
    // weights determine the densities used by the distribution  
    vector<double> weights{ 1, 5, 10 };  
  
    piecewise_constant_distribution<double> distr(intervals.begin(), intervals.end(), weights.begin());  
  
    cout << endl;  
    cout << "min() == " << distr.min() << endl;  
    cout << "max() == " << distr.max() << endl;  
    cout << "intervals (index: interval):" << endl;  
    vector<double> i = distr.intervals();  
    int counter = 0;  
    for (const auto& n : i) {  
        cout << fixed << setw(11) << counter << ": " << setw(14) << setprecision(10) << n << endl;  
        ++counter;  
    }  
    cout << endl;  
    cout << "densities (index: density):" << endl;  
    vector<double> d = distr.densities();  
    counter = 0;  
    for (const auto& n : d) {  
        cout << fixed << setw(11) << counter << ": " << setw(14) << setprecision(10) << n << endl;  
        ++counter;  
    }  
    cout << endl;  
  
    // generate the distribution as a histogram  
    map<int, int> histogram;  
    for (int i = 0; i < s; ++i) {  
        ++histogram[distr(gen)];  
    }  
  
    // print results  
    cout << "Distribution for " << s << " samples:" << endl;  
    for (const auto& elem : histogram) {  
        cout << setw(5) << elem.first << '-' << elem.first+1 << ' ' << string(elem.second, ':') << endl;  
    }  
    cout << endl;  
}  
  
int main()  
{  
    int samples = 100;  
  
    cout << "Use CTRL-Z to bypass data entry and run using default values." << endl;  
    cout << "Enter an integer value for the sample count: ";  
    cin >> samples;  
  
    test(samples);  
}  
  
```  
  
## Output  
  **Use CTRL\-Z to bypass data entry and run using default values.  Enter an integer value for the sample count: 100**  
**min\(\) \=\= 0**  
**max\(\) \=\= 15**  
**intervals \(index: interval\):           0:   0.0000000000           1:   1.0000000000           2:   6.0000000000           3:  15.0000000000  densities \(index: density\):           0:   0.0625000000           1:   0.0625000000           2:   0.0694444444  Distribution for 100 samples:     0\-1 :::::::     1\-2 ::::::     2\-3 :::::     3\-4 ::::::     4\-5 :::::::     5\-6 ::::::     6\-7 :::     7\-8 ::::::::::     8\-9 ::::::     9\-10 ::::::::::::    10\-11 :::::    11\-12 ::::::    12\-13 :::::::::    13\-14 ::::    14\-15 ::::::::**    
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)   
 [piecewise\_linear\_distribution](../standard-library/piecewise-linear-distribution-class.md)