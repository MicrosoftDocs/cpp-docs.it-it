---
title: .SETFRAME
ms.date: 08/30/2018
f1_keywords:
- .SETFRAME
helpviewer_keywords:
- .SETFRAME directive
ms.assetid: eaa9b5ed-4daa-4f1e-bdb6-100758007ab3
ms.openlocfilehash: a21dda496d32abcfeb4692d0228afdbcfd4e5ebb
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397924"
---
# <a name="setframe"></a>.SETFRAME

Inserisce il campo Registro frame e l'offset nelle informazioni di rimozione utilizzando il registro (*reg*) e l'offset (*offset*) specificati. L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera anche una voce di codice di rimozione `UWOP_SET_FPREG` per il registro specificato usando l'offset del prologo corrente.

## <a name="syntax"></a>Sintassi

> **. Seframe** *reg*, *offset*

## <a name="remarks"></a>Note

**. Seframe** consente agli utenti di ml64. exe di specificare la modalità di rimozione di una funzione di frame ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](../../assembler/masm/proc.md) a [. Direttiva ENDPROLOG](../../assembler/masm/dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. **. Il segramma** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="sample"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato come utilizzare un puntatore al frame:

### <a name="code"></a>Codice

```asm
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

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
