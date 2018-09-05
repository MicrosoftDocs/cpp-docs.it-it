---
title: .SETFRAME | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .SETFRAME
dev_langs:
- C++
helpviewer_keywords:
- .SETFRAME directive
ms.assetid: eaa9b5ed-4daa-4f1e-bdb6-100758007ab3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 956a49e40c38310819d66e89fa6bf4492443a29c
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43691289"
---
# <a name="setframe"></a>.SETFRAME

Compila nel frame registra campo e l'offset nelle informazioni di rimozione tramite registro specificato (`reg`) e l'offset (`offset`). L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera inoltre un `UWOP_SET_FPREG` per registra l'oggetto specificato utilizzando l'offset corrente di prologo di rimozione di ingresso del codice.

## <a name="syntax"></a>Sintassi

> . Reg SETFRAME, offset

## <a name="remarks"></a>Note

. SETFRAME ml64.exe gli utenti possono specificare come una funzione di frame viene rimosso e viene consentita solo all'interno di prologo, che si estende dal [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. solo generano `.xdata` e `.pdata`. . SETFRAME deve essere preceduto da istruzioni che implementano effettivamente le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice che dalla necessità di rimozione in una macro per garantire l'accordo.

Per altre informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="sample"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio seguente viene illustrato come utilizzare un puntatore ai frame:

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

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>