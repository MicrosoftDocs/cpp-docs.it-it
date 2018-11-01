---
title: Avviso del compilatore (livello 1) C4177
ms.date: 11/04/2016
f1_keywords:
- C4177
helpviewer_keywords:
- C4177
ms.assetid: 2b05a5b3-696e-4f21-818e-227b9335e748
ms.openlocfilehash: 5c8f3dc37c76ad0d016108b792ee61c67cce63d1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50529221"
---
# <a name="compiler-warning-level-1-c4177"></a>Avviso del compilatore (livello 1) C4177

\#il pragma pragma deve essere in ambito globale

Il pragma [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) non deve essere utilizzato in ambito locale. Il pragma **pragma** non sarà valido fino a quando non viene rilevato l'ambito globale dopo l'ambito corrente.

L'esempio seguente genera l'errore C4177:

```
// C4177.cpp
// compile with: /W1
// #pragma bss_seg("global")   // OK

int main() {
   #pragma bss_seg("local")    // C4177
}
```