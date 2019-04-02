---
title: Errore del compilatore C3253
ms.date: 11/04/2016
f1_keywords:
- C3253
helpviewer_keywords:
- C3253
ms.assetid: da40be26-0f78-4730-8727-ad11cddf8869
ms.openlocfilehash: 5d161dfab8dff48a1ddd5a8a5036c0bb4d5549aa
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58773385"
---
# <a name="compiler-error-c3253"></a>Errore del compilatore C3253

'function': errore dell'override esplicito

Override esplicito è stato specificato correttamente. Ad esempio, è possibile specificare un'implementazione per una sostituzione che è anche possibile specificare come pure. Per altre informazioni, vedere [esegue l'override esplicito](../../extensions/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3253:

```
// C3253.cpp
// compile with: /clr
public interface struct I {
   void a();
   void b();
   void c();
};

public ref struct R : I {
   virtual void a() = 0, I::a {}   // C3253
   virtual void b() = I::a {}   // OK
   virtual void c() = 0;   // OK
};
```