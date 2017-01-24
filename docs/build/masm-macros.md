---
title: "Macro MASM | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 21410432-72fc-4795-bc93-e78123f9f14f
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro MASM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per semplificare l'utilizzo delle [Pseudo operazioni in modalità raw](../build/raw-pseudo-operations.md), è disponibile un set di macro, definite in ksamd64.inc, che possono essere utilizzate per creare tipici prologhi ed epiloghi delle routine.  
  
## Note  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|alloc\_stack\(n\)|Alloca uno stack frame di n byte \(mediante un'istruzione sub rsp, n\), quindi genera le informazioni di rimozione appropriate \(.allocstack n\).|  
|save\_reg reg, loc|Salva il registro non volatile reg nello stack in corrispondenza dell'offset RSP loc, quindi genera le informazioni di rimozione appropriate  \(.savereg reg, loc\).|  
|push\_reg reg|Inserisce il registro non volatile reg nello stack, quindi genera le informazioni di rimozione appropriate  \(.pushreg reg\).|  
|rex\_push\_reg reg|Salvare un registro non volatile nello stack utilizzando un incremento di 2 byte e genera invece opportuno rimuovere le informazioni nel registro di .pushreg\) che questo deve essere utilizzato se la push è la prima istruzione nella funzione assicurarsi che la funzione è calda \- patchable.|  
|save\_xmm128 reg, loc|Salva il registro XMM non volatile reg nello stack in corrispondenza dell'offset RSP loc, quindi genera le informazioni di rimozione appropriate \(.savexmm128 reg, loc\).|  
|set\_frame reg, offset|Imposta il frame register reg in modo che corrisponda a RSP \+ offset \(mediante un'istruzione mov o lea\), quindi genera le informazioni di rimozione appropriate \(.set\_frame reg, offset\).|  
|push\_eflags|Inserisce il contenuto del registro EFLAGS \(mediante un'istruzione pushfq\), quindi genera le informazioni di rimozione appropriate \(.alloc\_stack 8\).|  
  
 Di seguito è riportato un esempio di prologo di funzione, in cui è illustrato l'utilizzo corretto delle macro:  
  
```  
SkFrame struct   
Fill    dq ?; fill to 8 mod 16   
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
  
## Vedere anche  
 [Helper di rimozione per MASM](../build/unwind-helpers-for-masm.md)