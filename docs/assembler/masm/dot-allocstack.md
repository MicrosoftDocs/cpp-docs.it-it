---
title: ".ALLOCSTACK | Microsoft Docs"
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
  - ".ALLOCSTACK"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".ALLOCSTACK directive"
ms.assetid: 9801594b-7ac2-4df2-a49d-07d9dd9af99e
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .ALLOCSTACK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera un'eccezione **UWOP\_ALLOC\_SMALL** oppure  **UWOP\_ALLOC\_LARGE** con la dimensione specificata per l'offset corrente in prologo.  
  
## Sintassi  
  
```  
.ALLOCSTACK size  
```  
  
## Note  
 MASM sceglierà la codifica più efficiente per una determinata dimensione.  
  
 .ALLOCSTACK Consente agli utenti di ml64.exe specificare come una funzione del frame rimossi e solo è valida all'interno del prologo, che si estende da [PROC](../../assembler/masm/proc.md) Dichiarazione di FRAME a  [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.  Queste direttive non generano codice; generano solo `.xdata` e  `.pdata`.  .ALLOCSTACK Deve essere preceduto dalle istruzioni che effettivamente implementano le azioni essere rimosso.  È opportuno eseguire il wrapping delle direttive di rimuovere che il codice da rimuovere in una macro per assicurarsi che il contratto.  
  
 `size` l'operando deve essere un multiplo di 8.  
  
 Per ulteriori informazioni, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Esempio  
 Di seguito viene illustrato come specificare un rimuovere\/gestore di eccezioni:  
  
```  
; ml64 ex3.asm /link /entry:Example1  /SUBSYSTEM:Console  
text SEGMENT  
PUBLIC Example3  
PUBLIC Example3_UW  
Example3_UW PROC NEAR  
   ; exception/unwind handler body  
  
   ret 0  
  
Example3_UW ENDP  
  
Example3 PROC FRAME : Example3_UW  
  
   sub rsp, 16  
.allocstack 16  
  
.endprolog  
  
   ; function body  
    add rsp, 16  
   ret 0  
  
Example3 ENDP  
text ENDS  
END  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)