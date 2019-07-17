---
title: '&lt;queue&gt;'
ms.date: 11/04/2016
f1_keywords:
- <queue>
helpviewer_keywords:
- queue header
ms.assetid: 24fcf350-eb0e-48cf-9fef-978be1aeda1f
ms.openlocfilehash: 641ab1bfe99360320509b806149fcedfe1068879
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68240357"
---
# <a name="ltqueuegt"></a>&lt;queue&gt;

Definisce l'oggetto priority_queue delle classi modello, nonché la coda e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<queue>

**Spazio dei nomi:** std

> [!NOTE]
> Il \<coda > libreria Usa inoltre il `#include <initializer_list>` istruzione.

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

### <a name="functions"></a>Funzioni

|||
|-|-|
|[swap]()||

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe queue](../standard-library/queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso agli elementi anteriore e posteriore di un tipo di contenitore sottostante.|
|[Classe priority_queue](../standard-library/priority-queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso all'elemento superiore di un tipo di contenitore sottostante, che è sempre il più grande.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
