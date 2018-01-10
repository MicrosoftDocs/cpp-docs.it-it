---
title: . SAVEREG | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: .SAVEREG
dev_langs: C++
helpviewer_keywords: .SAVEREG directive
ms.assetid: 1dbc2ef6-a197-40e7-9e55-fddcae8cef29
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ab1e777aa8bdddc4aa4fd71212f3275231b92dc4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="savereg"></a>.SAVEREG
Genera uno un `UWOP_SAVE_NONVOL` o `UWOP_SAVE_NONVOL_FAR` rimozione di ingresso del codice per il registro specificato (`reg`) e di offset (`offset`) utilizzando l'offset corrente di prologo. MASM sceglierà la codifica più efficiente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
.SAVEREG reg, offset  
```  
  
## <a name="remarks"></a>Note  
 . SAVEREG consente di specificare come una funzione frame rimuove ml64.exe ed è consentita solo all'interno di prologo, che si estende dal [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. vengono generati solo `.xdata` e `.pdata`. . SAVEREG deve essere preceduto da istruzioni che implementano le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice di che rimozione in una macro deve garantire l'accordo.  
  
 Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)