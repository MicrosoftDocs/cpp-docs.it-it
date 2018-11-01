---
title: '&lt;exception&gt;'
ms.date: 11/04/2016
f1_keywords:
- <exception>
helpviewer_keywords:
- exception header
ms.assetid: 28900768-5dd7-4834-b907-5e37ab3407db
ms.openlocfilehash: 6260b100bf62662738cb5fa1c5f74df89086f033
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50612797"
---
# <a name="ltexceptiongt"></a>&lt;exception&gt;

Definisce diversi tipi e funzioni correlati alla gestione delle eccezioni. Gestione eccezioni viene usata nei casi in cui è possibile ripristinare lo stato precedente del sistema. Fornisce uno strumento affinché il controllo venga restituito da una funzione al programma. L'incorporamento della gestione delle eccezioni ha lo scopo di aumentare l'affidabilità del programma fornendo al contempo un modo per ripristinare il normale funzionamento in presenza di un errore.

## <a name="syntax"></a>Sintassi

```cpp
#include <exception>

```

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[exception_ptr](../standard-library/exception-typedefs.md#exception_ptr)|Tipo che descrive un puntatore a un'eccezione.|
|[terminate_handler](../standard-library/exception-typedefs.md#terminate_handler)|Tipo che descrive un puntatore a una funzione che è possibile usare come `terminate_handler`.|
|[unexpected_handler](../standard-library/exception-typedefs.md#unexpected_handler)|Tipo che descrive un puntatore a una funzione che è possibile usare come `unexpected_handler`.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[current_exception](../standard-library/exception-functions.md#current_exception)|Ottiene un puntatore all'eccezione corrente.|
|[get_terminate](../standard-library/exception-functions.md#get_terminate)|Ottiene la funzione `terminate_handler` corrente.|
|[get_unexpected](../standard-library/exception-functions.md#get_unexpected)|Ottiene la funzione `unexpected_handler` corrente.|
|[make_exception_ptr](../standard-library/exception-functions.md#make_exception_ptr)|Crea un oggetto `exception_ptr` contenente una copia di un'eccezione.|
|[rethrow_exception](../standard-library/exception-functions.md#rethrow_exception)|Genera un'eccezione passata come parametro.|
|[set_terminate](../standard-library/exception-functions.md#set_terminate)|Crea un nuovo `terminate_handler` da chiamare al termine del programma.|
|[set_unexpected](../standard-library/exception-functions.md#set_unexpected)|Stabilisce un nuovo `unexpected_handler` quando viene rilevata un'eccezione imprevista.|
|[terminate](../standard-library/exception-functions.md#terminate)|Chiama un gestore di terminazione.|
|[uncaught_exception](../standard-library/exception-functions.md#uncaught_exception)|Restituisce **true** solo se un'eccezione generata è in corso di elaborazione.|
|[Imprevisto](../standard-library/exception-functions.md#unexpected)|Chiama un gestore imprevisto.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe bad_exception](../standard-library/bad-exception-class.md)|La classe descrive un'eccezione che può essere generata da un `unexpected_handler`.|
|[Classe exception](../standard-library/exception-class.md)|La classe funge da classe base per tutte le eccezioni generate da determinate espressioni e dalla libreria C++ standard.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
