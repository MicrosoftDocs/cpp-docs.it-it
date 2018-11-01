---
title: '&lt;tuple&gt;'
ms.date: 11/04/2016
f1_keywords:
- <tuple>
helpviewer_keywords:
- tuple header
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
ms.openlocfilehash: 2e46b3997096c6e61f7dd6140131e3f10223b8e7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50586667"
---
# <a name="lttuplegt"></a>&lt;tuple&gt;

Definisce un modello `tuple` le cui istanze contengono oggetti di tipi diversi.

## <a name="syntax"></a>Sintassi

```cpp
#include <tuple>
```

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[tuple](../standard-library/tuple-class.md)|Esegue il wrapping di una sequenza di elementi di lunghezza fissa.|
|[Classe tuple_element](../standard-library/tuple-element-class-tuple.md)|Esegue il wrapping del tipo di un elemento `tuple`.|
|[Classe tuple_size](../standard-library/tuple-size-class-tuple.md)|Esegue il wrapping del conteggio di elementi `tuple`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator==](../standard-library/tuple-operators.md#op_eq_eq)|Confronto tra oggetti `tuple`, uguali|
|[operator!=](../standard-library/tuple-operators.md#op_neq)|Confronto tra oggetti `tuple`, non uguali|
|[operator<](../standard-library/tuple-operators.md#op_lt)|Confronto tra oggetti `tuple`, minore di|
|[operator<=](../standard-library/tuple-operators.md#op_lt_eq)|Confronto tra oggetti `tuple`, minore o uguale a|
|[operator>](../standard-library/tuple-operators.md#op_gt)|Confronto tra oggetti `tuple`, maggiore di|
|[operator>=](../standard-library/tuple-operators.md#op_gt_eq)|Confronto tra oggetti `tuple`, maggiore o uguale a|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[get](../standard-library/tuple-functions.md#get)|Ottiene un elemento da un oggetto `tuple`.|
|[make_tuple](../standard-library/tuple-functions.md#make_tuple)|Genera un oggetto `tuple` da valori di elemento.|
|[tie](../standard-library/tuple-functions.md#tie)|Genera un oggetto `tuple` da riferimenti di elemento.|

## <a name="see-also"></a>Vedere anche

[\<array>](../standard-library/array.md)<br/>
