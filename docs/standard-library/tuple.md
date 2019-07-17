---
title: '&lt;tuple&gt;'
ms.date: 11/04/2016
f1_keywords:
- <tuple>
helpviewer_keywords:
- tuple header
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
ms.openlocfilehash: ce6e005990d05676fb20752b5808d32ec88dd7b3
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68241546"
---
# <a name="lttuplegt"></a>&lt;tuple&gt;

Definisce un modello `tuple` le cui istanze contengono oggetti di tipi diversi.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<tuple>

**Spazio dei nomi:** std

## <a name="members"></a>Members

### <a name="classes-and-structs"></a>Classi e struct

|||
|-|-|
|[Classe tuple](../standard-library/tuple-class.md)|Esegue il wrapping di una sequenza di elementi di lunghezza fissa.|
|[Classe tuple_element](../standard-library/tuple-element-class-tuple.md)|Esegue il wrapping del tipo di un elemento `tuple`.|
|[Classe tuple_size](../standard-library/tuple-size-class-tuple.md)|Esegue il wrapping del conteggio di elementi `tuple`.|
|[uses_allocator](../standard-library/uses-allocator-structure.md)||

### <a name="objects"></a>Oggetti

|||
|-|-|
|[tuple_element_t](../standard-library/tuple-functions.md#tuple_element_t)||
|[tuple_size_v](../standard-library/tuple-functions.md#tuple_size_v)||

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator==](../standard-library/tuple-operators.md#op_eq_eq)|Confronto tra `tuple` oggetti, uguali.|
|[operator!=](../standard-library/tuple-operators.md#op_neq)|Confronto tra `tuple` oggetti, non uguali.|
|[operator<](../standard-library/tuple-operators.md#op_lt)|Confronto tra `tuple` oggetti, minore di.|
|[operator<=](../standard-library/tuple-operators.md#op_lt_eq)|Confronto tra `tuple` oggetti, minore o uguale.|
|[operator>](../standard-library/tuple-operators.md#op_gt)|Confronto tra `tuple` oggetti, maggiore.|
|[operator>=](../standard-library/tuple-operators.md#op_gt_eq)|Confronto tra `tuple` oggetti, maggiori o uguali.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[apply](../standard-library/tuple-functions.md#apply)|Chiama una funzione con una tupla.|
|[forward_as_tuple](../standard-library/tuple-functions.md#forward)|Costruisce una tupla di riferimenti.|
|[get](../standard-library/tuple-functions.md#get)|Ottiene un elemento da un oggetto `tuple`.|
|[make_from_tuple](../standard-library/tuple-functions.md#make_from_tuple)|Sintassi abbreviata per rendere un `tuple`.|
|[make_tuple](../standard-library/tuple-functions.md#make_tuple)|Genera un oggetto `tuple` da valori di elemento.|
|[swap](../standard-library/tuple-functions.md#swap)||
|[tie](../standard-library/tuple-functions.md#tie)|Genera un oggetto `tuple` da riferimenti di elemento.|
|[tuple_cat](../standard-library/tuple-functions.md#tuple_cat)|Costruisce un oggetto tupla con un intervallo di elementi di tipo.|

## <a name="see-also"></a>Vedere anche

[\<array>](../standard-library/array.md)<br/>
