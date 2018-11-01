---
title: .ALLOCSTACK
ms.date: 08/30/2018
f1_keywords:
- .ALLOCSTACK
helpviewer_keywords:
- .ALLOCSTACK directive
ms.assetid: 9801594b-7ac2-4df2-a49d-07d9dd9af99e
ms.openlocfilehash: b92db3d03bb5c45e67473cd4085f2369698f6b42
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661383"
---
# <a name="allocstack"></a>.ALLOCSTACK

Genera una **voce UWOP_ALLOC_SMALL** o una **UWOP_ALLOC_LARGE** con le dimensioni specificate per l'offset corrente nel prologo.

## <a name="syntax"></a>Sintassi

> . Dimensioni ALLOCSTACK

## <a name="remarks"></a>Note

MASM sceglierà la codifica più efficiente per le dimensioni specificate.

. ALLOCSTACK ml64.exe gli utenti possono specificare come una funzione di frame viene rimosso ed è consentita solo all'interno di prologo, che si estende dal [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. solo generano `.xdata` e `.pdata`. . ALLOCSTACK deve essere preceduto da istruzioni che implementano effettivamente le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice che dalla necessità di rimozione in una macro per garantire l'accordo.

Il `size` operando deve essere un multiplo di 8.

Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="sample"></a>Esempio

L'esempio seguente viene illustrato come specificare un gestore di rimozione/con eccezione:

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

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>