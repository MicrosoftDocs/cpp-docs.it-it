---
title: Avviso del compilatore (livello 4) C4242
ms.date: 11/04/2016
f1_keywords:
- C4242
helpviewer_keywords:
- C4242
ms.assetid: 8df742e1-fbf1-42f3-8e93-c0e1c222dc7e
ms.openlocfilehash: 3123a414dc7a169d2a472dad96d659a9e56c9020
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541741"
---
# <a name="compiler-warning-level-4-c4242"></a>Avviso del compilatore (livello 4) C4242

' Identifier ': conversione da' tipo1' a' tipo2', possibile perdita di dati

I tipi sono diversi. La conversione dei tipi può comportare la perdita di dati. Il compilatore esegue la conversione del tipo.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Per altre informazioni su C4242, vedere [errori comuni del compilatore](/windows/win32/WinProg64/common-compiler-errors).

L'esempio seguente genera l'C4242:

```cpp
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