---
title: . PUSHFRAME | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .PUSHFRAME
dev_langs:
- C++
helpviewer_keywords:
- .PUSHFRAME directive
ms.assetid: 17b123d0-4c6d-4fd2-85eb-798e8ad0a73c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 66531207d21bb7e9e0c165db135f5a0c0d77e478
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="pushframe"></a>.PUSHFRAME
Genera un `UWOP_PUSH_MACHFRAME` di ingresso del codice di rimozione. Se l'opzione facoltativa `code` viene specificato, la rimozione di ingresso del codice viene assegnato un modificatore di 1. In caso contrario, il modificatore è 0.  
  
## <a name="syntax"></a>Sintassi  
  
```  
.PUSHFRAME [code]  
```  
  
## <a name="remarks"></a>Note  
 . PUSHFRAME consente di specificare come una funzione frame rimuove ml64.exe ed è consentita solo all'interno di prologo, che si estende dal [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. vengono generati solo `.xdata` e `.pdata`. . PUSHFRAME deve essere preceduto da istruzioni che implementano le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice di che rimozione in una macro deve garantire l'accordo.  
  
 Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)