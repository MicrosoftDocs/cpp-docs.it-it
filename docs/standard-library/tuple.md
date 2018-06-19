---
title: '&lt;tuple&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- <tuple>
dev_langs:
- C++
helpviewer_keywords:
- tuple header
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ba25328b86a51e34cba60bd55b63ce2eab696d6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33864584"
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
