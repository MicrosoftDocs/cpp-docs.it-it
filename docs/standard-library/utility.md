---
title: '&lt;utility&gt;'
ms.date: 11/04/2016
f1_keywords:
- <utility>
helpviewer_keywords:
- utility header
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
ms.openlocfilehash: 318cd86832875f3701c5d164ce9150e6adddb242
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50467201"
---
# <a name="ltutilitygt"></a>&lt;utility&gt;

Definisce i tipi, le funzioni e gli operatori della libreria standard C++ che semplificano la costruzione e la gestione di coppie di oggetti, utili quando è necessario considerare due oggetti come se fossero uno solo.

## <a name="syntax"></a>Sintassi

```cpp
#include <utility>

```

## <a name="remarks"></a>Note

Le coppie sono ampiamente usate nella libreria standard C++. Sono necessarie sia come argomenti e valori restituiti per diverse funzioni sia come tipi di elemento per contenitori quali la [classe map](../standard-library/map-class.md) e la [classe multimap](../standard-library/multimap-class.md). L'intestazione \<utility> viene inclusa automaticamente da \<map> per semplificare la gestione dei rispettivi elementi di tipi coppia chiave/valore.

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[tuple_element](../standard-library/tuple-element-class-tuple.md)|Classe che esegue il wrapping del tipo di un elemento `pair`.|
|[tuple_size](../standard-library/tuple-size-class-tuple.md)|Classe che esegue il wrapping di un conteggio di elementi `pair`.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[forward](../standard-library/utility-functions.md#forward)|Impedisce che il tipo di riferimento (`lvalue` o `rvalue`) dell'argomento venga nascosto dall'inoltro perfetto.|
|[get](../standard-library/utility-functions.md#get)|Funzione che ottiene un elemento da un oggetto `pair`.|
|[make_pair](../standard-library/utility-functions.md#make_pair)|Funzione di supporto del modello usata per costruire oggetti di tipo `pair`, in cui i tipi di componenti sono basati sui tipi di dati passati come parametri.|
|[move](../standard-library/utility-functions.md#move)|Restituisce l'argomento passato sotto forma di riferimento `rvalue`.|
|[swap](../standard-library/utility-functions.md#swap)|Scambia gli elementi di due oggetti `pair`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator!=](../standard-library/utility-operators.md#op_neq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|
|[operator==](../standard-library/utility-operators.md#op_eq_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è uguale all'oggetto pair a destra.|
|[operator<](../standard-library/utility-operators.md#op_lt)|Verifica se l'oggetto pair a sinistra dell'operatore è minore dell'oggetto pair a destra.|
|[operator\<=](../standard-library/utility-operators.md#op_gt_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|
|[operator>](../standard-library/utility-operators.md#op_gt)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore dell'oggetto pair a destra.|
|[operator>=](../standard-library/utility-operators.md#op_gt_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore o uguale all'oggetto pair a destra.|

### <a name="structs"></a>Struct

|||
|-|-|
|[identity](../standard-library/identity-structure.md)||
|[pair](../standard-library/pair-structure.md)|Tipo che permette di considerare due oggetti come un singolo oggetto.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
