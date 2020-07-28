---
title: Avviso del compilatore (livello 1) C4288
ms.date: 11/04/2016
f1_keywords:
- C4288
helpviewer_keywords:
- C4288
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
ms.openlocfilehash: a732614ac5d71168ece8ada8e468afa5ba54c1f9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220080"
---
# <a name="compiler-warning-level-1-c4288"></a>Avviso del compilatore (livello 1) C4288

> utilizzata estensione non standard:' var ': la variabile di controllo del ciclo dichiarata nel ciclo for viene utilizzata all'esterno dell'ambito del ciclo for. è in conflitto con la dichiarazione nell'ambito esterno

Quando si esegue la compilazione con [`/Ze`](../../build/reference/za-ze-disable-language-extensions.md) e **/Zc: forScope-**, una variabile dichiarata in un **`for`** ciclo è stata usata dopo l'ambito del ciclo [for](../../cpp/for-statement-cpp.md). Un'estensione Microsoft del linguaggio C++ consente a questa variabile di rimanere nell'ambito e C4288 ricorda che la prima dichiarazione della variabile non viene utilizzata.

[`/Zc:forScope`](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md)Per informazioni su come specificare l'estensione Microsoft nei **`for`** cicli con/ze., vedere.

L'esempio seguente genera l'C4288:

```cpp
// C4288.cpp
// compile with: /W1 /c /Zc:forScope-
int main() {
   int i = 0;    // not used in this program
   for (int i = 0 ; ; ) ;
   i++;   // C4288 using for-loop declaration of i
}
```
