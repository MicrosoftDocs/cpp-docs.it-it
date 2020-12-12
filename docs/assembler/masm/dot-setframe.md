---
description: Ulteriori informazioni su:. SETFRAME
title: .SETFRAME
ms.date: 12/17/2019
f1_keywords:
- .SETFRAME
helpviewer_keywords:
- .SETFRAME directive
ms.assetid: eaa9b5ed-4daa-4f1e-bdb6-100758007ab3
ms.openlocfilehash: b3554da14344293f00c499bc3084e6ddfd93c2ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97131079"
---
# <a name="setframe"></a>.SETFRAME

Inserisce il campo Registro frame e l'offset nelle informazioni di rimozione utilizzando il registro (*reg*) e l'offset (*offset*) specificati. L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera anche una `UWOP_SET_FPREG` voce di codice di rimozione per il registro specificato usando l'offset del prologo corrente.

## <a name="syntax"></a>Sintassi

> **. Seframe** *reg*, *offset*

## <a name="remarks"></a>Commenti

**. Seframe** consente agli utenti ml64.exe di specificare la modalità di rimozione di una funzione di frame ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](proc.md) a [. Direttiva ENDPROLOG](dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata` . **. Il segramma** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

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

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
