---
description: 'Altre informazioni su: errore del compilatore C2452'
title: Errore del compilatore C2452
ms.date: 11/04/2016
f1_keywords:
- C2452
helpviewer_keywords:
- C2452
ms.assetid: a4ec7642-6660-4c7a-9866-853d1cc67daf
ms.openlocfilehash: 8d3915e9b249b53ca1cd193247ca1cf742fa7ffe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332393"
---
# <a name="compiler-error-c2452"></a>Errore del compilatore C2452

' type ': tipo di origine non valido per safe_cast

Il tipo di origine per [safe_cast](../../extensions/safe-cast-cpp-component-extensions.md) non è valido.  Tutti i tipi in un'operazione, ad esempio, `safe_cast` devono essere tipi CLR.

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
