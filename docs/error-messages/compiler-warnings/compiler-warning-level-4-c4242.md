---
title: Avviso del compilatore (livello 4) C4242
ms.date: 11/04/2016
f1_keywords:
- C4242
helpviewer_keywords:
- C4242
ms.assetid: 8df742e1-fbf1-42f3-8e93-c0e1c222dc7e
ms.openlocfilehash: e0582f3dfdd223b4571e361dc69fae1990aeea1c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498215"
---
# <a name="compiler-warning-level-4-c4242"></a>Avviso del compilatore (livello 4) C4242

'identifier': conversione da 'type1' a 'type2'. possibile perdita di dati

I tipi sono diversi. Conversione del tipo può comportare una perdita di dati. Il compilatore effettua la conversione del tipo.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Per altre informazioni sull'avviso C4242, vedere [errori comuni del compilatore](/windows/desktop/WinProg64/common-compiler-errors).

L'esempio seguente genera l'avviso C4242:

```
// C4242.cpp
// compile with: /W4
#pragma warning(4:4242)
int func() {
   return 0;
}

int main() {
   char a;
   a = func();   // C4242, return type and variable type do not match
}
```