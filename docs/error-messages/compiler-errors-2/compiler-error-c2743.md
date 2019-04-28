---
title: Errore del compilatore C2743
ms.date: 11/04/2016
f1_keywords:
- C2743
helpviewer_keywords:
- C2743
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
ms.openlocfilehash: 03cd7c13e093be5073b3df7e7cf29dda870bc47a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62228930"
---
# <a name="compiler-error-c2743"></a>Errore del compilatore C2743

'type': non è possibile intercettare un tipo nativo con distruttore clrcall o costruttore di copia

Un modulo compilato con **/clr** tentato di intercettare un'eccezione di tipo nativo e in cui distruttore del tipo o il costruttore di copia Usa `__clrcall` convenzione di chiamata.

Quando viene compilato con **/clr**, la gestione delle eccezioni si aspetta che le funzioni membro in un tipo nativo può essere [cdecl](../../cpp/cdecl.md) e non [clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro che utilizzano `__clrcall` convenzione di chiamata non può essere intercettato in un modulo compilato con **/clr**.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2743.

```
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