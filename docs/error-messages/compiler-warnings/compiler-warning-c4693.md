---
description: 'Altre informazioni su: avviso del compilatore C4693'
title: Avviso del compilatore C4693
ms.date: 10/25/2017
f1_keywords:
- C4693
helpviewer_keywords:
- C4693
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
ms.openlocfilehash: 114809e1f73eb3d4e3481f0baa348d5eb478f4f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315101"
---
# <a name="compiler-warning-c4693"></a>Avviso del compilatore C4693

> 'class': una classe astratta sealed non può avere membri di istanza 'Test'

Se un tipo è contrassegnato come [sealed](../../extensions/sealed-cpp-component-extensions.md) e [abstract](../../extensions/abstract-cpp-component-extensions.md), può avere solo membri statici.

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md).

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
