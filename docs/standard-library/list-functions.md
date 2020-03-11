---
title: '&lt;elenco&gt; funzioni | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- list/std::swap
ms.openlocfilehash: 04f00a9274018432cd03917ae5485f2d395649e4
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78874428"
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
