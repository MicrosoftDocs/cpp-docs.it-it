---
title: funzione (C/C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- function_CPP
- vc-pragma.function
dev_langs:
- C++
helpviewer_keywords:
- function pragma
- pragmas, function
ms.assetid: cbd1bd60-fabf-4b5a-9c3d-2d9f4b871365
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1e24dac191e05cc3b47192cb6ec7fb0fc48dd447
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33849483"
---
# <a name="function-cc"></a>function (C/C++)
Specifica la generazione delle chiamate alle funzioni specificate nell'elenco di argomenti del pragma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma function( function1 [, function2, ...] )  
```  
  
## <a name="remarks"></a>Note  
 Se si utilizza il **intrinseco** pragma (o /Oi) per indicare al compilatore di generare funzioni intrinseche (le funzioni intrinseche vengono generate come codice inline, non come chiamate di funzione), è possibile utilizzare il **funzione** (pragma) Per forzare in modo esplicito una chiamata di funzione. Una volta che viene rilevato un pragma funzione, verrà applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata. L'effetto continua fino alla fine del file di origine o alla rilevazione di un **intrinseco** pragma specificando la stessa funzione intrinseca. Il **funzione** pragma può essere utilizzato solo all'esterno di una funzione, ovvero a livello globale.  
  
 Per gli elenchi delle funzioni che hanno formati intrinseci, vedere [#pragma intrinseco](../preprocessor/intrinsic.md).  
  
## <a name="example"></a>Esempio  
  
```  
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