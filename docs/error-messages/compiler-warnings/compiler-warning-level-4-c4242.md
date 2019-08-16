---
title: Avviso del compilatore (livello 4) C4242
ms.date: 11/04/2016
f1_keywords:
- C4242
helpviewer_keywords:
- C4242
ms.assetid: 8df742e1-fbf1-42f3-8e93-c0e1c222dc7e
ms.openlocfilehash: ed145444d6eec583c448a3a49167ca1f82644f0b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510003"
---
# <a name="compiler-warning-level-4-c4242"></a>Avviso del compilatore (livello 4) C4242

' Identifier ': conversione da' tipo1' a' tipo2', possibile perdita di dati

I tipi sono diversi. La conversione dei tipi può comportare la perdita di dati. Il compilatore esegue la conversione del tipo.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Per altre informazioni su C4242, vedere [errori comuni del compilatore](/windows/win32/WinProg64/common-compiler-errors).

L'esempio seguente genera l'C4242:

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