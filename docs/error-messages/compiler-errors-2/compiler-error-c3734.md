---
description: 'Altre informazioni su: errore del compilatore C3734'
title: Errore del compilatore C3734
ms.date: 11/04/2016
f1_keywords:
- C3734
helpviewer_keywords:
- C3734
ms.assetid: 4e2afdcc-7da9-45a1-9c96-85f25e2986e8
ms.openlocfilehash: f24c81c06a0e140f7970e8a6fc96d90aae3780f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245005"
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
