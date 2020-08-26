---
title: Classe random_device
ms.date: 11/04/2016
f1_keywords:
- random/std::random_device
- random/std::random_device::min
- random/std::random_device::max
- random/std::random_device::entropy
- random/std::random_device::operator()
helpviewer_keywords:
- std::random_device [C++]
- std::random_device [C++], min
- std::random_device [C++], max
- std::random_device [C++], entropy
- std::random_device [C++], entropy
ms.assetid: 4393d515-0cb6-4e0d-a2ba-c780f05dc1bf
ms.openlocfilehash: b2176ce7dcdefdcf4fc0846cd18b1b01d4de2916
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88843547"
---
# <a name="random_device-class"></a>Classe random_device

Genera una sequenza casuale da un dispositivo esterno.

## <a name="syntax"></a>Sintassi

```cpp
class random_device {
public:
   typedef unsigned int result_type;

   // constructor
   explicit random_device(const std::string& token = "");

   // properties
   static result_type min();
   static result_type max();
   double entropy() const;

   // generate
   result_type operator()();

   // no-copy functions
   random_device(const random_device&) = delete;
   void operator=(const random_device&) = delete;
   };
```

## <a name="members"></a>Membri

[random_device](#random_device)\
[entropia](#entropy)\
[random_device::operator()](#op_call)

## <a name="remarks"></a>Osservazioni

La classe descrive un'origine di numeri casuali e può, ma non deve, essere non deterministica o crittograficamente sicura in base allo standard C++ ISO. Nell'implementazione di Visual Studio i valori prodotti sono non deterministici e crittograficamente sicuri, ma l'esecuzione risulta più lenta rispetto ai generatori creati da motori e adattatori del motore, ad esempio [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md), il motore veloce e di qualità elevata scelto per la maggior parte delle applicazioni.

I risultati di `random_device` sono distribuiti in modo uniforme nell'intervallo chiuso [ `0, 2`<sup>32</sup>).

Non è garantito che `random_device` abbia come risultato una chiamata non di blocco.

In genere, `random_device` è usato per il seeding di altri generatori creati con motori o adattatori del motore. Per altre informazioni, vedere [\<random>](../standard-library/random.md).

## <a name="example"></a>Esempio

Il codice seguente illustra la funzionalità di base di questa classe e presenta esempi di risultati. A causa della natura non deterministica di `random_device`, i valori casuali mostrati nella sezione **Output** non corrisponderanno ai risultati specifici dell'utente. Questo comportamento è normale e previsto.

```cpp
// random_device_engine.cpp
// cl.exe /W4 /nologo /EHsc /MTd
#include <random>
#include <iostream>
using namespace std;

int main()
{
    random_device gen;

    cout << "entropy == " << gen.entropy() << endl;
    cout << "min == " << gen.min() << endl;
    cout << "max == " << gen.max() << endl;

    cout << "a random value == " << gen() << endl;
    cout << "a random value == " << gen() << endl;
    cout << "a random value == " << gen() << endl;
}
```

```Output
entropy == 32
min == 0
max == 4294967295
a random value == 2378414971
a random value == 3633694716
a random value == 213725214
```

Questo esempio è semplicistico e non rappresentativo dei casi d'utilizzo generali per questo generatore. Per un esempio di codice più rappresentativo, vedere [\<random>](../standard-library/random.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<random>

**Spazio dei nomi:** std

## <a name="random_devicerandom_device"></a><a name="random_device"></a> random_device:: random_device

Costruisce il generatore.

```cpp
random_device(const std::string& = "");
```

### <a name="remarks"></a>Osservazioni

Il costruttore inizializza il generatore in base alle esigenze, ignorando il parametro di stringa. Se non è stato possibile inizializzare `random_device`, genera un valore di un tipo definito dall'implementazione derivato dall'oggetto [exception](../standard-library/exception-class.md).

## <a name="random_deviceentropy"></a><a name="entropy"></a> random_device:: entropia

Stima la casualità dell'origine.

```cpp
double entropy() const noexcept;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una stima della casualità dell'origine, misurata in bit.

## <a name="random_deviceoperator"></a><a name="op_call"></a> operatore random_device:: ()

Restituisce un valore casuale.

```cpp
result_type operator()();
```

### <a name="remarks"></a>Osservazioni

Restituisce valori distribuiti in modo uniforme nell'intervallo chiuso [ `min, max`], in base a quanto determinato dalle funzioni membro `min()` e `max()`. Se non è stato possibile ottenere un numero casuale, genera un valore di un tipo definito dall'implementazione derivato dall'oggetto [exception](../standard-library/exception-class.md).

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
