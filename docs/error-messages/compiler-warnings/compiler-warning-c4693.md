---
title: Avviso del compilatore C4693
ms.date: 10/25/2017
f1_keywords:
- C4693
helpviewer_keywords:
- C4693
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
ms.openlocfilehash: 71c3db18b400ce94bff3c643d6728a6613061039
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165132"
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
