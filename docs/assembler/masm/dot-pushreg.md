---
title: .PUSHREG
ms.date: 08/30/2018
f1_keywords:
- .PUSHREG
helpviewer_keywords:
- .PUSHREG directive
ms.assetid: e0c83758-dfed-40ea-afe6-cb833c8d2d30
ms.openlocfilehash: 2190bd05667de82dada34a63f11647c653f97247
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398030"
---
# <a name="pushreg"></a>.PUSHREG

Genera una voce di codice di rimozione `UWOP_PUSH_NONVOL` per il numero di registro specificato usando l'offset corrente nel prologo.

## <a name="syntax"></a>Sintassi

> . Registro PUSHREG

## <a name="remarks"></a>Note

**. PUSHREG** consente agli utenti di ml64. exe di specificare il modo in cui una funzione frame viene rilasciata ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del **frame** [proc](../../assembler/masm/proc.md) a [. Direttiva ENDPROLOG](../../assembler/masm/dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. **. PUSHREG** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="sample"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrato come eseguire il push di registri non volatili.

### <a name="code"></a>Codice

```asm
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

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
