---
title: noexcept (C++)
ms.date: 11/19/2019
f1_keywords:
- noexcept_cpp
ms.assetid: df24edb9-c6a6-4e37-9914-fd5c0c3716a8
ms.openlocfilehash: efb5ad272c8857e7a0dbd2c75885b826f2b8b9f8
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825364"
---
# <a name="noexcept-c"></a>noexcept (C++)

**C++ 11:** Specifica se una funzione può generare eccezioni.

## <a name="syntax"></a>Sintassi

> *noexcept-espressione*: \
> &nbsp;&nbsp;&nbsp;&nbsp;**noexcept**\
> &nbsp;&nbsp;&nbsp;&nbsp;**noexcept (** *Constant-Expression* **)**

### <a name="parameters"></a>Parametri

*espressione costante*<br/>
Espressione costante di tipo **bool** che indica se il set di tipi di eccezioni potenziali è vuoto. La versione non condizionale è equivalente a `noexcept(true)`.

## <a name="remarks"></a>Osservazioni

Un' *espressione noexcept* è un tipo di *specifica di eccezione*, un suffisso di una dichiarazione di funzione che rappresenta un set di tipi che potrebbero essere corrispondenti da un gestore di eccezioni per qualsiasi eccezione che esce da una funzione. Operatore `noexcept(`condizionale unario *constant_expression* `)` dove *constant_expression* restituisce **true**e il relativo sinonimo non condizionale **noexcept**, specifica che il set di potenziali tipi di eccezione che può uscire da una funzione è vuoto. Ovvero, la funzione non genera mai un'eccezione e non consente mai la propagazione di un'eccezione all'esterno del relativo ambito. L'operatore `noexcept(` *constant_expression* `)` in cui *constant_expression* restituisce **false**o l'assenza di una specifica di eccezione (ad eccezione di un distruttore o di una funzione di deallocazione), indica che il set di potenziali eccezioni che può uscire dalla funzione è il set di tutti i tipi.

Contrassegnare una funzione come **noexcept** solo se tutte le funzioni chiamate, direttamente o indirettamente, sono anche **noexcept** o **const**. Il compilatore non controlla necessariamente ogni percorso di codice per le eccezioni che potrebbero propagarsi a una funzione **noexcept** . Se un'eccezione esce dall'ambito esterno di una funzione contrassegnata `noexcept`come, [std:: terminate](../standard-library/exception-functions.md#terminate) viene richiamato immediatamente e non vi è alcuna garanzia che vengano richiamati i distruttori di tutti gli oggetti inclusi nell'ambito. Usare **noexcept** anziché l'identificatore `throw()`di eccezione dinamica, che è ora deprecato nello standard. Si consiglia di applicare `noexcept` a qualsiasi funzione che non consenta mai un'eccezione di propagare lo stack di chiamate. Quando una funzione viene dichiarata **noexcept**, consente al compilatore di generare codice più efficiente in diversi contesti diversi. Per ulteriori informazioni, vedere [specifiche di eccezione](exception-specifications-throw-cpp.md).

## <a name="example"></a>Esempio

Una funzione di modello che copia il relativo argomento potrebbe essere dichiarata **noexcept** sulla condizione che l'oggetto copiato sia un tipo di dati Plain Old (POD). Tale funzione potrebbe essere dichiarata come segue:

```cpp
#include <type_traits>

template <typename T>
T copy_object(const T& obj) noexcept(std::is_pod<T>)
{
   // ...
}
```

## <a name="see-also"></a>Vedere anche

[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](errors-and-exception-handling-modern-cpp.md)<br/>
[Specifiche di eccezione (throw, noexcept)](exception-specifications-throw-cpp.md)
