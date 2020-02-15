---
title: Enumerazioni &lt;memory&gt;
ms.date: 11/04/2016
f1_keywords:
- memory/std::pointer_safety
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
ms.openlocfilehash: 78cdb0fe6c0d9487500804d21fe4ad4870fcad0f
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77257832"
---
# <a name="ltmemorygt-enums"></a>Enumerazioni &lt;memory&gt;

## <a name="pointer_safety"></a>Enumerazione pointer_safety

Enumerazione dei valori possibili restituiti da `get_pointer_safety`.

```cpp
class pointer_safety {
   relaxed,
   preferred,
   strict
};
```

### <a name="remarks"></a>Osservazioni

L' **enumerazione** con ambito definisce i valori che possono essere restituiti da `get_pointer_safety()`:

`relaxed` -- i puntatori non derivati in modo sicuro (ovviamente puntatori da dichiarare o oggetti allocati) sono considerati come quelli derivati in modo sicuro.

`preferred` -- come nella situazione precedente, ma i puntatori non derivati in modo sicuro non possono essere dereferenziati.

`strict` -- i puntatori non derivati in modo sicuro possono essere gestiti in modo diverso rispetto a quelli derivati in modo sicuro.
