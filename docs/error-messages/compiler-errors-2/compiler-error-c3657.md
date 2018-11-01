---
title: Errore del compilatore C3657
ms.date: 11/04/2016
f1_keywords:
- C3657
helpviewer_keywords:
- C3657
ms.assetid: 89a28a18-4c17-43a1-bda6-deb52c32d203
ms.openlocfilehash: 209bf779122f38326cb3958ed83a2061deb64185
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50463401"
---
# <a name="compiler-error-c3657"></a>Errore del compilatore C3657

i distruttori non possono eseguire l'override esplicito o essere sottoposto a override esplicito

I distruttori o i finalizzatori non possono essere sostituiti in modo esplicito. Per altre informazioni, vedere [esegue l'override esplicito](../../windows/explicit-overrides-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3657.

```
// C3657.cpp
// compile with: /clr
public ref struct I {
   virtual ~I() { }
   virtual void a();
};

public ref struct D : I {
   virtual ~D() = I::~I {}   // C3657
   virtual void a() = I::a {}   // OK
};
```