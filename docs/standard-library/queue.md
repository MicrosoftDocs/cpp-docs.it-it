---
title: '&lt;queue&gt;'
ms.date: 11/04/2016
f1_keywords:
- <queue>
helpviewer_keywords:
- queue header
ms.assetid: 24fcf350-eb0e-48cf-9fef-978be1aeda1f
ms.openlocfilehash: a41d34b45264472a5c8c88ca0619e78444dd8aec
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88832594"
---
# <a name="ltqueuegt"></a>&lt;queue&gt;

Definisce i modelli di classe priority_queue e Queue e diversi modelli di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<queue>

**Spazio dei nomi:** std

> [!NOTE]
> La \<queue> libreria usa anche l' `#include <initializer_list>` istruzione.

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore! =](../standard-library/queue-operators.md#op_neq)|Verifica se l'oggetto queue a sinistra dell'operatore non è uguale all'oggetto queue a destra.|
|[operatore<](../standard-library/queue-operators.md#op_lt)|Verifica se l'oggetto queue a sinistra dell'operatore è minore dell'oggetto queue a destra.|
|[operatore\<=](../standard-library/queue-operators.md#op_gt_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è minore o uguale all'oggetto queue a destra.|
|[operatore = =](../standard-library/queue-operators.md#op_eq_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è uguale all'oggetto queue a destra.|
|[operatore>](../standard-library/queue-operators.md#op_gt)|Verifica se l'oggetto queue a sinistra dell'operatore è maggiore dell'oggetto queue a destra.|
|[operatore>=](../standard-library/queue-operators.md#op_gt_eq)|Verifica se l'oggetto queue a sinistra dell'operatore è maggiore o uguale all'oggetto queue a destra.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[Classe Queue](../standard-library/queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso agli elementi anteriore e posteriore di un tipo di contenitore sottostante.|
|[Classe priority_queue](../standard-library/priority-queue-class.md)|Classe di adattatori di contenitori di modelli che fornisce una restrizione di funzionalità, limitando l'accesso all'elemento superiore di un tipo di contenitore sottostante, che è sempre il più grande.|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
