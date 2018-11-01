---
title: Avviso del compilatore (livello 1) C4561
ms.date: 11/04/2016
f1_keywords:
- C4561
helpviewer_keywords:
- C4561
ms.assetid: 3a10c12c-601b-4b6c-9861-331fd022e021
ms.openlocfilehash: 24a3ca8b35266e93f298314f45015b7a480e2af0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50563787"
---
# <a name="compiler-warning-level-1-c4561"></a>Avviso del compilatore (livello 1) C4561

fastcall' incompatibile con il ' o clr' opzione: la conversione in '\_stdcall '

Il [fastcall](../../cpp/fastcall.md) convenzione di chiamata di funzione non può essere utilizzato con il [/clr](../../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore. Il compilatore ignora le chiamate a `__fastcall`. Per risolvere questo problema, rimuovere le chiamate a **fastcall** o compilare senza **/clr**.

L'esempio seguente genera l'errore C4561:

```
// C4561.cpp
// compile with: /clr /W1 /c
// processor: x86
void __fastcall Func(void *p);   // C4561, remove __fastcall to resolve
```