---
title: Errore del compilatore C3657 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3657
dev_langs:
- C++
helpviewer_keywords:
- C3657
ms.assetid: 89a28a18-4c17-43a1-bda6-deb52c32d203
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1462ac1c63104406473fde2c839d490bdfb24c6c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117036"
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