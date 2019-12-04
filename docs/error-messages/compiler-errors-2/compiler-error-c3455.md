---
title: Errore del compilatore C3455
ms.date: 11/04/2016
f1_keywords:
- C3455
helpviewer_keywords:
- C3455
ms.assetid: 218e5cfe-5391-4eeb-81c2-85c47e3a6cd2
ms.openlocfilehash: e016105a53b4020ca8ed83a95b0c9b96036b1884
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756669"
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
