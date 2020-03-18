---
title: '&lt;elenco&gt; funzioni | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- list/std::swap
ms.openlocfilehash: 04f00a9274018432cd03917ae5485f2d395649e4
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420064"
---
# <a name="ltlistgt-functions"></a>&lt;elenco&gt; funzioni

## <a name="swap"></a>scambio

Scambia gli elementi di due elenchi.

```cpp
template <class T, class Allocator>
    void swap(list<T, Allocator>& left, list<T, Allocator>& right)
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `list`.

\ a *destra*
Oggetto di tipo `list`.

### <a name="remarks"></a>Osservazioni

Questa funzione modello esegue `left.swap(right)`.
