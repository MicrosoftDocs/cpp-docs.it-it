---
title: '&lt;elenco&gt; funzioni | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- list/std::swap
ms.openlocfilehash: 04f00a9274018432cd03917ae5485f2d395649e4
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269023"
---
# <a name="ltlistgt-functions"></a>&lt;elenco&gt; funzioni

## <a name="swap"></a> swap

Scambia gli elementi di due elenchi.

```cpp
template <class T, class Allocator>
    void swap(list<T, Allocator>& left, list<T, Allocator>& right)
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `list`.

*Ok*\
Oggetto di tipo `list`.

### <a name="remarks"></a>Note

Questa funzione modello esegue `left.swap(right)`.
