---
title: "function (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "function_CPP"
  - "vc-pragma.function"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "function (pragma)"
  - "pragma, funzione"
ms.assetid: cbd1bd60-fabf-4b5a-9c3d-2d9f4b871365
caps.latest.revision: 10
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# function (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica la generazione delle chiamate alle funzioni specificate nell'elenco di argomenti del pragma.  
  
## Sintassi  
  
```  
  
#pragma function( function1 [, function2, ...] )  
```  
  
## Note  
 Se si utilizza il pragma **intrinsic** \(o \/Oi\) per indicare al compilatore di generare funzioni intrinseche \(le funzioni intrinseche vengono generare come codice inline, non come chiamate di funzione\), è possibile utilizzare il pragma **function** per forzare in modo esplicito una chiamata di funzione.  Una volta che viene rilevato un pragma funzione, verrà applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata.  L'effetto continua fino alla fine del file di origine o alla rilevazione di un pragma **intrinsic** che specifica la stessa funzione intrinseca.  Il pragma **function** può essere utilizzato solo all'esterno di una funzione a livello globale.  
  
 Per gli elenchi delle funzioni che hanno formati intrinseci, vedere [\#pragma intrinsic](../preprocessor/intrinsic.md).  
  
## Esempio  
  
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
  
  **str is 'Now\*\*\*\*\*\*\*\*\*\*\*\*'**  
**str is '\!\!\!\!\!\!\!\!\!\!\!\!\!\!\!'**   
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)