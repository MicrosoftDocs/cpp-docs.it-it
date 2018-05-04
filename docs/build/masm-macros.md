---
title: Macro MASM | Documenti Microsoft
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
ms.openlocfilehash: 403220306a2585b1506a990664eaa2ec8f2ac1a3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="masm-macros"></a>Macro MASM
Per semplificare l'utilizzo del [Raw Pseudo operazioni](../build/raw-pseudo-operations.md), esistono una serie di macro, definite in ksamd64.inc, che può essere utilizzato per creare procedure tipiche prologhi ed epiloghi.  
  
## <a name="remarks"></a>Note  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|alloc_stack(n)|Alloca uno stack frame di n byte (tramite sub rsp, n), quindi genera informazioni. allocstack (n) di rimozione appropriato|  
|save_reg reg, loc|Salva un registro non volatile reg nello stack in corrispondenza dell'offset RSP loc, quindi genera informazioni di rimozione appropriato. (.savereg reg, loc)|  
|reg push_reg|Inserisce un registro non volatile reg nello stack, quindi genera informazioni di rimozione appropriato. . pushreg (reg)|  
|reg rex_push_reg|Salvare un registro non volatile nello stack utilizzando un push di 2 byte e trasmette informazioni (pushreg reg) deve essere utilizzato se la prima istruzione nella funzione per verificare che la funzione sia inserimento il push di rimozione appropriato.|  
|save_xmm128 reg, loc|Salva registro XMM non volatile reg nello stack in corrispondenza dell'offset RSP loc, quindi genera informazioni (savexmm128 reg, loc) di rimozione appropriato|  
|set_frame reg, offset|Imposta il frame register reg per essere RSP + offset (mediante un'istruzione mov o lea), quindi genera informazioni (set_frame reg, offset) di rimozione appropriato|  
|push_eflags|Inserisce il contenuto con un'istruzione pushfq e trasmette le rimozione appropriate informazioni (alloc_stack 8)|  
  
 Di seguito è riportato un prologo di funzione di esempio con l'utilizzo corretto delle macro:  
  
```  
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