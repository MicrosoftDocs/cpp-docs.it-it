---
title: . SAVEXMM128 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .SAVEXMM128
dev_langs:
- C++
helpviewer_keywords:
- .SAVEXMM128 directive
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d50d4bbc7f9c89e9ef36a1dd8cf3dfeb56de79b5
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="savexmm128"></a>.SAVEXMM128
Genera uno un `UWOP_SAVE_XMM128` o `UWOP_SAVE_XMM128_FAR` rimozione di ingresso del codice per il registro XMM specificato e l'offset utilizzando l'offset corrente di prologo. MASM sceglierà la codifica più efficiente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
.savexmm128 xmmreg , offset  
```  
  
## <a name="remarks"></a>Note  
 . SAVEXMM128 consente di specificare come rimuove una funzione di frame e viene consentita solo all'interno di prologo, che si estende dal ml64.exe il [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. vengono generati solo `.xdata` e `.pdata`. . SAVEXMM128 deve essere preceduto da istruzioni che implementano le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice di che rimozione in una macro deve garantire l'accordo.  
  
 `offset` deve essere un multiplo di 16.  
  
 Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)