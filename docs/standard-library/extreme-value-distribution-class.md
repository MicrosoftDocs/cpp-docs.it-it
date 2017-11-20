---
title: Classe extreme_value_distribution | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- random/std::extreme_value_distribution
- random/std::extreme_value_distribution::reset
- random/std::extreme_value_distribution::a
- random/std::extreme_value_distribution::b
- random/std::extreme_value_distribution::param
- random/std::extreme_value_distribution::min
- random/std::extreme_value_distribution::max
- random/std::extreme_value_distribution::operator()
- random/std::extreme_value_distribution::param_type
- random/std::extreme_value_distribution::param_type::a
- random/std::extreme_value_distribution::param_type::b
- random/std::extreme_value_distribution::param_type::operator==
- random/std::extreme_value_distribution::param_type::operator!=
dev_langs: C++
helpviewer_keywords:
- std::extreme_value_distribution [C++]
- std::extreme_value_distribution [C++], reset
- std::extreme_value_distribution [C++], a
- std::extreme_value_distribution [C++], b
- std::extreme_value_distribution [C++], param
- std::extreme_value_distribution [C++], min
- std::extreme_value_distribution [C++], max
- std::extreme_value_distribution [C++], param_type
- std::extreme_value_distribution [C++], param_type
ms.assetid: a0cd8370-0a54-4e26-9388-8b9678fb57da
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d53e49ae0a28201ac32cd1eb722c9889258f23b9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="extremevaluedistribution-class"></a>Classe extreme_value_distribution
Genera una distribuzione dei valori estremi.  
  
## <a name="syntax"></a>Sintassi  
```  
template<class RealType = double>
class extreme_value_distribution  
   {  
public:  
   // types  
   typedef RealType result_type;  
   struct param_type;  
   
   // constructor and reset functions  
   explicit extreme_value_distribution(result_type a = 0.0, result_type b = 1.0);
   explicit extreme_value_distribution(const param_type& parm);
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
  
*URNG* Motore di generazione di numeri casuali. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).
  
## <a name="remarks"></a>Note  
 La classe modello descrive una distribuzione che produce valori di un tipo a virgola mobile specificato dall'utente, o di tipo `double` se non ne viene specificato alcuno, distribuiti in base alla distribuzione dei valori estremi. La tabella seguente include collegamenti ad articoli relativi ai singoli membri.  
  
||||  
|-|-|-|  
|[extreme_value_distribution](#extreme_value_distribution)|`extreme_value_distribution::a`|`extreme_value_distribution::param`|  
|`extreme_value_distribution::operator()`|`extreme_value_distribution::b`|[param_type](#param_type)|  
  
 Le funzioni di proprietà `a()` e `b()` restituiscono i valori rispettivi per i parametri di distribuzione archiviati `a` e `b`.  
  
 Per altre informazioni sulle classi di distribuzione e sui rispettivi membri, vedere [\<random>](../standard-library/random.md).  
  
 Per informazioni dettagliate sulla distribuzione dei valori estremi, vedere l'articolo di Wolfram MathWorld [Extreme Value Distribution](http://go.microsoft.com/fwlink/LinkId=401110) (Distribuzione dei valori estremi).  
  
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
  
    std::extreme_value_distribution<> distr(a, b);  
  
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
    std::cout << "Enter a floating point value for the \'a\' distribution parameter: ";  
    std::cin >> a_dist;  
    std::cout << "Enter a floating point value for the \'b\' distribution parameter (must be greater than zero): ";  
    std::cin >> b_dist;  
    std::cout << "Enter an integer value for the sample count: ";  
    std::cin >> samples;  
  
    test(a_dist, b_dist, samples);  
}  
```  
  
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
    1: -0.8813940331  
    2: -0.7698972281  
    3: 0.2951258007  
    4: 0.3110450734  
    5: 0.4210546820  
    6: 0.4210688771  
    7: 0.4598857960  
    8: 1.3155194200  
    9: 1.5379170046  
    10: 2.0568757061  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<random>  
  
 **Spazio dei nomi:** std  
  
##  <a name="extreme_value_distribution"></a>  extreme_value_distribution::extreme_value_distribution  
 Costruisce la distribuzione.  
  
```  
explicit extreme_value_distribution(result_type a_value = 0.0, result_type b_value = 1.0);
explicit extreme_value_distribution(const param_type& parm);  
```  
  
### <a name="parameters"></a>Parametri  
*a_value*  
 Parametro di distribuzione `a`.  
  
*b_value*  
 Parametro di distribuzione `b`.  
  
*parm*  
 Struttura `param_type` usata per costruire la distribuzione.  
  
### <a name="remarks"></a>Note  
 **Precondizione:** `0.0 < b`  
  
 Il primo costruttore crea un oggetto il cui valore `a` archiviato include il valore *a_value* e il cui valore `b` archiviato include il valore *b_value*.  
  
 Il secondo costruttore crea un oggetto i cui parametri archiviati sono inizializzati da *parm*. È possibile ottenere e impostare i parametri correnti di una distribuzione esistente chiamando la funzione membro `param()`.  
  
##  <a name="param_type"></a>  extreme_value_distribution::param_type  
Archivia i parametri della distribuzione.  
  
```cpp  
struct param_type {  
   typedef extreme_value_distribution<result_type> distribution_type;  
   param_type(result_type a_value = 0.0, result_type b_value = 1.0);
   result_type a() const;
   result_type b() const;
    
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```  
  
### <a name="parameters"></a>Parametri  
*a_value*  
 Parametro di distribuzione `a`.  
  
*b_value*  
 Parametro di distribuzione `b`.  
  
*right*  
 Oggetto `param_type` da confrontare con questo oggetto.  
  
### <a name="remarks"></a>Note  
 **Precondizione:** `0.0 < b`  
  
 Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)



