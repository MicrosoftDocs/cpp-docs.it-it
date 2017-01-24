---
title: ".PUSHREG | Microsoft Docs"
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
  - ".PUSHREG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".PUSHREG directive"
ms.assetid: e0c83758-dfed-40ea-afe6-cb833c8d2d30
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .PUSHREG
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera un'eccezione `UWOP_PUSH_NONVOL` voce di codice epilogo del numero specificato del registro utilizzando offset corrente in prologo.  
  
## Sintassi  
  
```  
.PUSHREG register  
```  
  
## Note  
 .PUSHREG Consente agli utenti di ml64.exe specificare come una funzione del frame rimossi e solo che è consentito all'interno del prologo, che si estende da [PROC](../../assembler/masm/proc.md) Dichiarazione di FRAME a  [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.  Queste direttive non generano codice; generano solo `.xdata` e  `.pdata`.  .PUSHREG Deve essere preceduto dalle istruzioni che effettivamente implementano le azioni essere rimosso.  È opportuno eseguire il wrapping delle direttive di rimuovere che il codice da rimuovere in una macro per assicurarsi che il contratto.  
  
 Per ulteriori informazioni, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Esempio  
  
### Descrizione  
 Di seguito viene illustrato come inserire i tegisters non volatili.  
  
### Codice  
  
```  
; ml64 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE  
_text SEGMENT  
Example1 PROC FRAME  
   push r10  
.pushreg r10  
   push r15  
.pushreg r15  
   push rbx  
.pushreg rbx  
   push rsi  
.pushreg rsi  
.endprolog  
   ; rest of function ...  
   ret  
Example1 ENDP  
_text ENDS  
END  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)