---
title: Classe cauchy_distribution | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- cauchy_distribution
- std::cauchy_distribution
- random/std::cauchy_distribution
- std::cauchy_distribution::reset
- random/std::cauchy_distribution::reset
- std::cauchy_distribution::a
- random/std::cauchy_distribution::a
- std::cauchy_distribution::b
- random/std::cauchy_distribution::b
- std::cauchy_distribution::param
- random/std::cauchy_distribution::param
- std::cauchy_distribution::min
- random/std::cauchy_distribution::min
- std::cauchy_distribution::max
- random/std::cauchy_distribution::max
- std::cauchy_distribution::operator()
- random/std::cauchy_distribution::operator()
- std::cauchy_distribution::param_type
- random/std::cauchy_distribution::param_type
- std::cauchy_distribution::param_type::a
- random/std::cauchy_distribution::param_type::a
- std::cauchy_distribution::param_type::b
- random/std::cauchy_distribution::param_type::b
- std::cauchy_distribution::param_type::operator==
- random/std::cauchy_distribution::param_type::operator==
- std::cauchy_distribution::param_type::operator!=
- random/std::cauchy_distribution::param_type::operator!=
dev_langs:
- C++
helpviewer_keywords:
- cauchy_distribution class
ms.assetid: 21522351-f2f1-46d9-97f0-d358c932356c
caps.latest.revision: 25
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
ms.sourcegitcommit: 02dd887f1b20b42145ccc83165570b9f682e693c
ms.openlocfilehash: 6cbe218a9bcac3b35952e6993cc496689e0290aa
ms.lasthandoff: 02/24/2017

---
# <a name="cauchydistribution-class"></a>Classe cauchy_distribution
Genera una distribuzione di Cauchy.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class RealType = double>  
class cauchy_distribution {  
public:  
   // types 
   typedef RealType result_type;  
   struct param_type;  
   
   // constructor and reset functions  
   explicit cauchy_distribution(result_type a = 0.0, result_type b = 1.0);
   explicit cauchy_distribution(const param_type& parm);
   void reset();
   
   // generating functions 
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);
   
   // property functions 
   result_type a() const;
   result_type b() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };  
```  
  
### <a name="parameters"></a>Parametri  
*RealType*  
Tipo di risultato a virgola mobile. Per impostazione predefinita, `double`. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).  
  
*URNG* Motore di generazione di numeri casuali uniformi. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).  

## <a name="remarks"></a>Note  
La classe modello descrive una distribuzione che produce valori di un tipo a virgola mobile specificato dall'utente, o di tipo `double` se non ne viene specificato alcuno, distribuiti in base alla distribuzione di Cauchy. La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[cauchy_distribution::cauchy_distribution](#cauchy_distribution__cauchy_distribution)|`cauchy_distribution::a`|`cauchy_distribution::param`|  
|`cauchy_distribution::operator()`|`cauchy_distribution::b`|[cauchy_distribution::param_type](#cauchy_distribution__param_type)|  
  
Le funzioni di proprietà `a()` e `b()` restituiscono i valori rispettivi per i parametri di distribuzione archiviati `a` e `b`.  
  
Il membro di proprietà `param()` imposta o restituisce il pacchetto di parametri di distribuzione archiviato `param_type`.  

Le funzioni membro `min()` e `max()` restituiscono rispettivamente il minor risultato possibile e il maggior risultato possibile.  
  
La funzione membro `reset()` rimuove gli eventuali valori memorizzati nella cache, in modo che il risultato della successiva chiamata a `operator()` non dipenda da alcun valore ottenuto dal motore prima della chiamata.  
  
Le funzioni membro `operator()` restituiscono il successivo valore generato basato sul motore URNG, dal pacchetto di parametri corrente o da quello specificato.
  
Per altre informazioni sulle classi di distribuzione e sui rispettivi membri, vedere [\<random>](../standard-library/random.md).  
  
Per informazioni dettagliate, vedere l'articolo di Wolfram MathWorld relativo alla [distribuzione di Cauchy](http://go.microsoft.com/fwlink/LinkId=400523).  
  
## <a name="example"></a>Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <random>   
#include <iostream>  
#include <iomanip>  
#include <string>  
#include <map>  
  
void test(const double a, const double b, const int s) {  
  
    // uncomment to use a non-deterministic generator  
    //    std::random_device gen;  
  
    std::mt19937 gen(1701);  
  
    std::cauchy_distribution<> distr(a, b);  
  
    std::cout << std::endl;  
    std::cout << "min() == " << distr.min() << std::endl;  
    std::cout << "max() == " << distr.max() << std::endl;  
    std::cout << "a() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.a() << std::endl;  
    std::cout << "b() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.b() << std::endl;  
  
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
    double a_dist = 0.0;  
    double b_dist = 1;  
  
    int samples = 10;  
  
    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;  
    std::cout << "Enter a floating point value for the 'a' distribution parameter: ";  
    std::cin >> a_dist;  
    std::cout << "Enter a floating point value for the 'b' distribution parameter (must be greater than zero): ";  
    std::cin >> b_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(a_dist, b_dist, samples);  
}  
```  
  
