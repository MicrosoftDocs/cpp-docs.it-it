---
description: 'Altre informazioni su: errore del compilatore C3749'
title: Errore del compilatore C3749
ms.date: 11/04/2016
f1_keywords:
- C3749
helpviewer_keywords:
- C3749
ms.assetid: 3d26b468-4757-41b8-b5a2-78022a5295fb
ms.openlocfilehash: 247f98214a3f2ec8a496f1da11633f53916328f3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340177"
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
