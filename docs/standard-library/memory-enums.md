---
title: Enumerazioni &lt;memory&gt;
ms.date: 11/04/2016
f1_keywords:
- memory/std::pointer_safety
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
ms.openlocfilehash: 5c5f87905b772ef277a72ef11defef8cb1001661
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50495004"
---
# <a name="ltmemorygt-enums"></a>Enumerazioni &lt;memory&gt;

||
|-|
|[pointer_safety](#pointer_safety)|

## <a name="pointer_safety"></a>  Enumerazione pointer_safety

Enumerazione dei valori possibili restituiti da `get_pointer_safety`.

classe pointer_safety { relaxed, preferred, strict };

### <a name="remarks"></a>Note

L'ambito **enum** definisce i valori che possono essere restituiti da `get_pointer_safety()`:

`relaxed` -- i puntatori non derivati in modo sicuro (ovviamente puntatori da dichiarare o oggetti allocati) sono considerati come quelli derivati in modo sicuro.

`preferred` -- come nella situazione precedente, ma i puntatori non derivati in modo sicuro non possono essere dereferenziati.

`strict` -- i puntatori non derivati in modo sicuro possono essere gestiti in modo diverso rispetto a quelli derivati in modo sicuro.

## <a name="see-also"></a>Vedere anche

[\<memory>](../standard-library/memory.md)<br/>
