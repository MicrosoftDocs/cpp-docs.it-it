---
title: '&lt;queue&gt;'
ms.date: 11/04/2016
f1_keywords:
- <queue>
helpviewer_keywords:
- queue header
ms.assetid: 24fcf350-eb0e-48cf-9fef-978be1aeda1f
ms.openlocfilehash: ee35f880ddf40561cacb5c4d519f2e6291ad77a8
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689108"
---
# <a name="ltqueuegt"></a>&lt;queue&gt;

Definisce i modelli di classe priority_queue e Queue e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<queue>

**Spazio dei nomi:** std

> [!NOTE]
> Anche la libreria \<queue > USA l'istruzione `#include <initializer_list>`.

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
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md) (Riferimento per la libreria standard C++)
