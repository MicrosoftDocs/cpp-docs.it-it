---
description: 'Altre informazioni su: errore del compilatore C2653'
title: Errore del compilatore C2653
ms.date: 11/30/2017
f1_keywords:
- C2653
helpviewer_keywords:
- C2653
ms.assetid: 3f49e731-affd-43a0-a8d0-181db7650bc3
ms.openlocfilehash: f3be7ade8a6dcfc6aa8c5a83cc8a055fc230789d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286150"
---
# <a name="compiler-error-c2653"></a>Errore del compilatore C2653

> '*Identifier*': non è un nome di classe o di spazio dei nomi

Per la sintassi del linguaggio è necessario specificare una classe, una struttura, un'Unione o un nome di spazio dei nomi.

Questo errore può verificarsi quando si utilizza un nome che non è stato dichiarato come classe, struttura, Unione o spazio dei nomi davanti a un operatore di ambito. Per risolvere questo problema, dichiarare il nome o includere l'intestazione che dichiara il nome prima che venga usato.

C2653 è possibile anche se si tenta di definire uno *spazio* dei nomi composto, uno spazio dei nomi che contiene uno o più nomi di spazi dei nomi annidati nell'ambito. Le definizioni dello spazio dei nomi composto non sono consentite in C++ prima di C++ 17. Gli spazi dei nomi composti sono supportati a partire da Visual Studio 2015 Update 3 quando si specifica l'opzione del compilatore [/std: c + + Latest più recente](../../build/reference/std-specify-language-standard-version.md) . A partire da Visual Studio 2017 versione 15,5, il compilatore supporta le definizioni dello spazio dei nomi composto quando viene specificata l'opzione [/std: c++ 17](../../build/reference/std-specify-language-standard-version.md) .

## <a name="examples"></a>Esempio

Questo esempio genera C2653 perché viene usato un nome di ambito ma non dichiarato. Il compilatore prevede una classe, una struttura, un'Unione o un nome di spazio dei nomi prima di un operatore di ambito (::).

```cpp
// C2653.cpp
// compile with: /c
class yy {
   void func1(int i);
};

void xx::func1(int m) {}   // C2653, xx is not declared
void yy::func1(int m) {}   // OK
```

Nel codice non compilato per C++ 17 o versioni successive, gli spazi dei nomi annidati devono usare una dichiarazione dello spazio dei nomi esplicita a ogni livello di annidamento:

```cpp
// C2653b.cpp
namespace a::b {int i;}   // C2653 prior to Visual Studio 2015 Update 3,
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
