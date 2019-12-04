---
title: Errore del compilatore C2743
ms.date: 11/04/2016
f1_keywords:
- C2743
helpviewer_keywords:
- C2743
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
ms.openlocfilehash: d679ce0df0d43772a6c32aa8e00869ac1a4a082b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759646"
---
# <a name="compiler-error-c2743"></a>Errore del compilatore C2743

' type ': Impossibile intercettare un tipo nativo con __clrcall distruttore o un costruttore di copia

Un modulo compilato con **/CLR** ha tentato di intercettare un'eccezione di tipo nativo e il distruttore del tipo o il costruttore di copia utilizza `__clrcall` convenzione di chiamata.

Quando viene compilato con **/CLR**, la gestione delle eccezioni prevede che le funzioni membro in un tipo nativo siano [__cdecl](../../cpp/cdecl.md) e non [__clrcall](../../cpp/clrcall.md). Non è possibile intercettare tipi nativi con funzioni membro che usano `__clrcall` convenzione di chiamata in un modulo compilato con **/CLR**.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

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
