---
title: Enumerazioni &lt;memory&gt;
ms.date: 11/04/2016
f1_keywords:
- memory/std::pointer_safety
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
ms.openlocfilehash: 507628628fcf8bbf8993ce5beb1e02c28ff82147
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222251"
---
# <a name="ltmemorygt-enums"></a>Enumerazioni &lt;memory&gt;

## <a name="pointer_safety-enumeration"></a><a name="pointer_safety"></a>Enumerazione pointer_safety

Enumerazione dei valori possibili restituiti da `get_pointer_safety`.

```cpp
class pointer_safety {
   relaxed,
   preferred,
   strict
};
```

### <a name="remarks"></a>Osservazioni

L'ambito **`enum`** definisce i valori che possono essere restituiti da `get_pointer_safety()` :

`relaxed` -- i puntatori non derivati in modo sicuro (ovviamente puntatori da dichiarare o oggetti allocati) sono considerati come quelli derivati in modo sicuro.

`preferred` -- come nella situazione precedente, ma i puntatori non derivati in modo sicuro non possono essere dereferenziati.

`strict` -- i puntatori non derivati in modo sicuro possono essere gestiti in modo diverso rispetto a quelli derivati in modo sicuro.
