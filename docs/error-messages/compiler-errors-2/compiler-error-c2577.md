---
title: Errore del compilatore C2577
ms.date: 11/04/2016
f1_keywords:
- C2577
helpviewer_keywords:
- C2577
ms.assetid: fc79ef83-8362-40a2-9257-8037c3195ce4
ms.openlocfilehash: 0a7c711fa399c1bf31bc9de61f0b77ad19172a73
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87206913"
---
# <a name="compiler-error-c2577"></a>Errore del compilatore C2577

' member ': il distruttore/finalizzatore non può avere un tipo restituito

Un distruttore o un finalizzatore non può restituire un valore **`void`** o un altro tipo. Rimuovere l' **`return`** istruzione dalla definizione del distruttore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2577.

```cpp
// C2577.cpp
// compile with: /c
class A {
public:
   A() {}
   ~A(){
      return 0;   // C2577
   }
};
```
