---
title: '&lt;queue&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- <queue>
dev_langs:
- C++
helpviewer_keywords:
- queue header
ms.assetid: 24fcf350-eb0e-48cf-9fef-978be1aeda1f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7ba139e2b50f1dd7c9887701a522a002173c21ee
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltqueuegt"></a>&lt;queue&gt;

Definisce l'oggetto priority_queue delle classi modello, nonché la coda e diversi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <queue>

```

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator!=](../standard-library/queue-operators.md#op_neq)|Verifica se l'oggetto queue a sinistra dell'operatore non è uguale all'oggetto queue a destra.|
|[operator<](../standard-library/queue-operators.md#op_lt)|Verifica se l'oggetto queue a sinistra dell'operatore è minore dell'oggetto queue a destra.|
|[operator\<=](../standard-library/queue-operators.md#op_gt_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è minore o uguale all'oggetto queue a destra.|
|[operator==](../standard-library/queue-operators.md#op_eq_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è uguale all'oggetto queue a destra.|
|[operator>](../standard-library/queue-operators.md#op_gt)|Verifica se l'oggetto queue a sinistra dell'operatore è maggiore dell'oggetto queue a destra.|
|[operator>=](../standard-library/queue-operators.md#op_gt_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è maggiore o uguale all'oggetto queue a destra.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe queue](../standard-library/queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso agli elementi anteriore e posteriore di un tipo di contenitore sottostante.|
|[Classe priority_queue](../standard-library/priority-queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso all'elemento superiore di un tipo di contenitore sottostante, che è sempre il più grande.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
