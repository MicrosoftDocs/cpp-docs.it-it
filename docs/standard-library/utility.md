---
title: '&lt;utility&gt;'
ms.date: 11/04/2016
f1_keywords:
- <utility>
helpviewer_keywords:
- utility header
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
ms.openlocfilehash: 76b04c3c26f6ec49f1d816feaeec7e21312d79a9
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68246276"
---
# <a name="ltutilitygt"></a>&lt;utility&gt;

Definisce i tipi, le funzioni e gli operatori della libreria standard C++ che semplificano la costruzione e la gestione di coppie di oggetti, utili quando è necessario considerare due oggetti come se fossero uno solo.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<utility>

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

Le coppie sono ampiamente usate nella libreria standard C++. Sono necessarie sia come argomenti e valori restituiti per diverse funzioni sia come tipi di elemento per contenitori quali la [classe map](../standard-library/map-class.md) e la [classe multimap](../standard-library/multimap-class.md). L'intestazione \<utility> viene inclusa automaticamente da \<map> per semplificare la gestione dei rispettivi elementi di tipi coppia chiave/valore.

> [!NOTE]
> Il \<utility > intestazione viene utilizzata l'istruzione `#include <initializer_list>`. Si intende anche `class tuple` come definito in \<tuple >.

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|||
|-|-|
|[chars_format](../standard-library/chars-format-class.md)|Formato a virgola mobile per la conversione numerica primitiva.|
|[tuple_element](../standard-library/tuple-element-class-tuple.md)|Classe che esegue il wrapping del tipo di un elemento `pair`.|
|[tuple_size](../standard-library/tuple-size-class-tuple.md)|Classe che esegue il wrapping di un conteggio di elementi `pair`.|

### <a name="objects"></a>Oggetti

|||
|-|-|
|[index_sequence](../standard-library/utility-functions.md#index_sequence)||
|[index_sequence_for](../standard-library/utility-functions.md#index_sequence_for)||
|[make_index_sequence](../standard-library/utility-functions.md#make_index_sequence)||
|[make_integer_sequence](../standard-library/utility-functions.md#make_integer_sequence)||

### <a name="functions"></a>Funzioni

|||
|-|-|
|[as_const](../standard-library/utility-functions.md#asconst)|Restituisce tipi.|
|[declval](../standard-library/utility-functions.md#declval)|Valutazione dell'espressione a sintassi abbreviata.|
|[exchange](../standard-library/utility-functions.md#exchange)|Assegna un nuovo valore a un oggetto e restituisce il valore precedente.|
|[forward](../standard-library/utility-functions.md#forward)|Impedisce che il tipo di riferimento (`lvalue` o `rvalue`) dell'argomento venga nascosto dall'inoltro perfetto.|
|[from_chars](../standard-library/utility-functions.md#from_chars)||
|[get](../standard-library/utility-functions.md#get)|Funzione che ottiene un elemento da un oggetto `pair`.|
|[make_pair](../standard-library/utility-functions.md#make_pair)|Funzione di supporto del modello usata per costruire oggetti di tipo `pair`, in cui i tipi di componenti sono basati sui tipi di dati passati come parametri.|
|[move](../standard-library/utility-functions.md#move)|Restituisce l'argomento passato sotto forma di riferimento `rvalue`.|
|[move_if_noexcept](../standard-library/utility-functions.md#moveif)||
|[swap](../standard-library/utility-functions.md#swap)|Scambia gli elementi di due oggetti `pair`.|
|[to_chars](../standard-library/utility-functions.md#to_chars)|Converte una stringa di caratteri di valore.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator!=](../standard-library/utility-operators.md#op_neq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|
|[operator==](../standard-library/utility-operators.md#op_eq_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è uguale all'oggetto pair a destra.|
|[operator\<](../standard-library/utility-operators.md#op_lt)|Verifica se l'oggetto pair a sinistra dell'operatore è minore dell'oggetto pair a destra.|
|[operator\<=](../standard-library/utility-operators.md#op_gt_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|
|[operator>](../standard-library/utility-operators.md#op_gt)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore dell'oggetto pair a destra.|
|[operator>=](../standard-library/utility-operators.md#op_gt_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore o uguale all'oggetto pair a destra.|

### <a name="structs"></a>Struct

|||
|-|-|
|[from_chars_result](../standard-library/from-chars-result-structure.md)|Uno struct usato per `from_chars`.|
|[identity](../standard-library/identity-structure.md)|Struct che fornisce una definizione di tipo come parametro di modello.|
|[in_place_t](../standard-library/in-place-t-struct.md)|Include anche le strutture `in_place_type_t` e `in_place_index_t`.|
|[integer_sequence](../standard-library/integer-sequence-class.md)|Rappresenta una sequenza di Integer.|
|[pair](../standard-library/pair-structure.md)|Tipo che permette di considerare due oggetti come un singolo oggetto.|
|[piecewise_construct_t](../standard-library/piecewise-construct-t-structure.md)|Un tipo usato per mantenere il costruttore separato e overload di funzioni.|
|[to_chars_result](../standard-library/to-chars-result-structure.md)|Uno struct usato per `to_chars`.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
