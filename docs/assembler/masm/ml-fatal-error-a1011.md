---
title: Errore ML irreversibile A1011 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: A1011
dev_langs: C++
helpviewer_keywords: A1011
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 470340e76897394e5b8ecb042ff97562b0c94c2d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ml-fatal-error-a1011"></a>Errore ML irreversibile A1011
**direttiva deve essere nel blocco di controllo**  
  
 L'assembler rilevato una direttiva di alto livello in uno non stato previsto. È stata trovata una delle direttive seguenti:  
  
-   [. ELSE](../../assembler/masm/dot-else.md) senza [. SE](../../assembler/masm/dot-if.md)  
  
-   [. ENDIF](../../assembler/masm/dot-endif.md) senza [. SE](../../assembler/masm/dot-if.md)  
  
-   [. ENDW](../../assembler/masm/dot-endw.md) senza [. WHILE](../../assembler/masm/dot-while.md)  
  
-   [. UNTILCXZ](../../assembler/masm/dot-untilcxz.md) senza [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)  
  
-   [. CONTINUARE](../../assembler/masm/dot-continue.md) senza [. MENTRE](../../assembler/masm/dot-while.md) o [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)  
  
-   [. Interrompi](../../assembler/masm/dot-break.md) senza [. MENTRE](../../assembler/masm/dot-while.md) o [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)  
  
-   [. ELSE](../../assembler/masm/dot-else.md) seguente`.ELSE`  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)