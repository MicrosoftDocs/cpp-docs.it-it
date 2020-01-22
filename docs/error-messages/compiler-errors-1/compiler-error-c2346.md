---
title: Errore del compilatore C2346
ms.date: 11/04/2016
f1_keywords:
- C2346
helpviewer_keywords:
- C2346
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
ms.openlocfilehash: 91f2bac38166a8972193a7aaa7e84913b941c799
ms.sourcegitcommit: a930a9b47bd95599265d6ba83bb87e46ae748949
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2020
ms.locfileid: "76518322"
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

int main()
{
   S s;
}
```
