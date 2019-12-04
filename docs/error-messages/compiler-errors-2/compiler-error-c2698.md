---
title: Errore del compilatore C2698
ms.date: 11/04/2016
f1_keywords:
- C2698
helpviewer_keywords:
- C2698
ms.assetid: 3ebfe395-c20b-4c56-9980-ca9ed8653382
ms.openlocfilehash: 6129ff691f804b31fdb8cb487ac4609e4bca6ef2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755187"
---
# <a name="compiler-error-c2698"></a>Errore del compilatore C2698

la dichiarazione using per ' Declaration 1' non può coesistere con la dichiarazione using esistente per ' Declaration 2'

Quando si dispone di una [dichiarazione using](../../cpp/using-declaration.md) per un membro dati, qualsiasi dichiarazione using nello stesso ambito che usa lo stesso nome non è consentita, perché è possibile eseguire l'overload solo delle funzioni.

L'esempio seguente genera l'C2698:

```cpp
// C2698.cpp
struct A {
   int x;
};

struct B {
   int x;
};

struct C : A, B {
   using A::x;
   using B::x;   // C2698
}
```
