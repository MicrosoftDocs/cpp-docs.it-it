---
title: function (C/C++)
ms.date: 11/04/2016
f1_keywords:
- function_CPP
- vc-pragma.function
helpviewer_keywords:
- function pragma
- pragmas, function
ms.assetid: cbd1bd60-fabf-4b5a-9c3d-2d9f4b871365
ms.openlocfilehash: c57ff2053b3c1fd52474c7eb0dd598641632f789
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027259"
---
# <a name="function-cc"></a>function (C/C++)
Specifica la generazione delle chiamate alle funzioni specificate nell'elenco di argomenti del pragma.

## <a name="syntax"></a>Sintassi

```
#pragma function( function1 [, function2, ...] )
```

## <a name="remarks"></a>Note

Se si usa la `intrinsic` pragma (o /Oi) per indicare al compilatore di generare funzioni intrinseche (funzioni intrinseche vengono generare come codice inline, non come chiamate di funzione), è possibile usare il **funzione** pragma per forzare in modo esplicito un chiamata di funzione. Una volta che viene rilevato un pragma funzione, verrà applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata. L'effetto continua fino alla fine del file di origine o alla rilevazione di un `intrinsic` pragma specificando la stessa funzione intrinseca. Il **funzione** pragma può essere usato solo all'esterno di una funzione, ovvero a livello globale.

Per gli elenchi delle funzioni che hanno formati intrinseci, vedere [#pragma intrinseco](../preprocessor/intrinsic.md).

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

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)