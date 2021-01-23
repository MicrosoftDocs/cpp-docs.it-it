---
description: Altre informazioni sulla direttiva Function pragma in Microsoft C/C++
title: funzione pragma
ms.date: 01/22/2021
f1_keywords:
- function_CPP
- vc-pragma.function
helpviewer_keywords:
- function pragma
- pragma, function
no-loc:
- pragma
ms.openlocfilehash: 3d4b1e2f50cd118e613235271428588ac585affc
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712830"
---
# <a name="function-no-locpragma"></a>`function` pragma

Indica al compilatore di generare chiamate alle funzioni specificate nell' pragma elenco di argomenti di, anziché incorporarli.

## <a name="syntax"></a>Sintassi

> **`#pragma function(`***funzione1* [ **`,`** *funzione2* ...]**`)`**

## <a name="remarks"></a>Osservazioni

Le funzioni intrinseche vengono normalmente generate come codice inline, non come chiamate di funzione. Se si usa l' [ `intrinsic` pragma](intrinsic.md) opzione del [`/Oi`](../build/reference/oi-generate-intrinsic-functions.md) compilatore o per indicare al compilatore di generare funzioni intrinseche, è possibile usare **`function`** pragma per forzare in modo esplicito una chiamata di funzione. Una volta **`function`** pragma visualizzato, viene applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata. L'effetto continua fino alla fine del file di origine o all'aspetto di un oggetto che `intrinsic` pragma specifica la stessa funzione intrinseca. È possibile utilizzare solo all' **`function`** pragma esterno di una funzione, a livello globale.

Per gli elenchi delle funzioni con form intrinseci, vedere [ `intrinsic` pragma ](intrinsic.md).

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

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
