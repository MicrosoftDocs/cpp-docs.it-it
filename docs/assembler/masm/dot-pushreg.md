---
description: Ulteriori informazioni su:. PUSHREG
title: .PUSHREG
ms.date: 12/16/2019
f1_keywords:
- .PUSHREG
helpviewer_keywords:
- .PUSHREG directive
ms.assetid: e0c83758-dfed-40ea-afe6-cb833c8d2d30
ms.openlocfilehash: b9316cebad76747c69cb577fcae71f28b6bd9530
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97131261"
---
# <a name="pushreg"></a>.PUSHREG

Genera una `UWOP_PUSH_NONVOL` voce di codice di rimozione per il numero di registro specificato usando l'offset corrente nel prologo.

## <a name="syntax"></a>Sintassi

> . *Registro* pushreg

## <a name="remarks"></a>Commenti

**. PUSHREG** consente agli utenti ml64.exe di specificare la modalità di rimozione di una funzione di frame ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del **frame** [proc](proc.md) a [. Direttiva ENDPROLOG](dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata` . **. PUSHREG** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

il *Registro* può essere uno dei seguenti: \
RAX | RCX | RDX | RBX | RDI | RSI | RBP | R8 | R9 | R10 | R11 | R12 | R13 | R14 | R15.

Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

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

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
