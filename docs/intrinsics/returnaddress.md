---
title: _ReturnAddress
ms.date: 09/02/2019
f1_keywords:
- _ReturnAddress
helpviewer_keywords:
- _ReturnAddress intrinsic
- ReturnAddress intrinsic
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
ms.openlocfilehash: 2a830ff1e8a2c9551dec52cf10a3d5cf126bde3b
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218055"
---
# <a name="_returnaddress"></a>_ReturnAddress

**Sezione specifica Microsoft**

La `_ReturnAddress` funzione intrinseca fornisce l'indirizzo dell'istruzione nella funzione chiamante che verrà eseguita dopo la restituzione del controllo al chiamante.

Compilare il programma seguente ed eseguire un'istruzione alla volta nel debugger. Durante l'esecuzione del programma, prendere nota dell'indirizzo restituito da `_ReturnAddress`. Quindi, immediatamente dopo la restituzione dalla funzione `_ReturnAddress` in cui è stato usato [, aprire la procedura: Utilizzare la finestra](/visualstudio/debugger/how-to-use-the-disassembly-window) Disassembly e notare che l'indirizzo dell'istruzione successiva da eseguire corrisponde all'indirizzo restituito da `_ReturnAddress`.

Le ottimizzazioni, ad esempio l'incorporamento, possono influire sull'indirizzo mittente. Se, ad esempio, il programma di esempio seguente viene compilato con [/Ob1](../build/reference/ob-inline-function-expansion.md), `inline_func` verrà inline nella funzione chiamante `main`. Pertanto, le chiamate a `_ReturnAddress` da `inline_func` e `main` producono ognuna lo stesso valore.

Quando `_ReturnAddress` si utilizza in un programma compilato con [/CLR](../build/reference/clr-common-language-runtime-compilation.md), la funzione contenente la `_ReturnAddress` chiamata verrà compilata come funzione nativa. Quando una funzione compilata come chiamata gestita nella funzione `_ReturnAddress`che `_ReturnAddress` contiene, potrebbe non comportarsi come previsto.

## <a name="requirements"></a>Requisiti

**File di intestazione** \<> intrin. h

## <a name="example"></a>Esempio

```cpp
// compiler_intrinsics__ReturnAddress.cpp
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_ReturnAddress)

__declspec(noinline)
void noinline_func(void)
{
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());
}

__forceinline
void inline_func(void)
{
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());
}

int main(void)
{
   noinline_func();
   inline_func();
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());

   return 0;
}
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
