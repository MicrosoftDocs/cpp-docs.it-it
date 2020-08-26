---
title: '&lt;tuple&gt;'
ms.date: 11/04/2016
f1_keywords:
- <tuple>
helpviewer_keywords:
- tuple header
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
ms.openlocfilehash: b1eeba2fced21f5a38799db7fc4af259e03bc266
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88841844"
---
# <a name="lttuplegt"></a>&lt;tuple&gt;

Definisce un modello `tuple` le cui istanze contengono oggetti di tipi diversi.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<tuple>

**Spazio dei nomi:** std

## <a name="members"></a>Membri

### <a name="classes-and-structs"></a>Classi e struct

|Nome|Descrizione|
|-|-|
|[Tuple (classe)](../standard-library/tuple-class.md)|Esegue il wrapping di una sequenza di elementi di lunghezza fissa.|
|[Classe tuple_element](../standard-library/tuple-element-class-tuple.md)|Esegue il wrapping del tipo di un elemento `tuple`.|
|[Classe tuple_size](../standard-library/tuple-size-class-tuple.md)|Esegue il wrapping del conteggio di elementi `tuple` .|
|[uses_allocator](../standard-library/uses-allocator-structure.md)||

### <a name="objects"></a>Oggetti

|Nome|Descrizione|
|-|-|
|[tuple_element_t](../standard-library/tuple-functions.md#tuple_element_t)||
|[tuple_size_v](../standard-library/tuple-functions.md#tuple_size_v)||

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore = =](../standard-library/tuple-operators.md#op_eq_eq)|Confronto tra `tuple` oggetti, uguale a.|
|[operatore! =](../standard-library/tuple-operators.md#op_neq)|Confronto tra `tuple` oggetti, non uguali.|
|[operatore<](../standard-library/tuple-operators.md#op_lt)|Confronto tra `tuple` oggetti, minore di.|
|[operatore<=](../standard-library/tuple-operators.md#op_lt_eq)|Confronto tra `tuple` oggetti, minore o uguale a.|
|[operatore>](../standard-library/tuple-operators.md#op_gt)|Confronto tra `tuple` oggetti, maggiore di.|
|[operatore>=](../standard-library/tuple-operators.md#op_gt_eq)|Confronto tra `tuple` oggetti, maggiore o uguale a.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[applicare](../standard-library/tuple-functions.md#apply)|Chiama una funzione con una tupla.|
|[forward_as_tuple](../standard-library/tuple-functions.md#forward)|Costruisce una tupla di riferimenti.|
|[get](../standard-library/tuple-functions.md#get)|Ottiene un elemento da un oggetto `tuple`.|
|[make_from_tuple](../standard-library/tuple-functions.md#make_from_tuple)|Sintassi abbreviata per creare un oggetto `tuple` .|
|[make_tuple](../standard-library/tuple-functions.md#make_tuple)|Genera un oggetto `tuple` da valori di elemento.|
|[scambio](../standard-library/tuple-functions.md#swap)||
|[tie](../standard-library/tuple-functions.md#tie)|Genera un oggetto `tuple` da riferimenti di elemento.|
|[tuple_cat](../standard-library/tuple-functions.md#tuple_cat)|Costruisce un oggetto tupla con un intervallo di elementi di tipo.|

## <a name="see-also"></a>Vedere anche

[\<array>](../standard-library/array.md)
