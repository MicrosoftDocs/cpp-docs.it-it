---
title: "Chiamata di funzioni C++ in assembly inline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__asm (parola chiave) [C++], funzioni chiamanti"
  - "chiamate di funzione, funzioni C++"
  - "chiamate di funzione, assembly inline"
  - "funzioni [C++], chiamata in assembly inline"
  - "assembly inline, funzioni chiamanti"
  - "Visual C++, funzioni"
ms.assetid: f8a8d568-d175-4e23-9b24-36ef60a4cab3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Chiamata di funzioni C in assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Un blocco `__asm` può chiamare le funzioni C, incluse le routine di libreria C.  Nell'esempio seguente viene chiamata la routine di libreria `printf`:  
  
```  
// InlineAssembler_Calling_C_Functions_in_Inline_Assembly.cpp  
// processor: x86  
#include <stdio.h>  
  
char format[] = "%s %s\n";  
char hello[] = "Hello";  
char world[] = "world";  
int main( void )  
{  
   __asm  
   {  
      mov  eax, offset world  
      push eax  
      mov  eax, offset hello  
      push eax  
      mov  eax, offset format  
      push eax  
      call printf  
      //clean up the stack so that main can exit cleanly  
      //use the unused register ebx to do the cleanup  
      pop  ebx  
      pop  ebx  
      pop  ebx  
   }  
}  
```  
  
 Poiché gli argomenti di funzione vengono passati nello stack, si inseriscono semplicemente gli argomenti necessari, puntatori di stringa nell'esempio precedente, prima di chiamare la funzione.  Gli argomenti sono inseriti in ordine inverso, pertanto si staccano dallo stack nell'ordine desiderato.  Per emulare l'istruzione C  
  
```  
printf( format, hello, world );  
```  
  
 l'esempio inserisce i puntatori a `world`, `hello` e `format`, in questo ordine, quindi chiamare `printf`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)