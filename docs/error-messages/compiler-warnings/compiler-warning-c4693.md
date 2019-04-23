---
title: Avviso del compilatore C4693
ms.date: 10/25/2017
f1_keywords:
- C4693
helpviewer_keywords:
- C4693
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
ms.openlocfilehash: cac5918eb4a1689fd215e07272958eeca48247ad
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59779440"
---
# <a name="compiler-warning-c4693"></a>Avviso del compilatore C4693

> 'class': una classe astratta sealed non può avere membri di istanza 'Test'

Se un tipo è contrassegnato [sealed](../../extensions/sealed-cpp-component-extensions.md) e [astratta](../../extensions/abstract-cpp-component-extensions.md), può avere solo membri statici.

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4693.

```cpp
// C4693.cpp
// compile with: /clr /c
public ref class Public_Ref_Class sealed abstract {
public:
   void Test() {}   // C4693
   static void Test2() {}   // OK
};
```