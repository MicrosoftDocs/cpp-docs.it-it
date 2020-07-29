---
title: '&lt;utility&gt;'
ms.date: 11/04/2016
f1_keywords:
- <utility>
helpviewer_keywords:
- utility header
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
ms.openlocfilehash: 1beade28ceec0f1552def4bc70c2e95e6b2aa24d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215439"
---
# <a name="ltutilitygt"></a>&lt;utility&gt;

Definisce i tipi, le funzioni e gli operatori della libreria standard C++ che semplificano la costruzione e la gestione di coppie di oggetti, utili quando è necessario considerare due oggetti come se fossero uno solo.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<utility>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

Le coppie sono ampiamente usate nella libreria standard C++. Sono necessarie sia come argomenti e valori restituiti per diverse funzioni sia come tipi di elemento per contenitori quali la [classe map](../standard-library/map-class.md) e la [classe multimap](../standard-library/multimap-class.md). L' \<utility> intestazione viene inclusa automaticamente da \<map> per semplificare la gestione degli elementi del tipo di coppia chiave/valore.

> [!NOTE]
> Nell' \<utility> intestazione viene utilizzata l'istruzione `#include <initializer_list>` . Si riferisce anche a `class tuple` come definito in \<tuple> .

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Type|Descrizione|
|-|-|
|[chars_format](../standard-library/chars-format-class.md)|Formato a virgola mobile per la conversione numerica primitiva.|
|[tuple_element](../standard-library/tuple-element-class-tuple.md)|Classe che esegue il wrapping del tipo di un elemento `pair`.|
|[tuple_size](../standard-library/tuple-size-class-tuple.md)|Classe che esegue il wrapping di un conteggio di elementi `pair`.|

### <a name="objects"></a>Oggetti

|Modello|Description|
|-|-|
|[index_sequence](../standard-library/utility-functions.md#index_sequence)|Modello di alias definito per il caso comune in cui `T` è`std::size_t`  |
|[index_sequence_for](../standard-library/utility-functions.md#index_sequence_for)|Modello di alias helper per convertire qualsiasi pacchetto di parametri di tipo in una sequenza di indice della stessa lunghezza|
|[make_index_sequence](../standard-library/utility-functions.md#make_index_sequence)| Modello di alias helper per semplificare la creazione di un `std::index_sequence` tipo. |
|[make_integer_sequence](../standard-library/utility-functions.md#make_integer_sequence)|Modello di alias helper per semplificare la creazione di un `std::integer_sequence` tipo.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[as_const](../standard-library/utility-functions.md#asconst)|Restituisce il tipo.|
|[declval](../standard-library/utility-functions.md#declval)|Valutazione dell'espressione a sintassi abbreviata.|
|[Exchange](../standard-library/utility-functions.md#exchange)|Assegna un nuovo valore a un oggetto e restituisce il relativo valore precedente.|
|[avanti](../standard-library/utility-functions.md#forward)|Impedisce che il tipo di riferimento (`lvalue` o `rvalue`) dell'argomento venga nascosto dall'inoltro perfetto.|
|[from_chars](../standard-library/utility-functions.md#from_chars)||
|[get](../standard-library/utility-functions.md#get)|Funzione che ottiene un elemento da un oggetto `pair`.|
|[make_pair](../standard-library/utility-functions.md#make_pair)|Funzione di supporto del modello usata per costruire oggetti di tipo `pair`, in cui i tipi di componenti sono basati sui tipi di dati passati come parametri.|
|[move](../standard-library/utility-functions.md#move)|Restituisce l'argomento passato sotto forma di riferimento `rvalue`.|
|[move_if_noexcept](../standard-library/utility-functions.md#moveif)||
|[scambio](../standard-library/utility-functions.md#swap)|Scambia gli elementi di due oggetti `pair`.|
|[to_chars](../standard-library/utility-functions.md#to_chars)|Converte un valore in una stringa di caratteri.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore! =](../standard-library/utility-operators.md#op_neq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|
|[operatore = =](../standard-library/utility-operators.md#op_eq_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è uguale all'oggetto pair a destra.|
|[operatore\<](../standard-library/utility-operators.md#op_lt)|Verifica se l'oggetto pair a sinistra dell'operatore è minore dell'oggetto pair a destra.|
|[operatore\<=](../standard-library/utility-operators.md#op_gt_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|
|[operatore>](../standard-library/utility-operators.md#op_gt)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore dell'oggetto pair a destra.|
|[operatore>=](../standard-library/utility-operators.md#op_gt_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore o uguale all'oggetto pair a destra.|

### <a name="structs"></a>Struct

|Struct|Descrizione|
|-|-|
|[from_chars_result](../standard-library/from-chars-result-structure.md)|Struct utilizzato per `from_chars` .|
|[identity](../standard-library/identity-structure.md)|Struct che fornisce una definizione di tipo come parametro di modello.|
|[in_place_t](../standard-library/in-place-t-struct.md)|Include anche struct `in_place_type_t` e `in_place_index_t` .|
|[integer_sequence](../standard-library/integer-sequence-class.md)|Rappresenta una sequenza di Integer.|
|[coppia](../standard-library/pair-structure.md)|Tipo che permette di considerare due oggetti come un singolo oggetto.|
|[piecewise_construct_t](../standard-library/piecewise-construct-t-structure.md)|Tipo utilizzato per evitare l'overload di funzioni e costruttori distinti.|
|[to_chars_result](../standard-library/to-chars-result-structure.md)|Struct utilizzato per `to_chars` .|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
