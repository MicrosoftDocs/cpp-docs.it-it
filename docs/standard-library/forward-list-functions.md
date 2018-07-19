---
title: Funzioni &lt;forward_list&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- forward_list/std::swap
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
ms.openlocfilehash: 097dca5d26014696e218ff6439b81e1d0349b2c5
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38966319"
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
