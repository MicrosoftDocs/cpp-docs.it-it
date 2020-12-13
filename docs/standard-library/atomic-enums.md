---
description: 'Altre informazioni su: &lt; &gt; enumerazioni atomiche'
title: Enumerazioni &lt;atomic&gt;
ms.date: 11/04/2016
f1_keywords:
- atomic/std::memory_order
ms.assetid: cd3a81c5-a19e-448f-952a-c34c717f21a9
helpviewer_keywords:
- std::memory_order
ms.openlocfilehash: 5144b936cbea8e16b5bf344f6fb776eefa6b09ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149526"
---
# <a name="ltatomicgt-enums"></a>Enumerazioni &lt;atomic&gt;

## <a name="memory_order-enum"></a><a name="memory_order_enum"></a> Enumerazione memory_order

Fornisce nomi simbolici per le operazioni di sincronizzazione sulle posizioni di memoria. Queste operazioni influiscono sul modo in cui gli assegnamenti in un thread diventano visibili in un altro.

```cpp
typedef enum memory_order {
    memory_order_relaxed,
    memory_order_consume,
    memory_order_acquire,
    memory_order_release,
    memory_order_acq_rel,
    memory_order_seq_cst,
} memory_order;
```

### <a name="enumeration-members"></a>Membri dell'enumerazione

|Nome|Description|
|-|-|
|`memory_order_relaxed`|Nessun ordinamento necessario.|
|`memory_order_consume`|Un'operazione di caricamento funge da operazione di utilizzo sulla posizione di memoria.|
|`memory_order_acquire`|Un'operazione di caricamento funge da operazione di acquisizione sulla posizione di memoria.|
|`memory_order_release`|Un'operazione di archiviazione funge da operazione di rilascio sulla posizione di memoria.|
|`memory_order_acq_rel`|Combina `memory_order_acquire` e `memory_order_release`.|
|`memory_order_seq_cst`|Combina `memory_order_acquire` e `memory_order_release`. Gli accessi alla memoria contrassegnati come `memory_order_seq_cst` devono essere coerenti sequenzialmente.|

## <a name="see-also"></a>Vedere anche

[\<atomic>](../standard-library/atomic.md)
