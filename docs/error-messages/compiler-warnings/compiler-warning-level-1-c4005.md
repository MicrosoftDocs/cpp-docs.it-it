---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4005'
title: Avviso del compilatore (livello 1) C4005
ms.date: 11/04/2016
f1_keywords:
- C4005
helpviewer_keywords:
- C4005
ms.assetid: 7f2dc79a-9fcb-4d5b-be61-120d9cb487ad
ms.openlocfilehash: a8de4974d87eb5d8396085bb79dfbfe14a177602
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325987"
---
# <a name="compiler-warning-level-1-c4005"></a>Avviso del compilatore (livello 1) C4005

' Identifier ': ridefinizione della macro

L'identificatore della macro è definito due volte. Il compilatore usa la seconda definizione di macro.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Definizione di una macro nella riga di comando e nel codice con una `#define` direttiva.

1. Macro importate dai file di inclusione.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Rimuovere una delle definizioni.

1. Usare una direttiva [#undef](../../preprocessor/hash-undef-directive-c-cpp.md) prima della seconda definizione.

L'esempio seguente genera l'C4005:

```cpp
// C4005.cpp
// compile with: /W1 /EHsc
#include <iostream>
using namespace std;

#define TEST "test1"
#define TEST "test2"   // C4005 delete or rename to resolve the warning

int main() {
   cout << TEST << endl;
}
```
