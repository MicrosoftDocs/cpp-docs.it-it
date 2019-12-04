---
title: Errore del compilatore C2346
ms.date: 11/04/2016
f1_keywords:
- C2346
helpviewer_keywords:
- C2346
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
ms.openlocfilehash: fc2aeac02ecc3f29406c2288051ca6cd9d3a4923
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760010"
---
# <a name="compiler-error-c2346"></a>Errore del compilatore C2346

' Function ' non può essere compilato come Native: Reason

Il compilatore non è riuscito a compilare una funzione in MSIL.

Per ulteriori informazioni, vedere [Managed, unmanaged](../../preprocessor/managed-unmanaged.md) e [/CLR (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Rimuovere il codice nella funzione che non può essere compilato in MSIL.

1. Non compilare il modulo con **/CLR**o contrassegnare la funzione come non gestita con il pragma non gestito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2346.

```cpp
// C2346.cpp
// processor: x86
// compile with: /clr
// C2346 expected
struct S
{
   S()
   {
      { __asm { nop } }
   }
   virtual __clrcall ~S() { }
};

void main()
{
   S s;
}
```
