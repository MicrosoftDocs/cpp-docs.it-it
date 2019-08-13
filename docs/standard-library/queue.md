---
title: '&lt;queue&gt;'
ms.date: 11/04/2016
f1_keywords:
- <queue>
helpviewer_keywords:
- queue header
ms.assetid: 24fcf350-eb0e-48cf-9fef-978be1aeda1f
ms.openlocfilehash: 506ab5fccd44ad37a08a9f741f44f24d3a85b87d
ms.sourcegitcommit: 16c0392fc8d96e814c3a40b0c5346d7389aeb525
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/12/2019
ms.locfileid: "68957000"
---
# <a name="ltqueuegt"></a>&lt;queue&gt;

Definisce l'oggetto priority_queue delle classi modello, nonché la coda e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<queue>

**Spazio dei nomi:** std

> [!NOTE]
> Anche \<la libreria > della coda usa `#include <initializer_list>` l'istruzione.

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator!=](../standard-library/queue-operators.md#op_neq)|Verifica se l'oggetto queue a sinistra dell'operatore non è uguale all'oggetto queue a destra.|
|[operator<](../standard-library/queue-operators.md#op_lt)|Verifica se l'oggetto queue a sinistra dell'operatore è minore dell'oggetto queue a destra.|
|[operator\<=](../standard-library/queue-operators.md#op_gt_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è minore o uguale all'oggetto queue a destra.|
|[operator==](../standard-library/queue-operators.md#op_eq_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è uguale all'oggetto queue a destra.|
|[operator>](../standard-library/queue-operators.md#op_gt)|Verifica se l'oggetto queue a sinistra dell'operatore è maggiore dell'oggetto queue a destra.|
|[operator>=](../standard-library/queue-operators.md#op_gt_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è maggiore o uguale all'oggetto queue a destra.|

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe queue](../standard-library/queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso agli elementi anteriore e posteriore di un tipo di contenitore sottostante.|
|[Classe priority_queue](../standard-library/priority-queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso all'elemento superiore di un tipo di contenitore sottostante, che è sempre il più grande.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
