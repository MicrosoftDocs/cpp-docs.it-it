---
title: Errore del compilatore C2653
ms.date: 11/30/2017
f1_keywords:
- C2653
helpviewer_keywords:
- C2653
ms.assetid: 3f49e731-affd-43a0-a8d0-181db7650bc3
ms.openlocfilehash: d4a3a8a74483317b87e16458f44016f0aeca1379
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50471149"
---
# <a name="compiler-error-c2653"></a>Errore del compilatore C2653

> «*identificatore*': non è un nome di classe o dello spazio dei nomi

La sintassi del linguaggio richiede una classe, struttura, unione o dello spazio dei nomi qui.

Questo errore può verificarsi quando si usa un nome che non è stato dichiarato come una classe, struttura, unione o dello spazio dei nomi davanti a un operatore di ambito. Per risolvere questo problema, controllare il nome o includere l'intestazione che dichiara il nome prima di utilizzarlo.

C2653 è anche possibile se si prova a definire un *spazi dei nomi composti*, uno spazio dei nomi contenente uno o più nomi di ambito annidato dello spazio dei nomi. Composta dello spazio dei nomi le definizioni non sono consentite in C++ prima di c++17. Gli spazi dei nomi composti sono supportate a partire in Visual Studio 2015 Update 3, quando si specifica la [/std: c + + più recente](../../build/reference/std-specify-language-standard-version.md) opzione del compilatore. A partire da Visual C++ 2017 versione 15.5, il compilatore supporta le definizioni di spazi dei nomi composti quando la [/std: c + + 17](../../build/reference/std-specify-language-standard-version.md) opzione specificata.

## <a name="examples"></a>Esempi

In questo esempio genera C2653 perché un nome di ambito viene usato ma non dichiarato. Il compilatore prevede che una classe, struttura, unione o dello spazio dei nomi prima di un operatore di ambito (:).

```cpp
// C2653.cpp
// compile with: /c
class yy {
   void func1(int i);
};

void xx::func1(int m) {}   // C2653, xx is not declared
void yy::func1(int m) {}   // OK
```

Nel codice che non viene compilato per c++17 o versioni successive agli standard, spazi dei nomi annidati devono usare una dichiarazione esplicita dello spazio dei nomi a ogni livello di nidificazione:

```cpp
// C2653b.cpp
namespace a::b {int i;}   // C2653 prior to Visual C++ 2015 Update 3,
                          // C2429 thereafter. Use /std:c++17 or /std:c++latest to fix.

namespace a {             // Use this form for compliant code under /std:c++14 (the default)
   namespace b {          // or when using compilers before Visual Studio 2015 update 3.
      int i;
   }
}

int main() {
   a::b::i = 2;
}
```
