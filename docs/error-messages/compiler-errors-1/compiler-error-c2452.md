---
title: Errore del compilatore C2452
ms.date: 11/04/2016
f1_keywords:
- C2452
helpviewer_keywords:
- C2452
ms.assetid: a4ec7642-6660-4c7a-9866-853d1cc67daf
ms.openlocfilehash: 3e2d583efa2b634cf49d8588fa398bd81f24c607
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59778568"
---
# <a name="compiler-error-c2452"></a>Errore del compilatore C2452

'type': tipo di origine non è valido per safe_cast

Il tipo di origine per [safe_cast](../../extensions/safe-cast-cpp-component-extensions.md) non è valido.  Ad esempio, tutti i tipi in un `safe_cast` operazione deve essere tipi CLR.

L'esempio seguente genera l'errore C2452:

```
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