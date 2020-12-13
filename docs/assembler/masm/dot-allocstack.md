---
description: Ulteriori informazioni su:. ALLOCSTACK
title: .ALLOCSTACK
ms.date: 12/17/2019
f1_keywords:
- .ALLOCSTACK
helpviewer_keywords:
- .ALLOCSTACK directive
ms.assetid: 9801594b-7ac2-4df2-a49d-07d9dd9af99e
ms.openlocfilehash: 6075b0900df104ae5faeaaff1dc0de2d3727b437
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132366"
---
# <a name="allocstack"></a>.ALLOCSTACK

Genera un **UWOP_ALLOC_SMALL** o un **UWOP_ALLOC_LARGE** con le dimensioni specificate per l'offset corrente nel prologo.

## <a name="syntax"></a>Sintassi

> **.** *Dimensioni* ALLOCSTACK

## <a name="remarks"></a>Commenti

MASM sceglierà la codifica più efficiente per una determinata dimensione.

**. ALLOCSTACK** consente agli utenti ml64.exe di specificare il modo in cui una funzione frame viene rilasciata ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](proc.md) a [. Direttiva ENDPROLOG](dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata` . **. ALLOCSTACK** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

L'operando *size* deve essere un multiplo di 8.

Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## <a name="sample"></a>Esempio

Nell'esempio seguente viene illustrato come specificare un gestore di rimozione/eccezione:

```asm
; ml64 ex3.asm /link /entry:Example1  /SUBSYSTEM:Console
text SEGMENT
PUBLIC Example3
PUBLIC Example3_UW
Example3_UW PROC NEAR
   ; exception/unwind handler body

   ret 0

Example3_UW ENDP

Example3 PROC FRAME : Example3_UW

   sub rsp, 16
.allocstack 16

.endprolog

   ; function body
    add rsp, 16
   ret 0

Example3 ENDP
text ENDS
END
```

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
