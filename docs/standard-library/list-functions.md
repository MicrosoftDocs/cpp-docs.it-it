---
description: 'Altre informazioni su: &lt; elencare le &gt; funzioni'
title: '&lt;&gt;funzioni elenco | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- list/std::swap
ms.openlocfilehash: 6a94fcc916db08a510a968b66b0a0dc0cfa9b8e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97284707"
---
# <a name="ltlistgt-functions"></a>&lt;&gt;funzioni elenco

## <a name="swap"></a><a name="swap"></a> scambio

Scambia gli elementi di due elenchi.

```cpp
template <class T, class Allocator>
    void swap(list<T, Allocator>& left, list<T, Allocator>& right)
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `list`.

*Ok*\
Oggetto di tipo `list`.

### <a name="remarks"></a>Commenti

Questa funzione modello esegue `left.swap(right)`.
