---
title: Enumerazioni &lt;atomic&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- atomic/std::memory_order
ms.assetid: cd3a81c5-a19e-448f-952a-c34c717f21a9
caps.latest.revision: 11
helpviewer_keywords:
- std::memory_order
manager: ghogen
ms.openlocfilehash: 59cd642bf1a74c2a3c07cb72b4ee072e3e4514eb
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltatomicgt-enums"></a>Enumerazioni &lt;atomic&gt;

## <a name="memory_order_enum"></a>  Enumerazione memory_order

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

|||
|-|-|
|`memory_order_relaxed`|Nessun ordinamento necessario.|
|`memory_order_consume`|Un'operazione di caricamento funge da operazione di utilizzo sulla posizione di memoria.|
|`memory_order_acquire`|Un'operazione di caricamento funge da operazione di acquisizione sulla posizione di memoria.|
|`memory_order_release`|Un'operazione di archiviazione funge da operazione di rilascio sulla posizione di memoria.|
|`memory_order_acq_rel`|Combina `memory_order_acquire` e `memory_order_release`.|
|`memory_order_seq_cst`|Combina `memory_order_acquire` e `memory_order_release`. Gli accessi alla memoria contrassegnati come `memory_order_seq_cst` devono essere coerenti sequenzialmente.|

## <a name="see-also"></a>Vedere anche

[\<atomic>](../standard-library/atomic.md)<br/>
