---
title: Enumerazioni &lt;memory&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- memory/std::pointer_safety
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
caps.latest.revision: 11
manager: ghogen
ms.openlocfilehash: 035175b2fea506fa341e260f042ae426e85421e4
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltmemorygt-enums"></a>Enumerazioni &lt;memory&gt;

||
|-|
|[pointer_safety](#pointer_safety)|

## <a name="pointer_safety"></a>  Enumerazione pointer_safety

Enumerazione dei valori possibili restituiti da `get_pointer_safety`.

classe pointer_safety { relaxed, preferred, strict };

### <a name="remarks"></a>Note

L'ambito di `enum` definisce i valori che possono essere restituiti da `get_pointer_safety()`:

`relaxed` -- i puntatori non derivati in modo sicuro (ovviamente puntatori da dichiarare o oggetti allocati) sono considerati come quelli derivati in modo sicuro.

`preferred` -- come nella situazione precedente, ma i puntatori non derivati in modo sicuro non possono essere dereferenziati.

`strict` -- i puntatori non derivati in modo sicuro possono essere gestiti in modo diverso rispetto a quelli derivati in modo sicuro.

## <a name="see-also"></a>Vedere anche

[\<memory>](../standard-library/memory.md)<br/>
