---
title: Macro MASM | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 21410432-72fc-4795-bc93-e78123f9f14f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cb436acae117c78bfa5c752b905bd3f4f910e9da
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707850"
---
# <a name="masm-macros"></a>Macro MASM

Per semplificare l'utilizzo dei [Raw Pseudo operazioni](../build/raw-pseudo-operations.md), esistono una serie di macro, definite in ksamd64.inc, che può essere usato per creare procedure tipiche prologhi ed epiloghi.

## <a name="remarks"></a>Note

|Macro|Descrizione|
|-----------|-----------------|
|alloc_stack(n)|Alloca uno stack frame di n byte (tramite rsp sub, n), quindi genera informazioni (allocstack n) di rimozione appropriato|
|reg save_reg, localizzazione|Salva un registro non volatile reg nello stack in corrispondenza dell'offset loc RSP, quindi genera informazioni di rimozione appropriato. (savereg reg, loc)|
|push_reg reg|Inserisce un registro non volatile reg nello stack, quindi genera informazioni di rimozione appropriato. . pushreg (reg)|
|rex_push_reg reg|Salvare un registro non volatile nello stack utilizzando un'operazione push 2byte, quindi genera informazioni (pushreg reg) deve essere utilizzato se la notifica push è la prima istruzione nella funzione per garantire che la funzione è inserimento di rimozione appropriato.|
|reg save_xmm128, localizzazione|Salva registro XMM non volatile reg nello stack in corrispondenza dell'offset loc RSP, quindi genera informazioni (reg savexmm128, loc) di rimozione appropriato|
|reg set_frame, offset|Imposta il frame register reg a essere RSP + offset (tramite un'istruzione mov o un lascia), quindi genera informazioni (set_frame reg, offset) di rimozione appropriato|
|push_eflags|Inserisce il contenuto con un'istruzione di pushfq ed emette informazioni (alloc_stack 8) di rimozione appropriato|

Ecco un prologo della funzione di esempio con un utilizzo corretto delle macro:

```asm
SkFrame struct
Fill    dq ?; fill to 8 mod 16
SavedRdi dq ?; saved register RDI
SavedRsi dq ?; saved register RSI
SkFrame ends

sampleFrame struct
Filldq?; fill to 8 mod 16
SavedRdidq?; Saved Register RDI
SavedRsi  dq?; Saved Register RSI
sampleFrame ends

sample2 PROC FRAME
alloc_stack(sizeof sampleFrame)
save_reg rdi, sampleFrame.SavedRdi
save_reg rsi, sampleFrame.SavedRsi
.end_prolog

; function body

    mov rsi, sampleFrame.SavedRsi[rsp]
    mov rdi, sampleFrame.SavedRdi[rsp]

; Here’s the official epilog

    add rsp, (sizeof sampleFrame)
    ret
sample2 ENDP
```

## <a name="see-also"></a>Vedere anche

[Helper di rimozione per MASM](../build/unwind-helpers-for-masm.md)