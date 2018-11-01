---
title: Pseudo operazioni in modalità raw
ms.date: 11/04/2016
ms.assetid: 4def1a0e-ec28-4736-91fb-fac95fba1f36
ms.openlocfilehash: 04dfe4d59c05dfcf22d0e64063fbc4953cbcb2f8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50538030"
---
# <a name="raw-pseudo-operations"></a>Pseudo operazioni in modalità raw

In questo argomento elenca le operazioni di pseudo.

## <a name="remarks"></a>Note

|Operazione pseudo|Descrizione|
|----------------------|-----------------|
|FRAME PROC [: il parametro ehandler]|Cause MASM per generare una funzione in pdata la voce di tabella e le informazioni contenute in. XData di rimozione per strutturata di una funzione il comportamento di rimozione delle eccezioni.  Se il parametro ehandler è presente, questa procedura viene inserita nel. xdata come gestore specifico del linguaggio.<br /><br /> Quando viene usato l'attributo FRAME, deve essere seguita da una. Direttiva ENDPROLOG.  Se la funzione è una funzione foglia (come definito in [tipi di funzione](../build/function-types.md)) non è necessario, perché sono il resto di queste pseudo-operazioni l'attributo FRAME.|
|. PUSHREG reg|Genera una voce di codice UWOP_PUSH_NONVOL rimozione per il numero di registro specificato con l'offset corrente nel prologo.<br /><br /> Questo deve essere usato solo con registri integer non volatili.  Per i push di registri volatili, usare un. 8 ALLOCSTACK, invece|
|. Reg SETFRAME, offset|Compila nel frame registra campo e l'offset nelle informazioni di rimozione tramite il registro specificato e l'offset. L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera anche una rimozione codice UWOP_SET_FPREG per il registro specificato con l'offset corrente di prologo.|
|. Dimensioni ALLOCSTACK|Genera una voce UWOP_ALLOC_SMALL o UWOP_ALLOC_LARGE con le dimensioni specificate per l'offset corrente nel prologo.<br /><br /> L'operando di dimensioni deve essere un multiplo di 8.|
|. Reg SAVEREG, offset|Genera un UWOP_SAVE_NONVOL o una voce di codice di rimozione UWOP_SAVE_NONVOL_FAR per il registro specificato e l'offset con l'offset corrente di prologo. MASM sceglierà la codifica più efficiente.<br /><br /> Offset deve essere positivo e un multiplo di 8.  L'offset è relativo alla base del frame della stored procedure, disponibile a livello generale in RSP, o, se si usa un puntatore ai frame, i puntatori ai frame non in scala.|
|. Reg SAVEXMM128, offset|Genera un UWOP_SAVE_XMM128 o una voce di codice di rimozione UWOP_SAVE_XMM128_FAR per il registro XMM specificato e l'offset con l'offset corrente di prologo. MASM sceglierà la codifica più efficiente.<br /><br /> Offset deve essere positivo e un multiplo di 16.  L'offset è relativo alla base del frame della stored procedure, disponibile a livello generale in RSP, o, se si usa un puntatore ai frame, i puntatori ai frame non in scala.|
|. PUSHFRAME [code]|Genera una voce di codice di rimozione UWOP_PUSH_MACHFRAME. Se il codice facoltativo viene specificato, la voce di codice di rimozione ha un modificatore di 1. In caso contrario, il modificatore è 0.|
|.ENDPROLOG|Segnala la fine delle dichiarazioni di prologo.  Deve essere presente nei primi 255 byte della funzione.|

Ecco un prologo della funzione di esempio con un utilizzo corretto della maggior parte dei codici operativi:

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