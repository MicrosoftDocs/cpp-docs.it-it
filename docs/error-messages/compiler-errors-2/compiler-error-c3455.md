---
description: 'Altre informazioni su: errore del compilatore C3455'
title: Errore del compilatore C3455
ms.date: 11/04/2016
f1_keywords:
- C3455
helpviewer_keywords:
- C3455
ms.assetid: 218e5cfe-5391-4eeb-81c2-85c47e3a6cd2
ms.openlocfilehash: ae450f385111fd6fa6f7f5655d04f01f893b8fd3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113636"
---
# <a name="compiler-error-c3455"></a>Errore del compilatore C3455

'attribute': nessuno dei costruttori di attributo corrispondente agli argomenti

È stato usato un valore non valido per dichiarare un attributo.  Per altre informazioni, vedere [attribute](../../windows/attributes/attribute.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3455.

```cpp
// C3455.cpp
// compile with: /clr /c
using namespace System;

[attribute("MyAt")]   // C3455
// try the following line instead
// [attribute(All)]
ref struct MyAttr {
   MyAttr() {}
};
```
