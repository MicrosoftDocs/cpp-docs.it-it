---
title: ReturnAddress | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _ReturnAddress
dev_langs:
- C++
helpviewer_keywords:
- _ReturnAddress intrinsic
- ReturnAddress intrinsic
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5c739590e5e208d9f83fa059f191ae80612a0dbd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380873"
---
# <a name="returnaddress"></a>_ReturnAddress

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Il `_ReturnAddress` intrinseco fornisce l'indirizzo dell'istruzione nella funzione chiamante che verrà eseguita dopo il controllo ritorna al chiamante.

Compilare il seguente programma e il passaggio attraverso di esso nel debugger. Durante l'esecuzione del programma, prendere nota dell'indirizzo restituito da `_ReturnAddress`. Quindi, immediatamente dopo aver restituito dalla funzione in cui `_ReturnAddress` è stato usato, aprire la [procedura: utilizzare la finestra Disassembly](/visualstudio/debugger/how-to-use-the-disassembly-window) e notare che l'indirizzo dell'istruzione successiva da eseguire corrisponda all'indirizzo restituito da `_ReturnAddress`.

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