---
title: Errore ML irreversibile A1011 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A1011
dev_langs:
- C++
helpviewer_keywords:
- A1011
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 843d676cba61e0da5f917a48408e56e79abb9efd
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
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
  
-   [. ELSE](../../assembler/masm/dot-else.md) seguente `.ELSE`  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)