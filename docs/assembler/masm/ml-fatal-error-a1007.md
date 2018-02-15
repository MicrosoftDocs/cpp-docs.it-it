---
title: Errore ML irreversibile A1007 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- A1007
dev_langs:
- C++
helpviewer_keywords:
- A1007
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1d1ef99cebab226a3af5e7e685acc5a5485872d1
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="ml-fatal-error-a1007"></a>Errore ML irreversibile A1007
**livello di nidificazione troppo profonda**  
  
 L'assembler raggiunto il limite di nidificazione. Il limite è 20 livelli se non diversamente in caso contrario.  
  
 Uno dei seguenti è eccessivamente annidato:  
  
-   Una direttiva di alto livello, ad esempio [. Se](../../assembler/masm/dot-if.md), [. Ripetere](../../assembler/masm/dot-repeat.md), o [. MENTRE](../../assembler/masm/dot-while.md).  
  
-   Definizione di una struttura.  
  
-   Una direttiva assembly condizionale.  
  
-   Una definizione della procedura.  
  
-   Oggetto [PUSHCONTEXT](../../assembler/masm/pushcontext.md) (direttiva) (il limite è 10).  
  
-   Definizione di un segmento.  
  
-   Un file di inclusione.  
  
-   Una macro.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)