Prima esecuzione:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'a' distribution parameter: 0  
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 1  
Enter an integer value for the sample count: 10  
 
min() == -1.79769e+308  
max() == 1.79769e+308  
a() == 0.0000000000  
b() == 1.0000000000  
Distribution for 10 samples:  
    1: -3.4650392984  
    2: -2.6369564174  
    3: -0.0786978867  
    4: -0.0609632093  
    5: 0.0589387400  
    6: 0.0589539764  
    7: 0.1004592006  
    8: 1.0965724260  
    9: 1.4389408122  
    10: 2.5253154706  
```  
  
Seconda esecuzione:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'a' distribution parameter: 0  
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 10  
Enter an integer value for the sample count: 10  
 
min() == -1.79769e+308  
max() == 1.79769e+308  
a() == 0.0000000000  
b() == 10.0000000000  
Distribution for 10 samples:  
    1: -34.6503929840  
    2: -26.3695641736  
    3: -0.7869788674  
    4: -0.6096320926  
    5: 0.5893873999  
    6: 0.5895397637  
    7: 1.0045920062  
    8: 10.9657242597  
    9: 14.3894081218  
    10: 25.2531547063  
```  
  
Terza esecuzione:  
  
```Output  
Use CTRL-Z to bypass data entry and run using default values.  
Enter a floating point value for the 'a' distribution parameter: 10  
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 10  
Enter an integer value for the sample count: 10  
 
min() == -1.79769e+308  
max() == 1.79769e+308  
a() == 10.0000000000  
b() == 10.0000000000  
Distribution for 10 samples:  
    1: -24.6503929840  
    2: -16.3695641736  
    3: 9.2130211326  
    4: 9.3903679074  
    5: 10.5893873999  
    6: 10.5895397637  
    7: 11.0045920062  
    8: 20.9657242597  
    9: 24.3894081218  
    10: 35.2531547063  
```  
  
## <a name="requirements"></a>Requisiti  
**Intestazione:** \<random>  
  
**Spazio dei nomi:** std  
  
##  <a name="a-namecauchydistributioncauchydistributiona--cauchydistributioncauchydistribution"></a><a name="cauchy_distribution__cauchy_distribution"></a>  cauchy_distribution::cauchy_distribution  
Costruisce la distribuzione.  
  
```  
explicit cauchy_distribution(result_type a = 0.0, result_type b = 1.0);
explicit cauchy_distribution(const param_type& parm);
```  
  
### <a name="parameters"></a>Parametri  
*a*  
Parametro di distribuzione `a`.  
  
*b*  
Parametro di distribuzione `b`.  
  
*parm*  
Struttura `param_type` usata per costruire la distribuzione.  
  
### <a name="remarks"></a>Note  
**Precondizione:** `0.0 < b`  
  
Il primo costruttore crea un oggetto il cui valore `a` archiviato include il valore *a* e il cui valore `b` archiviato include il valore *b*.  
  
Il secondo costruttore crea un oggetto i cui parametri archiviati sono inizializzati da *parm*. È possibile ottenere e impostare i parametri correnti di una distribuzione esistente chiamando la funzione membro `param()`.  
  
##  <a name="a-namecauchydistributionparamtypea--cauchydistributionparamtype"></a><a name="cauchy_distribution__param_type"></a>  cauchy_distribution::param_type  
Archivia tutti i parametri della distribuzione.  
  
```cpp    
struct param_type {  
   typedef cauchy_distribution<result_type> distribution_type;  
   param_type(result_type a = 0.0, result_type b = 1.0);
   result_type a() const;
   result_type b() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```  
  
### <a name="parameters"></a>Parametri  
*a*  
Parametro di distribuzione `a`.  
  
*b*  
Parametro di distribuzione `b`.  
  
*right*  
Oggetto `param_type` da confrontare con questo oggetto.  
  
### <a name="remarks"></a>Note  
**Precondizione:** `0.0 < b`  
  
Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.  
  
## <a name="see-also"></a>Vedere anche  
[\<random>](../standard-library/random.md)




