---
title: '&lt;complex&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <complex>
- std.<complex>
- std::<complex>
dev_langs:
- C++
helpviewer_keywords:
- complex header
ms.assetid: 5e728995-3059-496a-9ce9-61d1bfbe4f2b
caps.latest.revision: 21
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 02d651b3e3ca4dc643b01463a85762a6427b8e83
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="ltcomplexgt"></a>&lt;complex&gt;
Definisce la classe di modello del contenitore **complesso** e i relativi modelli di supporto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <complex>  
```  
  
## <a name="remarks"></a>Note  
 Un numero complesso è una coppia ordinata di numeri reali. In termini puramente geometrici, il piano complesso è il piano bidimensionale reale. Le qualità speciali del piano complesso che lo distinguono dal piano reale dipendono dal fatto che ha una struttura algebrica aggiuntiva. Questa struttura algebrica include due operazioni fondamentali:  
  
-   Addition defined as (*a*, *b*) + (*c*, *d*) = (*a* + *c*, *b* + *d*)  
  
-   Multiplication defined as (*a*, *b*) \* (*c*, *d*) = (*ac* - *bd*, *ad* + *bc*)  
  
 L'insieme di numeri complessi con operazioni di addizione complessa e moltiplicazione complessa corrisponde a un campo nel senso algebrico standard:  
  
-   Le operazioni di addizione e moltiplicazione sono commutative e associative e la moltiplicazione è distributiva rispetto all'addizione, esattamente come rispetto alla vera addizione e moltiplicazione nel campo dei numeri reali.  
  
-   Numero complesso (0, 0) è l'identità additiva e (1, 0) è l'identità moltiplicativa.  
  
-   L'inverso additivo per un numero complesso (*un*, *b*) è (-*un*-*b*) e l'inverso moltiplicativo per tutti questi numeri complessi, ad eccezione (0, 0) è  
  
     (*a*/(*a*<sup>2</sup> + *b*<sup>2</sup>), -*b*/(*a*<sup>2</sup> + *b*<sup>2</sup>))  
  
 Mediante la rappresentazione di un numero complesso *z* = (*un*, *b*) nel formato *z* = *un* + *bi*, dove *si*<sup>2</sup> = -1, le regole per l'algebra del set di numeri reali può essere applicata per il set di numeri complessi e i relativi componenti. Ad esempio:  
  
  (1 + 2*i*) \* (2 + 3*i*)  
  = 1 \* (2 + 3*i*) + 2*i* \* (2 + 3*i*)  
  = (2 + 3*i*) + (4*i* + 6*i*<sup>2</sup>)  
  = (2 - 6) + (3 + 4)*i*  
  = -4 + 7*i*  
  
 Il sistema di numeri complessi è un campo, ma non è un campo ordinato. Non sussiste alcun ordinamento dei numeri complessi, come accade per il campo di numeri reali e i relativi sottoinsiemi, quindi non è possibile applicare disuguaglianze ai numeri complessi come se fossero in numeri reali.  
  
 Esistono tre formati comuni di rappresentazione di un numero complesso *z*:  
  
-   Cartesian: *z* = *a* + *bi*  
  
-   Polar: *z* = *r* (cos *p* + *i* sin *p*)  
  
-   Exponential: *z* = *r* \* *e*<sup>*ip*</sup>  
  
 I termini usati in queste rappresentazioni standard di un numero complesso vengono definiti come segue:  
  
-   Componente cartesiana reale o parte reale *a*.  
  
-   Componente cartesiana immaginaria o parte immaginaria *b*.  
  
-   Il modulo o un valore assoluto di un numero complesso *r*.  
  
-   L'angolo di fase o argomento *p* in radianti.  
  
 Se non diversamente specificato, le funzioni che possono restituire valori multipli sono necessarie per restituire un valore principale per i relativi argomenti di maggiore di - π e minore di o uguale a + π per mantenerli a singolo valore. Tutti gli angoli devono essere espressi in radianti, in cui sono presenti 2 π radianti (360 gradi) in un cerchio.  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[abs](../standard-library/complex-functions.md#abs)|Calcola il modulo di un numero complesso.|  
|[arg](../standard-library/complex-functions.md#arg)|Estrae l'argomento da un numero complesso.|  
|[conj](../standard-library/complex-functions.md#conj)|Restituisce il complesso coniugato di un numero complesso.|  
|[cos](../standard-library/complex-functions.md#cos)|Restituisce il coseno di un numero complesso.|  
|[cosh](../standard-library/complex-functions.md#cosh)|Restituisce il coseno iperbolico di un numero complesso.|  
|[exp](../standard-library/complex-functions.md#exp)|Restituisce la funzione esponenziale di un numero complesso.|  
|[imag](../standard-library/complex-functions.md#imag)|Estrae il componente immaginario di un numero complesso.|  
|[log](../standard-library/complex-functions.md#log)|Restituisce il logaritmo naturale di un numero complesso.|  
|[log10](../standard-library/complex-functions.md#log10)|Restituisce il logaritmo in base 10 di un numero complesso.|  
|[norm](../standard-library/complex-functions.md#norm)|Estrae la norma di un numero complesso.|  
|[polar](../standard-library/complex-functions.md#polar)|Restituisce il numero complesso, che corrisponde a un modulo e un argomento specificati, in formato cartesiano.|  
|[pow](../standard-library/complex-functions.md#pow)|Valuta il numero complesso ottenuto mediante l'elevamento di una base corrispondente a un numero complesso alla potenza di un altro numero complesso.|  
|[real](../standard-library/complex-functions.md#real)|Estrae il componente reale di un numero complesso.|  
|[sin](../standard-library/complex-functions.md#sin)|Restituisce il seno di un numero complesso.|  
|[sinh](../standard-library/complex-functions.md#sinh)|Restituisce il seno iperbolico di un numero complesso.|  
|[sqrt](../standard-library/complex-functions.md#sqrt)|Restituisce la radice quadrata di un numero complesso.|  
|[tan](../standard-library/complex-functions.md#tan)|Restituisce la tangente di un numero complesso.|  
|[tanh](../standard-library/complex-functions.md#tanh)|Restituisce la tangente iperbolica di un numero complesso.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator!=](../standard-library/complex-operators.md#op_neq)|Verifica la disuguaglianza tra due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator*](../standard-library/complex-operators.md#op_star)|Moltiplica due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator+](../standard-library/complex-operators.md#op_add)|Aggiunge due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator-](../standard-library/complex-operators.md#operator-)|Sottrae due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator/](../standard-library/complex-operators.md#op_div)|Divide due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator<\<](../standard-library/complex-operators.md#op_lt_lt)|Funzione di modello che inserisce un numero complesso nel flusso di output.|  
|[operator==](../standard-library/complex-operators.md#op_eq_eq)|Verifica l'uguaglianza tra due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator>>](../standard-library/complex-operators.md#op_gt_gt)|Funzione di modello che estrae un valore complesso dal flusso di input.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[complex\<double>](../standard-library/complex-double.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **doppie**, dove il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|  
|[complex\<float>](../standard-library/complex-float.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **float**, dove il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|  
|[complex\<long double>](../standard-library/complex-long-double.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **long double**, dove il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|  
|[complex](../standard-library/complex-class.md)|La classe modello descrive un oggetto usato per rappresentare il sistema di numeri complessi e per eseguire operazioni aritmetiche complesse.|  
  
### <a name="literals"></a>Valori letterali  
 L'intestazione \<complex> definisce i [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) seguenti, che creano un numero complesso di cui la parte reale è zero e la parte immaginaria è il valore del parametro di input.  
  
|||  
|-|-|  
|`constexpr complex<long double> operator""il(long double d)`<br /><br /> `constexpr complex<long double> operator""il(unsigned long long d)`|Restituisce:`complex<long double>{0.0L, static_cast<long double>(d)}`|  
|`constexpr complex<double> operator""i(long double d)`<br /><br /> `constexpr complex<double> operator""i(unsigned long long d)`|Restituisce `complex<double>{0.0, static_cast<double>(d)}`.|  
|`constexpr complex<float> operator""if(long double d)`<br /><br /> `constexpr complex<float> operator""if(unsigned long long d)`|Restituisce `complex<float>{0.0f, static_cast<float>(d)}`.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)




