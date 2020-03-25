---
title: Avviso del compilatore (livello 1) C4177
ms.date: 11/04/2016
f1_keywords:
- C4177
helpviewer_keywords:
- C4177
ms.assetid: 2b05a5b3-696e-4f21-818e-227b9335e748
ms.openlocfilehash: fd7e4bc42b38b335585a3f057aef521b5cf76b05
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199953"
---
# <a name="compiler-warning-level-1-c4177"></a>Avviso del compilatore (livello 1) C4177

\#pragma pragma deve trovarsi nell'ambito globale

Il pragma [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) non deve essere utilizzato in ambito locale. Il pragma **pragma** non sarà valido fino a quando non viene rilevato l'ambito globale dopo l'ambito corrente.

L'esempio seguente genera l'errore C4177:

```cpp
// C4177.cpp
// compile with: /W1
// #pragma bss_seg("global")   // OK

int main() {
   #pragma bss_seg("local")    // C4177
}
```
