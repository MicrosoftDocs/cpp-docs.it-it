---
description: 'Altre informazioni su: errore del compilatore C2743'
title: Errore del compilatore C2743
ms.date: 11/04/2016
f1_keywords:
- C2743
helpviewer_keywords:
- C2743
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
ms.openlocfilehash: 2619d4a0dd2b89d36f11944b59c2ab4993d95fd0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123058"
---
# <a name="compiler-error-c2743"></a>Errore del compilatore C2743

' type ': Impossibile intercettare un tipo nativo con __clrcall distruttore o un costruttore di copia

Un modulo compilato con **/CLR** ha tentato di intercettare un'eccezione di tipo nativo e il distruttore o il costruttore di copia del tipo utilizza la `__clrcall` convenzione di chiamata.

Quando viene compilato con **/CLR**, la gestione delle eccezioni prevede che le funzioni membro in un tipo nativo siano [__cdecl](../../cpp/cdecl.md) e non [__clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro che usano `__clrcall` la convenzione di chiamata non possono essere rilevati in un modulo compilato con **/CLR**.

Per altre informazioni, vedere [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2743.

```cpp
// C2743.cpp
// compile with: /clr
public struct S {
   __clrcall ~S() {}
};

public struct T {
   ~T() {}
};

int main() {
   try {}
   catch(S) {}   // C2743
   // try the following line instead
   // catch(T) {}

   try {}
   catch(S*) {}   // OK
}
```
