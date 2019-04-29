---
title: _ReturnAddress
ms.date: 11/04/2016
f1_keywords:
- _ReturnAddress
helpviewer_keywords:
- _ReturnAddress intrinsic
- ReturnAddress intrinsic
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
ms.openlocfilehash: e5013b20f9e7ed0349d940d9be61cc1b4afc95d4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390451"
---
# <a name="returnaddress"></a>_ReturnAddress

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Il `_ReturnAddress` intrinseco fornisce l'indirizzo dell'istruzione nella funzione chiamante che verrà eseguita dopo il controllo ritorna al chiamante.

Compilare il seguente programma e il passaggio attraverso di esso nel debugger. Durante l'esecuzione del programma, prendere nota dell'indirizzo restituito da `_ReturnAddress`. Quindi, immediatamente dopo aver restituito dalla funzione in cui `_ReturnAddress` è stato usato, aprire il [come: Utilizzare la finestra Disassembly](/visualstudio/debugger/how-to-use-the-disassembly-window) e notare che l'indirizzo dell'istruzione successiva da eseguire corrisponda all'indirizzo restituito da `_ReturnAddress`.

Alcune ottimizzazioni quali maggio l'incorporamento interessano l'indirizzo del mittente. Ad esempio, se il programma di esempio riportato di seguito viene compilato con [/Ob1](../build/reference/ob-inline-function-expansion.md), `inline_func` verrà resa inline alla funzione chiamante, `main`. Di conseguenza, le chiamate a `_ReturnAddress` dal `inline_func` e `main` ciascuna delle quali produce lo stesso valore.

Quando `_ReturnAddress` viene usato in un programma compilato con [/clr](../build/reference/clr-common-language-runtime-compilation.md), la funzione contenente il `_ReturnAddress` chiamata verrà compilata come una funzione nativa. Quando una funzione compilata come gestiti le chiamate in cui la funzione contenente `_ReturnAddress`, `_ReturnAddress` potrebbero non comportarsi come previsto.

## <a name="requirements"></a>Requisiti

**File di intestazione** \<intrin. h >

## <a name="example"></a>Esempio

```
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

[_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)