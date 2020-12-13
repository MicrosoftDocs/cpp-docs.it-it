---
description: 'Altre informazioni su: _ReturnAddress'
title: _ReturnAddress
ms.date: 09/02/2019
f1_keywords:
- _ReturnAddress
helpviewer_keywords:
- _ReturnAddress intrinsic
- ReturnAddress intrinsic
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
ms.openlocfilehash: abb6b879c466372fce0ecbeb7371101e3a3ef82b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143741"
---
# <a name="_returnaddress"></a>_ReturnAddress

**Specifico di Microsoft**

La `_ReturnAddress` funzione intrinseca fornisce l'indirizzo dell'istruzione nella funzione chiamante che verrà eseguita dopo la restituzione del controllo al chiamante.

Compilare il programma seguente ed eseguire un'istruzione alla volta nel debugger. Durante l'esecuzione del programma, prendere nota dell'indirizzo restituito da `_ReturnAddress` . Quindi, immediatamente dopo la restituzione dalla funzione in cui `_ReturnAddress` è stato usato, aprire la [finestra procedura: usare la finestra Disassembly](/visualstudio/debugger/how-to-use-the-disassembly-window) e notare che l'indirizzo dell'istruzione successiva da eseguire corrisponde all'indirizzo restituito da `_ReturnAddress` .

Le ottimizzazioni, ad esempio l'incorporamento, possono influire sull'indirizzo mittente. Se, ad esempio, il programma di esempio seguente viene compilato con [/OB1](../build/reference/ob-inline-function-expansion.md), `inline_func` verrà inline nella funzione chiamante `main` . Pertanto, le chiamate a `_ReturnAddress` da `inline_func` e `main` producono ognuna lo stesso valore.

Quando `_ReturnAddress` si utilizza in un programma compilato con [/CLR](../build/reference/clr-common-language-runtime-compilation.md), la funzione contenente la `_ReturnAddress` chiamata verrà compilata come funzione nativa. Quando una funzione compilata come chiamata gestita nella funzione che contiene `_ReturnAddress` , `_ReturnAddress` potrebbe non comportarsi come previsto.

## <a name="requirements"></a>Requisiti

**File di intestazione** \<intrin.h>

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
