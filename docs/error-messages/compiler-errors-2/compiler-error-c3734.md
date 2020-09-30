---
title: Errore del compilatore C3734
ms.date: 11/04/2016
f1_keywords:
- C3734
helpviewer_keywords:
- C3734
ms.assetid: 4e2afdcc-7da9-45a1-9c96-85f25e2986e8
ms.openlocfilehash: 0d49eae823eb64f97e7276d432e161b3de21d725
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91510070"
---
# <a name="compiler-error-c3734"></a>Errore del compilatore C3734

'class': una classe gestita o WinRT non può essere una coclasse

L'attributo [coclass](../../windows/attributes/coclass.md) non può essere usato con le classi gestite o WinRT.

L'esempio seguente genera l'errore C3734 e mostra come risolverlo:

```cpp
// C3734.cpp
// compile with: /clr /c
[module(name="x")];

[coclass]
ref class CMyClass {   // C3734 remove the ref keyword to resolve
};
```
