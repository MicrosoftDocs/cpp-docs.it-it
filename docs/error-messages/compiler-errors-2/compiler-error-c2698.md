---
description: 'Altre informazioni su: errore del compilatore C2698'
title: Errore del compilatore C2698
ms.date: 11/04/2016
f1_keywords:
- C2698
helpviewer_keywords:
- C2698
ms.assetid: 3ebfe395-c20b-4c56-9980-ca9ed8653382
ms.openlocfilehash: a787c43e7a885734f4c6a2d76aa16d51e19615c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326630"
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
