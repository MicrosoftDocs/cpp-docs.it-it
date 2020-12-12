---
description: 'Altre informazioni su: pragma function'
title: function (pragma)
ms.date: 08/29/2019
f1_keywords:
- function_CPP
- vc-pragma.function
helpviewer_keywords:
- function pragma
- pragmas, function
ms.assetid: cbd1bd60-fabf-4b5a-9c3d-2d9f4b871365
ms.openlocfilehash: 77b215458f9ffdb6be605d0ae4b239451a1fe1bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269302"
---
# <a name="function-pragma"></a>function (pragma)

Indica al compilatore di generare le chiamate alle funzioni specificate nell'elenco di argomenti del pragma, anziché incorporarli.

## <a name="syntax"></a>Sintassi

> **funzione #pragma (** *funzione1* [ **,** *funzione2* ...] **)**

## <a name="remarks"></a>Commenti

Le funzioni intrinseche vengono normalmente generate come codice inline, non come chiamate di funzione. Se si usa il [pragma intrinseco](intrinsic.md) o l'opzione del compilatore [/OI](../build/reference/oi-generate-intrinsic-functions.md) per indicare al compilatore di generare funzioni intrinseche, è possibile usare la **funzione** pragma per forzare in modo esplicito una chiamata di funzione. Quando viene visualizzato un pragma di **funzione** , questo viene applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata. L'effetto continua fino alla fine del file di origine o all'aspetto di un pragma che `intrinsic` specifica la stessa funzione intrinseca. È possibile utilizzare solo il pragma **Function** all'esterno di una funzione, a livello globale.

Per gli elenchi delle funzioni con form intrinseci, vedere [pragma intrinseco](intrinsic.md).

## <a name="example"></a>Esempio

```cpp
// pragma_directive_function.cpp
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// use intrinsic forms of memset and strlen
#pragma intrinsic(memset, strlen)

// Find first word break in string, and set remaining
// chars in string to specified char value.
char *set_str_after_word(char *string, char ch) {
   int i;
   int len = strlen(string);  /* NOTE: uses intrinsic for strlen */

   for(i = 0; i < len; i++) {
      if (isspace(*(string + i)))
         break;
   }

   for(; i < len; i++)
      *(string + i) = ch;

   return string;
}

// do not use strlen intrinsic
#pragma function(strlen)

// Set all chars in string to specified char value.
char *set_str(char *string, char ch) {
   // Uses intrinsic for memset, but calls strlen library function
   return (char *) memset(string, ch, strlen(string));
}

int main() {
   char *str = (char *) malloc(20 * sizeof(char));

   strcpy_s(str, sizeof("Now is the time"), "Now is the time");
   printf("str is '%s'\n", set_str_after_word(str, '*'));
   printf("str is '%s'\n", set_str(str, '!'));
}
```

```Output
str is 'Now************'
str is '!!!!!!!!!!!!!!!'
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
