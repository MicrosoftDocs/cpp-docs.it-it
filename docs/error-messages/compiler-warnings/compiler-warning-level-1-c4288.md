---
title: Del compilatore (livello 1) Avviso C4288 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4288
dev_langs:
- C++
helpviewer_keywords:
- C4288
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b8b9e82f8cb24c4635fb64c3ac0a1c82e301c086
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056488"
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