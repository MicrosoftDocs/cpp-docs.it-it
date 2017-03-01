---
title: Classe negative_binomial_distribution | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- negative_binomial_distribution
- std::negative_binomial_distribution
- random/std::negative_binomial_distribution
- std::negative_binomial_distribution::reset
- random/std::negative_binomial_distribution::reset
- std::negative_binomial_distribution::k
- random/std::negative_binomial_distribution::k
- std::negative_binomial_distribution::p
- random/std::negative_binomial_distribution::p
- std::negative_binomial_distribution::param
- random/std::negative_binomial_distribution::param
- std::negative_binomial_distribution::min
- random/std::negative_binomial_distribution::min
- std::negative_binomial_distribution::max
- random/std::negative_binomial_distribution::max
- std::negative_binomial_distribution::operator()
- random/std::negative_binomial_distribution::operator()
- std::negative_binomial_distribution::param_type
- random/std::negative_binomial_distribution::param_type
- std::negative_binomial_distribution::param_type::k
- random/std::negative_binomial_distribution::param_type::k
- std::negative_binomial_distribution::param_type::p
- random/std::negative_binomial_distribution::param_type::p
- std::negative_binomial_distribution::param_type::operator==
- random/std::negative_binomial_distribution::param_type::operator==
- std::negative_binomial_distribution::param_type::operator!=
- random/std::negative_binomial_distribution::param_type::operator!=
dev_langs:
- C++
helpviewer_keywords:
- negative_binomial_distribution class
ms.assetid: 7f5f0967-7fdd-4578-99d4-88f292b4fe9c
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 28baed4badda4f2c1d7e5b20235fe8d40c2a7195
ms.openlocfilehash: 40a3c3faad6d6b6182bf9419f184314f4e5d966c
ms.lasthandoff: 02/24/2017

---
# <a name="negativebinomialdistribution-class"></a>Classe negative_binomial_distribution
Genera una distribuzione binomiale negativa.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class IntType = int>
class negative_binomial_distribution
{
public:
    // types 
    typedef IntType result_type;
    struct param_type;   
    
    // constructor and reset functions
    explicit negative_binomial_distribution(result_type k = 1, double p = 0.5);
    explicit negative_binomial_distribution(const param_type& parm);
    void reset();
    
    // generating functions 
    template `<`class URNG>  
    result_type operator()(URNG& gen);
    template `<`class URNG>
    result_type operator()(URNG& gen, const param_type& parm);
    
    // property functions     
    result_type k() const;
    double p() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const; 
};
  
### Parameters  
*IntType*  
The integer result type, defaults to `int`. For possible types, see [\<random>](../standard-library/random.md).  
  
## Remarks  
The template class describes a distribution that produces values of a user-specified integral type, or type `int` if none is provided, distributed according to the Negative Binomial Distribution discrete probability function. The following table links to articles about individual members.  
  
||||  
|-|-|-|  
|[negative_binomial_distribution::negative_binomial_distribution](#negative_binomial_distribution__negative_binomial_distribution)|`negative_binomial_distribution::k`|`negative_binomial_distribution::param`|  
|`negative_binomial_distribution::operator()`|`negative_binomial_distribution::p`|[negative_binomial_distribution::param_type](#negative_binomial_distribution__param_type)|  
  
The property members `k()` and `p()` return the currently stored distribution parameter values *k* and *p* respectively.  
  
The property member `param()` sets or returns the `param_type` stored distribution parameter package.  

The `min()` and `max()` member functions return the smallest possible result and largest possible result, respectively.  
  
The `reset()` member function discards any cached values, so that the result of the next call to `operator()` does not depend on any values obtained from the engine before the call.  
  
The `operator()` member functions return the next generated value based on the URNG engine, either from the current parameter package, or the specified parameter package.
  
For more information about distribution classes and their members, see [\<random>](../standard-library/random.md).  
  
For detailed information about the negative binomial distribution discrete probability function, see the Wolfram MathWorld article [Negative Binomial Distribution](http://go.microsoft.com/fwlink/LinkId=400516).  
  
## Example  
  
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
  
Prima esecuzione:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for k distribution (where 0 `<` k): 1  
Enter a double value for p distribution (where 0.0 `<`p `<`= 1.0): .5  
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
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.  
Enter an integer value for k distribution (where 0 `<` k): 100  
Enter a double value for p distribution (where 0.0 `<` p <= 1.0): .667  
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
  
## <a name="requirements"></a>Requisiti  
**Intestazione:** \<random>  
  
**Spazio dei nomi:** std  
  
##  <a name="a-namenegativebinomialdistributionnegativebinomialdistributiona--negativebinomialdistributionnegativebinomialdistribution"></a><a name="negative_binomial_distribution__negative_binomial_distribution"></a>  negative_binomial_distribution::negative_binomial_distribution  
Costruisce la distribuzione.  
  
```  
explicit negative_binomial_distribution(result_type k = 1, double p = 0.5);
explicit negative_binomial_distribution(const param_type& parm);
```  
  
### <a name="parameters"></a>Parametri  
*k*  
Parametro di distribuzione `k`.  
  
*p*  
Parametro di distribuzione `p`.  
  
*parm*  
Struttura di parametri usata per costruire la distribuzione.  
  
### <a name="remarks"></a>Note  
**Precondizione:** `0.0 < k` e `0.0 < p ≤ 1.0`  
  
Il primo costruttore crea un oggetto il cui valore `p` archiviato include il valore *p* e il cui valore `k` archiviato include il valore *k*.  
  
Il secondo costruttore crea un oggetto i cui parametri archiviati sono inizializzati da *parm*. È possibile ottenere e impostare i parametri correnti di una distribuzione esistente chiamando la funzione membro `param()`.  
  
##  <a name="a-namenegativebinomialdistributionparamtypea--negativebinomialdistributionparamtype"></a><a name="negative_binomial_distribution__param_type"></a>  negative_binomial_distribution::param_type  
Archivia i parametri della distribuzione.  
  
struct param_type {  
   typedef negative_binomial_distribution`<`result_type> distribution_type;  
   param_type(result_type k = 1, double p = 0.5); result_type k() const; double p() const;

   bool operator==(const param_type& right) const; bool operator!=(const param_type& right) const; };  
  
### <a name="parameters"></a>Parametri  
*k*  
Parametro di distribuzione `k`.  
  
*p*  
Parametro di distribuzione `p`.  
  
*right*  
Struttura `param_type` usata per il confronto.  
  
### <a name="remarks"></a>Note  
**Precondizione:** `0.0 < k` e `0.0 < p ≤ 1.0`  
  
Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)

