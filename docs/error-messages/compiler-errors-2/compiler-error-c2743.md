---
title: Errore del compilatore C2743 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2743
dev_langs:
- C++
helpviewer_keywords:
- C2743
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4217a1e7a8475362c654ac34b6a345846341ec35
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056489"
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