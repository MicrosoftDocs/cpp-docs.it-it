---
description: 'Altre informazioni su: errore del compilatore C3657'
title: Errore del compilatore C3657
ms.date: 11/04/2016
f1_keywords:
- C3657
helpviewer_keywords:
- C3657
ms.assetid: 89a28a18-4c17-43a1-bda6-deb52c32d203
ms.openlocfilehash: 6e5cf5dd0b3739acdd703e5ef11d3eb553fa9e90
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134420"
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
