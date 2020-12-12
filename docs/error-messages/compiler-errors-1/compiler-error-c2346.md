---
description: 'Altre informazioni su: errore del compilatore C2346'
title: Errore del compilatore C2346
ms.date: 11/04/2016
f1_keywords:
- C2346
helpviewer_keywords:
- C2346
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
ms.openlocfilehash: eb2bbda6c7f7e0c9213b35a794b915967d03321f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298370"
---
# <a name="compiler-error-c2346"></a>Errore del compilatore C2346

' Function ' non può essere compilato come Native: Reason

Il compilatore non è riuscito a compilare una funzione in MSIL.

Per ulteriori informazioni, vedere [Managed, unmanaged](../../preprocessor/managed-unmanaged.md) e [/CLR (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Rimuovere il codice nella funzione che non può essere compilato in MSIL.

1. Non compilare il modulo con **/CLR** o contrassegnare la funzione come non gestita con il pragma non gestito.

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
