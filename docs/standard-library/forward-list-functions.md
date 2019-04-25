---
title: Funzioni &lt;forward_list&gt;
ms.date: 11/04/2016
f1_keywords:
- forward_list/std::swap
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
ms.openlocfilehash: b425461f1428470b04a525efdd9a702ae038a283
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62159834"
---
# <a name="ltforwardlistgt-functions"></a>Funzioni &lt;forward_list&gt;

||
|-|
|[swap](#swap)|

## <a name="swap"></a>  swap

Scambia gli elementi di due elenchi di inoltro.

```cpp
void swap(
    forward_list <Type, Allocator>& left,
    forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Oggetto di tipo `forward_list`.|
|*right*|Oggetto di tipo `forward_list`.|

### <a name="remarks"></a>Note

Questa funzione modello esegue `left.swap(right)`.

## <a name="see-also"></a>Vedere anche

[<forward_list>](../standard-library/forward-list.md)<br/>
