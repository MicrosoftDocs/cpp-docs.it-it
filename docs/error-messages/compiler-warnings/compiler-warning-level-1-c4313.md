---
title: "Avviso del compilatore (livello 1) C4313 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4313"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4313"
ms.assetid: bcf64191-e2cf-452e-97b4-423fcec2d07c
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4313
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': 'format specifier' nella stringa di formato è in conflitto con l'argomento number di tipo 'type'  
  
 Esiste un conflitto tra il formato specificato e il valore che si sta passando.  Ad esempio, si è passato un parametro a 64 bit a un identificatore di formato %d non qualificato, che prevede un parametro integer a 32 bit.  Questo avviso è attivo solo quando il codice viene compilato per destinazioni a 64 bit.  
  
## Esempio  
 L'esempio di codice seguente genera l'errore C4313 quando viene eseguita la compilazione per una destinazione a 64 bit.  
  
```  
// C4313.cpp  
// Compile by using: cl /W1 C4313.cpp  
#include <stdio.h>  
int main() {  
   int * pI = 0;  
   printf("%d", pI);   // C4313 on 64-bit platform code  
   // Try one of the following lines instead:  
   // printf("%p\n", pI);  
   // printf("%Id\n", pI);   // %I64d expects 64-bits of information  
}  
```