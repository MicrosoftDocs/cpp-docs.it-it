---
title: Errore del compilatore C2653 | Documenti Microsoft
ms.custom: ''
ms.date: 11/30/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2653
dev_langs:
- C++
helpviewer_keywords:
- C2653
ms.assetid: 3f49e731-affd-43a0-a8d0-181db7650bc3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8e1df7dd6337b1a3e363a5744181b12d94c879b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33234967"
---
# <a name="compiler-error-c2653"></a>Errore del compilatore C2653

> '*identificatore*': non è un nome di classe o spazio dei nomi

La sintassi del linguaggio richiede una classe, struttura, unione o spazio dei nomi qui.

Questo errore può verificarsi quando si utilizza un nome che non è stato dichiarato come classe, struttura, unione o dello spazio dei nomi davanti a un operatore di ambito. Per risolvere questo problema, dichiarare il nome o includere l'intestazione che dichiara il nome prima di utilizzarlo.

C2653 è anche possibile se si tenta di definire un *dello spazio dei nomi composto*, uno spazio dei nomi che contiene uno o più nomi di ambito annidato spazio dei nomi. Composta dello spazio dei nomi definizioni non sono consentite in C++ prima di C++ 17. Spazi dei nomi composti sono supportati quando si specifica, a partire da Visual Studio 2015 Update 3 il [/std:c + + più recente](../../build/reference/std-specify-language-standard-version.md) l'opzione del compilatore. A partire da Visual C++ 2017 versione 15,5, il compilatore supporta le definizioni di spazi dei nomi composti quando il [/std:c + + 17](../../build/reference/std-specify-language-standard-version.md) opzione specificata.

## <a name="examples"></a>Esempi

In questo esempio genera l'errore C2653 perché il nome di un ambito è utilizzato ma non dichiarato. Il compilatore prevede una classe, struttura, unione o spazio dei nomi prima di un operatore di ambito (:).

```cpp
// C2653.cpp
// compile with: /c
class yy {
   void func1(int i);
};

void xx::func1(int m) {}   // C2653, xx is not declared
void yy::func1(int m) {}   // OK
```

Nel codice che non viene compilato per C++ 17 standard di o versione successiva, spazi dei nomi annidati è necessario utilizzare una dichiarazione di spazio dei nomi esplicito a ogni livello di nidificazione:

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
