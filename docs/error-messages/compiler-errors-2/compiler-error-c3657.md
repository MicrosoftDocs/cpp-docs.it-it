---
title: Errore del compilatore C3657
ms.date: 11/04/2016
f1_keywords:
- C3657
helpviewer_keywords:
- C3657
ms.assetid: 89a28a18-4c17-43a1-bda6-deb52c32d203
ms.openlocfilehash: b1a72fc3d96a5ef3a591fb61d0b2839fb5c1b05b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758269"
---
# <a name="compiler-error-c3657"></a>Errore del compilatore C3657

i distruttori non possono eseguire l'override esplicito o essere sottoposti a override in modo esplicito

Non è possibile eseguire l'override esplicito di distruttori o finalizzatori. Per ulteriori informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3657.

```cpp
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
