---
title: Avviso del compilatore (livello 1) C4288
ms.date: 11/04/2016
f1_keywords:
- C4288
helpviewer_keywords:
- C4288
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
ms.openlocfilehash: d8769f5663ca0bde9048e52d4579012dfccab0a1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207095"
---
# <a name="compiler-warning-level-1-c4288"></a>Avviso del compilatore (livello 1) C4288

utilizzata estensione non standard: 'var': variabile di controllo ciclo dichiarata nel ciclo for e viene usato all'esterno dell'ambito del ciclo for; è in conflitto con la dichiarazione in ambito esterno

Durante la compilazione con [/Ze](../../build/reference/za-ze-disable-language-extensions.md) e **/Zc:forscope-**, una variabile dichiarata in un **per** ciclo è stato usato dopo la [per](../../cpp/for-statement-cpp.md)-ambito del ciclo. Un'estensione Microsoft del linguaggio C++ consente questa variabile deve rimanere nell'ambito e C4288 viene indicato che non viene utilizzata la prima dichiarazione della variabile.

Visualizzare [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) per informazioni su come specificare l'estensione di Microsoft nel **per** cicli con /Ze.

L'esempio seguente genera l'errore C4288:

```
// C4288.cpp
// compile with: /W1 /c /Zc:forScope-
int main() {
   int i = 0;    // not used in this program
   for (int i = 0 ; ; ) ;
   i++;   // C4288 using for-loop declaration of i
}
```