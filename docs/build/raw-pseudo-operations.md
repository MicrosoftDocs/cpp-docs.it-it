---
title: "Pseudo operazioni in modalit&#224; raw | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4def1a0e-ec28-4736-91fb-fac95fba1f36
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Pseudo operazioni in modalit&#224; raw
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento sono elencate le pseudo operazioni.  
  
## Note  
  
|Pseudo operazione|Descrizione|  
|-----------------------|-----------------|  
|PROC FRAME \[:ehandler\]|Fa sì che MASM generi una voce nella tabella delle funzioni in .pdata e le informazioni di rimozione in .xdata per il comportamento della fase di rimozione nella gestione delle eccezioni strutturata di una funzione.  Se il parametro ehandler è presente, questa procedura viene inserita in .xdata come gestore specifico del linguaggio.<br /><br /> Quando si utilizza l'attributo FRAME, la procedura deve essere seguita da una direttiva .ENDPROLOG.  Se si tratta di una funzione foglia, come definito in [Tipi di funzioni](../build/function-types.md), l'attributo FRAME non è necessario. Questo è valido anche per il resto delle seguenti pseudo operazioni.|  
|.PUSHREG reg|Genera una voce di codice di rimozione UWOP\_PUSH\_NONVOL per il numero di registro specificato utilizzando l'offset corrente nel prologo.<br /><br /> Questa istruzione deve essere utilizzata soltanto con registri integer non volatili.  Per gli inserimenti di registri volatili, utilizzare in alternativa un'istruzione .ALLOCSTACK 8.|  
|.SETFRAME reg, offset|Inserisce il campo Frame Register e l'offset nelle informazioni di rimozione utilizzando il registro e l'offset specificati.  L'offset deve essere un multiplo di 16 e minore o uguale a 240.  Questa istruzione genera anche una voce di codice di rimozione UWOP\_SET\_FPREG per il registro specificato tramite l'offset corrente nel prologo.|  
|.ALLOCSTACK dimensione|Genera una voce UWOP\_ALLOC\_SMALL o UWOP\_ALLOC\_LARGE con la dimensione specificata per l'offset corrente nel prologo.<br /><br /> L'operando "dimensione" deve essere un multiplo di 8.|  
|.SAVEREG reg, offset|Genera una voce di codice di rimozione UWOP\_SAVE\_NONVOL o UWOP\_SAVE\_NONVOL\_FAR per il registro e l'offset specificati utilizzando l'offset corrente nel prologo.  MASM sceglierà la codifica più efficiente.<br /><br /> L'offset deve essere positivo e un multiplo di 8.  L'offset viene calcolato rispetto alla base del frame della procedura, in genere in RSP, oppure, se si utilizza un puntatore ai frame, rispetto al puntatore ai frame non scalato.|  
|.SAVEXMM128 reg, offset|Genera una voce di codice di rimozione UWOP\_SAVE\_XMM128 o UWOP\_SAVE\_XMM128\_FAR per il registro XMM e l'offset specificati utilizzando l'offset corrente nel prologo.  MASM sceglierà la codifica più efficiente.<br /><br /> L'offset deve essere positivo e un multiplo di 16.  L'offset viene calcolato rispetto alla base del frame della procedura, in genere in RSP, oppure, se si utilizza un puntatore ai frame, rispetto al puntatore ai frame non scalato.|  
|.PUSHFRAME \[codice\]|Genera una voce di codice di rimozione UWOP\_PUSH\_MACHFRAME.  Se il codice facoltativo è specificato, alla voce di codice di rimozione viene assegnato un modificatore pari a 1.  In caso contrario, il modificatore è pari a 0.|  
|.ENDPROLOG|Indica la fine delle dichiarazioni del prologo.  Questa istruzione deve trovarsi nei primi 255 byte della funzione.|  
  
 Di seguito è riportato un esempio di prologo di funzione, in cui è illustrato l'utilizzo corretto della maggior parte dei codici operativi:  
  
```  
sample PROC FRAME     
   db      048h; emit a REX prefix, to enable hot-patching  
push rbp  
.pushreg rbp  
sub rsp, 040h  
.allocstack 040h     
lea rbp, [rsp+020h]  
.setframe rbp, 020h  
movdqa [rbp], xmm7  
.savexmm128 xmm7, 020h;the offset is from the base of the frame  
;not the scaled offset of the frame  
mov [rbp+018h], rsi  
.savereg rsi, 038h  
mov [rsp+010h], rdi  
.savereg rdi, 010h; you can still use RSP as the base of the frame  
; or any other register you choose  
.endprolog  
  
; you can modify the stack pointer outside of the prologue (similar to alloca)  
; because we have a frame pointer.  
; if we didn’t have a frame pointer, this would be illegal  
; if we didn’t make this modification,  
; there would be no need for a frame pointer  
  
sub rsp, 060h  
  
; we can unwind from the following AV because of the frame pointer  
  
mov rax, 0  
mov rax, [rax] ; AV!  
  
; restore the registers that weren’t saved with a push  
; this isn’t part of the official epilog, as described in section 2.5  
  
movdqa xmm7, [rbp]  
mov rsi, [rbp+018h]  
mov rdi, [rbp-010h]  
  
; Here’s the official epilog  
  
lea rsp, [rbp-020h]  
pop rbp  
ret  
sample ENDP  
```  
  
## Vedere anche  
 [Helper di rimozione per MASM](../build/unwind-helpers-for-masm.md)