---
title: . ALLOCSTACK | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .ALLOCSTACK
dev_langs:
- C++
helpviewer_keywords:
- .ALLOCSTACK directive
ms.assetid: 9801594b-7ac2-4df2-a49d-07d9dd9af99e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 00fd3028a38ff33edf7a721d2efb57fc3581152c
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32050867"
---
# <a name="allocstack"></a>.ALLOCSTACK
Genera un **voce UWOP_ALLOC_SMALL** o **UWOP_ALLOC_LARGE** con le dimensioni specificate per l'offset corrente nel prologo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
.ALLOCSTACK size  
```  
  
## <a name="remarks"></a>Note  
 MASM sceglierà la codifica più efficiente per le dimensioni specificate.  
  
 . ALLOCSTACK consente di specificare come una funzione frame rimuove ml64.exe ed è consentita solo all'interno di prologo, che si estende dal [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. vengono generati solo `.xdata` e `.pdata`. . ALLOCSTACK deve essere preceduto da istruzioni che implementano le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice di che rimozione in una macro deve garantire l'accordo.  
  
 Il `size` operando deve essere un multiplo di 8.  
  
 Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## <a name="sample"></a>Esempio  
 L'esempio seguente viene illustrato come specificare un gestore di rimozione/eccezione:  
  
```  
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
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)