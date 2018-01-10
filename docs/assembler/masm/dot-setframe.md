---
title: . SETFRAME | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: .SETFRAME
dev_langs: C++
helpviewer_keywords: .SETFRAME directive
ms.assetid: eaa9b5ed-4daa-4f1e-bdb6-100758007ab3
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 277eb151fabc62a5d6cd44ba34bac7c230cec39f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setframe"></a>.SETFRAME
Riempimenti nel frame registrare campo e l'offset nel registro specificato utilizzando le informazioni di rimozione (`reg`) e di offset (`offset`). L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera inoltre un `UWOP_SET_FPREG` di ingresso del codice di rimozione per registra l'oggetto specificato utilizzando l'offset corrente di prologo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
.SETFRAME reg, offset  
```  
  
## <a name="remarks"></a>Note  
 . SETFRAME consente di specificare come rimuove una funzione di frame e viene consentita solo all'interno di prologo, che si estende dal ml64.exe il [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. vengono generati solo `.xdata` e `.pdata`. . SETFRAME deve essere preceduto da istruzioni che implementano le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice di che rimozione in una macro deve garantire l'accordo.  
  
 Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## <a name="sample"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 L'esempio seguente viene illustrato come utilizzare un puntatore ai frame:  
  
### <a name="code"></a>Codice  
  
```  
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
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)