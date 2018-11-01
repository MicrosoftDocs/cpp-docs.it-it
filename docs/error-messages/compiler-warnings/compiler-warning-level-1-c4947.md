---
title: Avviso del compilatore (livello 1) C4947
ms.date: 11/04/2016
f1_keywords:
- C4947
helpviewer_keywords:
- C4947
ms.assetid: 5a1d484e-b4c7-4de2-a145-d8dcfc2fc1d2
ms.openlocfilehash: d18632e51a53205d151bb84b2cf2051d2882211f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50584756"
---
# <a name="compiler-warning-level-1-c4947"></a>Avviso del compilatore (livello 1) C4947

'type_or_member': contrassegnato come obsoleto

Un membro o un tipo è stato contrassegnato come obsoleto con la classe <xref:System.ObsoleteAttribute> .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4947:

```cpp
// C4947.cpp
// compile with: /clr /W1
// C4947 expected
using namespace System;

[System::ObsoleteAttribute]
ref struct S {
   [System::ObsoleteAttribute]
   int i;

   [System::ObsoleteAttribute]
   void mFunc(){}
};

// Any reference to Func1 should generate a warning
[System::ObsoleteAttribute]
Int32 Func1(Int32 a, Int32 b) {
   return (a + b);
}

// Any reference to Func2 should generate a warning with  message
[System::ObsoleteAttribute("Will be removed in next version")]
Int32 Func2(Int32 a, Int32 b) {
   return (a + b);
}

int main() {
   Int32 MyInt1 = ::Func1(2, 2);
   Int32 MyInt2 = ::Func2(2, 2);

   S^ s = gcnew S();
   s->i = 10;
   s->mFunc();
}
```