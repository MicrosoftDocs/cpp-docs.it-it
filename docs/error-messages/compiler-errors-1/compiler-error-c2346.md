---
title: Errore del compilatore C2346 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2346
dev_langs:
- C++
helpviewer_keywords:
- C2346
ms.assetid: 246145be-5645-4cd6-867c-e3bc39e33dca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5ec916bcdce1a43c597d8cfae10e5393cbeb99ee
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46108614"
---
# <a name="compiler-error-c2346"></a>Errore del compilatore C2346

'function' non può essere compilata come nativa: motivo

Il compilatore non è riuscito a compilare una funzione in MSIL.

Per altre informazioni, vedere [managed, unmanaged](../../preprocessor/managed-unmanaged.md) e [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Rimuovere il codice nella funzione che non può essere compilata in MSIL.

1. Non compilare il modulo con **/clr**, o contrassegnare la funzione come non gestiti con il pragma non gestito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2346.

```
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