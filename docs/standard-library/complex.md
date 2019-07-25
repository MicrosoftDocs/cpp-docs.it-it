---
title: '&lt;complex&gt;'
ms.date: 11/04/2016
f1_keywords:
- <complex>
- std::<complex>
helpviewer_keywords:
- complex header
ms.assetid: 5e728995-3059-496a-9ce9-61d1bfbe4f2b
ms.openlocfilehash: 585f970f1a3482412ff225454b7acce9060e2d7c
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449430"
---
# <a name="ltcomplexgt"></a>&lt;complex&gt;

Definisce la classe `complex` modello del contenitore e i relativi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione**: \<complex>

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

Un numero complesso è una coppia ordinata di numeri reali. In termini puramente geometrici, il piano complesso è il piano bidimensionale reale. Le qualità speciali del piano complesso che lo distinguono dal piano reale dipendono dal fatto che ha una struttura algebrica aggiuntiva. Questa struttura algebrica include due operazioni fondamentali:

- Aggiunta definita come (*a*, *b*) + (*c*, *d*) = (*a* + *c*, *b* + *d*)

- Moltiplicazione definita come (*a*, *b*) \* (*c*, *d*) = (*CA* - *BD*, *ad* + *BC*)

L'insieme di numeri complessi con operazioni di addizione complessa e moltiplicazione complessa corrisponde a un campo nel senso algebrico standard:

- Le operazioni di addizione e moltiplicazione sono commutative e associative e la moltiplicazione è distributiva rispetto all'addizione, esattamente come rispetto alla vera addizione e moltiplicazione nel campo dei numeri reali.

- Il numero complesso (0, 0) è l'identità additiva e (1, 0) è l'identità moltiplicativa.

- L'inverso additivo per un numero complesso (*a*, *b*) è (-*a*,-*b*) e l'inverso moltiplicativo per tutti questi numeri complessi ad eccezione di (0, 0) è

   (*a*/(*a*<sup>2</sup> + *b*<sup>2</sup>), -*b*/(*a*<sup>2</sup> + *b*<sup>2</sup>))

Rappresentando un numero complesso *z* = (*a*, *b*) nel formato *z* = *a* + *bi*, dove *i*<sup>2</sup> =-1, le regole per l'algebra del set di numeri reali possono essere applicate al set di numeri complessi e ai relativi componenti. Ad esempio:

   (1 + 2*i*) \* (2 + 3*i*) = 1 \* (2 + 3*i*) + 2*i* \* (2 + 3*i*) = (2 + 3*i*) + (4*i* + 6*i*<sup>2</sup>) = (2 - 6) + (3 + 4)*i* = -4 + 7*i*

Il sistema di numeri complessi è un campo, ma non è un campo ordinato. Non esiste alcun ordinamento dei numeri complessi come per il campo dei numeri reali e dei relativi subset, pertanto non è possibile applicare le disuguaglianze ai numeri complessi così come sono i numeri reali.

Esistono tre formati comuni di rappresentazione di un numero complesso *z*:

- Cartesiano: *z* = *a* + *bi*

- Polare *: z* = *r* ( *cos p* + *i* sin *p*)

- Esponenziale: *z* = *r* \* *e*<sup>*IP*</sup>

I termini usati in queste rappresentazioni standard di un numero complesso vengono definiti come segue:

- Componente cartesiana reale o parte reale *a*.

- Componente cartesiana immaginaria o parte immaginaria *b*.

- Modulo o valore assoluto di un numero complesso *r*.

- L'argomento o l'angolo di fase *p* in radianti.

Se non diversamente specificato, le funzioni che possono restituire più valori sono necessarie per restituire un valore principale per i rispettivi argomenti maggiori di-π e minori o uguali a + π per mantenerli a valore singolo. Tutti gli angoli devono essere espressi in radianti, in cui sono presenti 2 π radianti (360 gradi) in un cerchio.

## <a name="members"></a>Members

### <a name="functions"></a>Funzioni

|||
|-|-|
|[abs](../standard-library/complex-functions.md#abs)|Calcola il modulo di un numero complesso.|
|[acos](../standard-library/complex-functions.md#acos)||
|[acosh](../standard-library/complex-functions.md#acosh)||
|[arg](../standard-library/complex-functions.md#arg)|Estrae l'argomento da un numero complesso.|
|[asin](../standard-library/complex-functions.md#asin)||
|[asinh](../standard-library/complex-functions.md#asinh)||
|[atan](../standard-library/complex-functions.md#atan)||
|[atanh](../standard-library/complex-functions.md#atanh)||
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
|[proj](../standard-library/complex-functions.md#proj)||
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
|[complex\<double>](../standard-library/complex-double.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **Double**, dove il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|
|[complex\<float>](../standard-library/complex-float.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **float**, dove il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|
|[complex\<long double>](../standard-library/complex-long-double.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **long double**, dove il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|
|[complex](../standard-library/complex-class.md)|La classe modello descrive un oggetto usato per rappresentare il sistema di numeri complessi e per eseguire operazioni aritmetiche complesse.|

### <a name="literals"></a>Valori letterali

L'intestazione \<complex> definisce i [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) seguenti, che creano un numero complesso di cui la parte reale è zero e la parte immaginaria è il valore del parametro di input.

|||
|-|-|
|`constexpr complex<long double> operator""il(long double d)`<br />`constexpr complex<long double> operator""il(unsigned long long d)`|Restituisce`complex<long double>{0.0L, static_cast<long double>(d)}`|
|`constexpr complex<double> operator""i(long double d)`<br />`constexpr complex<double> operator""i(unsigned long long d)`|Restituisce `complex<double>{0.0, static_cast<double>(d)}`.|
|`constexpr complex<float> operator""if(long double d)`<br />`constexpr complex<float> operator""if(unsigned long long d)`|Restituisce `complex<float>{0.0f, static_cast<float>(d)}`.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
