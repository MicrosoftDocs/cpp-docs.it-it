---
title: "_ReturnAddress | Microsoft Docs"
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
  - "_ReturnAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ReturnAddress (funzione intrinseca)"
  - "ReturnAddress (funzione intrinseca)"
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ReturnAddress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Specifici di Microsoft  
 La funzione intrinseca di `_ReturnAddress` fornisce l'indirizzo della funzione chiamante che verrà eseguita dopo che il controllo viene restituito al chiamante.  
  
 Compilare il seguente programma e passaggio al debugger.  Come si esegue con il programma, annotare l'indirizzo restituito da `_ReturnAddress`.  Quindi, subito dopo la restituzione della funzione in cui `_ReturnAddress` è stato utilizzato, aprire [Procedura: utilizzare la finestra Disassembly](../Topic/How%20to:%20Use%20the%20Disassembly%20Window.md) e si noti che l'indirizzo dell'istruzione seguente essere corrispondenze eseguite l'indirizzo ha restituito da `_ReturnAddress`.  
  
 Le ottimizzazioni come inline possono influire sull'indirizzo di ritorno.  Ad esempio, se il programma di esempio seguente viene compilato con [\/Ob1](../build/reference/ob-inline-function-expansion.md), `inline_func` verrà inline nella funzione chiamante, `main`.  Pertanto, le chiamate a `_ReturnAddress` da `inline_func` e a `main` di ogni prodotti lo stesso valore.  
  
 Quando `_ReturnAddress` viene utilizzato in un programma compilato con [\/clr](../build/reference/clr-common-language-runtime-compilation.md), la funzione che contiene la chiamata di `_ReturnAddress` verrà compilata come funzione nativa.  Quando una funzione compilata come chiamate gestite nella funzione che contiene `_ReturnAddress`, `_ReturnAddress` non può comportarsi come previsto.  
  
## Requisiti  
 **File di intestazione** \<intrin.h\>  
  
## Esempio  
  
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
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [\_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)