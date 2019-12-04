---
title: Errore del compilatore C2452
ms.date: 11/04/2016
f1_keywords:
- C2452
helpviewer_keywords:
- C2452
ms.assetid: a4ec7642-6660-4c7a-9866-853d1cc67daf
ms.openlocfilehash: 7e8173c2697a931e5b292dc974b6d1b22f376794
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744108"
---
# <a name="compiler-error-c2452"></a>Errore del compilatore C2452

' type ': tipo di origine non valido per safe_cast

Il tipo di origine per [safe_cast](../../extensions/safe-cast-cpp-component-extensions.md) non è valido.  Tutti i tipi in un'operazione di `safe_cast`, ad esempio, devono essere tipi CLR.

L'esempio seguente genera l'C2452:

```cpp
// C2452.cpp
// compile with: /clr

struct A {};
struct B : public A {};

ref struct C {};
ref struct D : public C{};

int main() {
   A a;
   safe_cast<B*>(&a);   // C2452

   // OK
   C ^ c = gcnew C;
   safe_cast<D^>(c);
}
```
