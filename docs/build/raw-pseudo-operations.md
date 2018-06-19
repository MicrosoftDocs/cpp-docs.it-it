---
title: Raw Pseudo operazioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 4def1a0e-ec28-4736-91fb-fac95fba1f36
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff3b9dd065b4bf1f64950f97237dec08b10d23cd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369929"
---
# <a name="raw-pseudo-operations"></a>Pseudo operazioni in modalità raw
Questo argomento elenca le pseudo operazioni.  
  
## <a name="remarks"></a>Note  
  
|Pseudo operazione|Descrizione|  
|----------------------|-----------------|  
|PROC FRAME [: il parametro ehandler]|Cause MASM per generare una funzione tabella voce pdata e. XData informazioni di rimozione per strutturata di una funzione il comportamento di rimozione di gestione delle eccezioni.  Se il parametro ehandler è presente, questa procedura viene inserita in. xdata come gestore specifico del linguaggio.<br /><br /> Quando viene utilizzato l'attributo FRAME, deve essere seguito da un. Direttiva ENDPROLOG.  Se la funzione è una funzione foglia (come definito in [tipi di funzione](../build/function-types.md)) è non è necessario il resto di queste pseudo-operazioni l'attributo FRAME.|  
|. Reg PUSHREG|Genera una voce di codice di rimozione UWOP_PUSH_NONVOL per il numero di registro specificato con l'offset corrente nel prologo.<br /><br /> Deve essere utilizzato solo con registri integer non volatili.  Per gli inserimenti di registri volatili, utilizzare un. 8 ALLOCSTACK, invece|  
|. Reg SETFRAME, offset|Operazioni di inserimento nel frame registrare campo e l'offset in informazioni di rimozione utilizzando il registro specificato e l'offset. L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera inoltre una rimozione codice UWOP_SET_FPREG per il registro specificato utilizzando l'offset corrente di prologo.|  
|. ALLOCSTACK dimensione|Genera una voce UWOP_ALLOC_SMALL o UWOP_ALLOC_LARGE con la dimensione specificata per l'offset corrente nel prologo.<br /><br /> L'operando di dimensioni deve essere un multiplo di 8.|  
|. SAVEREG reg, offset|Genera un UWOP_SAVE_NONVOL o una voce di codice di rimozione UWOP_SAVE_NONVOL_FAR per il registro specificato e l'offset utilizzando l'offset corrente di prologo. MASM sceglierà la codifica più efficiente.<br /><br /> Offset deve essere positivo e un multiplo di 8.  Offset è relativo alla base del frame della stored procedure, che è in genere in RSP, o, se si utilizza un puntatore ai frame, il puntatore ai frame non in scala.|  
|. SAVEXMM128 reg, offset|Genera un UWOP_SAVE_XMM128 o una voce di codice di rimozione UWOP_SAVE_XMM128_FAR per il registro XMM specificato e l'offset utilizzando l'offset corrente di prologo. MASM sceglierà la codifica più efficiente.<br /><br /> Offset deve essere positivo e un multiplo di 16.  Offset è relativo alla base del frame della stored procedure, che è in genere in RSP, o, se si utilizza un puntatore ai frame, il puntatore ai frame non in scala.|  
|. PUSHFRAME [codice]|Genera una voce di codice di rimozione UWOP_PUSH_MACHFRAME. Se il codice facoltativo viene specificato, la voce di codice di rimozione viene assegnata un modificatore di 1. In caso contrario, il modificatore è 0.|  
|.ENDPROLOG|Segnala la fine delle dichiarazioni di prologo.  Deve trovarsi nei primi 255 byte della funzione.|  
  
 Di seguito è riportato un prologo di funzione di esempio con l'utilizzo corretto della maggior parte dei codici operativi:  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Helper di rimozione per MASM](../build/unwind-helpers-for-masm.md)