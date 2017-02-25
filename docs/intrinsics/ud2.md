---
title: "__ud2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__ud2"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UD2 (istruzione)"
  - "__ud2 (funzione intrinseca)"
ms.assetid: 0831cd5a-8b65-402e-bb57-11e1d5d7ffd2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# __ud2
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera un'istruzione non definita.  
  
## Sintassi  
  
```  
void __ud2();  
```  
  
## Note  
 Il processore genera un'eccezione non valida di codice operativo se si esegue un'istruzione non definita.  
  
 La funzione di `__ud2` equivale all'istruzione macchina di `UD2` ed è disponibile solo in modalità kernel.  Per ulteriori informazioni, ricerca del documento, il “manuale di sviluppo di software di architettura Intel, volume 2: Riferimento dell'insieme di istruzioni,„ [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) del sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__ud2`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Esempio  
 Nell'esempio seguente viene eseguita un'istruzione non definita, che genera un'eccezione.  Il gestore di eccezioni quindi modificare il codice restituito da zero a uno.  
  
```  
// __ud2_intrinsic.cpp  
#include <stdio.h>  
#include <intrin.h>  
#include <excpt.h>  
// compile with /EHa  
  
int main() {  
  
// Initialize the return code to 0.  
 int ret = 0;  
  
// Attempt to execute an undefined instruction.  
  printf("Before __ud2(). Return code = %d.\n", ret);  
  __try {   
  __ud2();   
  }  
  
// Catch any exceptions and set the return code to 1.  
  __except(EXCEPTION_EXECUTE_HANDLER){  
  printf("  In the exception handler.\n");  
  ret = 1;  
  }  
  
// Report the value of the return code.   
  printf("After __ud2().  Return code = %d.\n", ret);  
  return ret;  
}  
```  
  
  **prima di \_\_ud2 \(\).**  
 **codice restituito \= 0.**  
 **Il gestore di eccezioni.**  
 **dopo \_\_ud2 \(\).**  
 **codice restituito \= 1.**   
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)