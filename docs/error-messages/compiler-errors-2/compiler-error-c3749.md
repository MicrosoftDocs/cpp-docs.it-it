---
title: Errore del compilatore C3749
ms.date: 11/04/2016
f1_keywords:
- C3749
helpviewer_keywords:
- C3749
ms.assetid: 3d26b468-4757-41b8-b5a2-78022a5295fb
ms.openlocfilehash: 75138bf8b090b7770d5bee918790efc095d76627
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761842"
---
# <a name="compiler-error-c3749"></a>Errore del compilatore C3749

' attribute ': non è possibile usare un attributo personalizzato all'interno di una funzione

Impossibile utilizzare un attributo personalizzato all'interno di una funzione. Per ulteriori informazioni sugli attributi personalizzati, vedere l'argomento [attributo](../../windows/attributes/attribute.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3749:

```cpp
// C3749a.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::All)]
public ref struct ABC : public Attribute {
   ABC() {}
};

void f1() { [ABC]; };  // C3749
```
