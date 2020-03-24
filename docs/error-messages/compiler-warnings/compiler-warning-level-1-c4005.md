---
title: Avviso del compilatore (livello 1) C4005
ms.date: 11/04/2016
f1_keywords:
- C4005
helpviewer_keywords:
- C4005
ms.assetid: 7f2dc79a-9fcb-4d5b-be61-120d9cb487ad
ms.openlocfilehash: 4e95f8deeb61c5a4d56e0643beb6a746f848e33e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164729"
---
# <a name="compiler-warning-level-1-c4005"></a>Avviso del compilatore (livello 1) C4005

' Identifier ': ridefinizione della macro

L'identificatore della macro è definito due volte. Il compilatore usa la seconda definizione di macro.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Definizione di una macro nella riga di comando e nel codice con una direttiva `#define`.

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
