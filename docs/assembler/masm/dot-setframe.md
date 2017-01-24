---
title: ".SETFRAME | Microsoft Docs"
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
  - ".SETFRAME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".SETFRAME directive"
ms.assetid: eaa9b5ed-4daa-4f1e-bdb6-100758007ab3
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .SETFRAME
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Riempie il campo e l'offset del registro del frame le informazioni di rimuovere utilizzando il log specificato \(`reg`\) e compensare \(`offset`\).  L'offset deve essere un multiplo di 16 e minore o uguale a 240.  Questa direttiva consente inoltre di generare un'eccezione `UWOP_SET_FPREG` voce di codice epilogo per il log specificato utilizzando offset corrente di prologo.  
  
## Sintassi  
  
```  
.SETFRAME reg, offset  
```  
  
## Note  
 .SETFRAME Consente agli utenti di ml64.exe specificare come una funzione del frame rimossi e solo che è consentito all'interno del prologo, che si estende da [PROC](../../assembler/masm/proc.md) Dichiarazione di FRAME a  [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.  Queste direttive non generano codice; generano solo `.xdata` e  `.pdata`.  .SETFRAME Deve essere preceduto dalle istruzioni che effettivamente implementano le azioni essere rimosso.  È opportuno eseguire il wrapping delle direttive di rimuovere che il codice da rimuovere in una macro per assicurarsi che il contratto.  
  
 Per ulteriori informazioni, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Esempio  
  
### Descrizione  
 Di seguito viene illustrato come utilizzare un puntatore ai frame:  
  
### Codice  
  
```  
; ml64 frmex2.asm /link /entry:frmex2 /SUBSYSTEM:CONSOLE  
_text SEGMENT  
frmex2 PROC FRAME  
   push rbp  
.pushreg rbp  
   sub rsp, 010h  
.allocstack 010h  
   mov rbp, rsp  
.setframe rbp, 0  
.endprolog  
   ; modify the stack pointer outside of the prologue (similar to alloca)  
   sub rsp, 060h  
  
   ; we can unwind from the following AV because of the frame pointer     
   mov rax, 0  
   mov rax, [rax] ; AV!  
  
   add rsp, 060h  
   add rsp, 010h  
   pop rbp  
   ret  
frmex2 ENDP  
_text ENDS  
END  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)