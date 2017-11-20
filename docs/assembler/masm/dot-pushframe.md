---
title: . PUSHFRAME | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: .PUSHFRAME
dev_langs: C++
helpviewer_keywords: .PUSHFRAME directive
ms.assetid: 17b123d0-4c6d-4fd2-85eb-798e8ad0a73c
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f10b8dff4974807107b5875347ec0156c8d166aa
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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