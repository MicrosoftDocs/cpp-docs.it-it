---
title: Errore ML irreversibile A1010 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- A1010
dev_langs:
- C++
helpviewer_keywords:
- A1010
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 553071ff10688f0b49909b16c8c60d95899247d1
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="ml-fatal-error-a1010"></a>Errore ML irreversibile A1010
**nidificazione di blocco non corrispondenti:**  
  
 Inizio un blocco non disponeva di un'entità finale corrispondente, o una fine del blocco non conteneva un inizio corrispondente. Potrebbe essere coinvolto uno dei valori seguenti:  
  
-   Una direttiva di alto livello, ad esempio [. Se](../../assembler/masm/dot-if.md), [. Ripetere](../../assembler/masm/dot-repeat.md), o [. MENTRE](../../assembler/masm/dot-while.md).  
  
-   Una direttiva assembly condizionale, ad esempio [se](../../assembler/masm/if-masm.md), [ripetere](../../assembler/masm/repeat.md), o **mentre**.  
  
-   Una definizione di struttura o unione.  
  
-   Una definizione della procedura.  
  
-   Definizione di un segmento.  
  
-   Oggetto [POPCONTEXT](../../assembler/masm/popcontext.md) direttiva.  
  
-   Un assembly di condizionale direttiva, ad esempio un [ELSE](../../assembler/masm/else-masm.md), [ELSEIF](../../assembler/masm/elseif-masm.md), o **ENDIF** senza un corrispondente [se](../../assembler/masm/if-masm.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)