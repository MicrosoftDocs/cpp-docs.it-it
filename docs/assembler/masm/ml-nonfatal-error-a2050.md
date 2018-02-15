---
title: ML errore non irreversibile A2050 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- A2050
dev_langs:
- C++
helpviewer_keywords:
- A2050
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 887a18ee274b3e09624a07e214f235333e2a9665
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="ml-nonfatal-error-a2050"></a>Errore ML non irreversibile A2050
**reale o numero BCD non consentito**  
  
 Un numero a virgola mobile (VERO) o binary coded decimal (BCD) costante è stata utilizzata diverso come inizializzatore di dati.  
  
 Si è verificata una delle operazioni seguenti:  
  
-   Un numero reale o un BCD è stato usato in un'espressione.  
  
-   È stato usato un numero reale per inizializzare diverso da una direttiva [DWORD](../../assembler/masm/dword.md), [QWORD](../../assembler/masm/qword.md), o [TBYTE](../../assembler/masm/tbyte.md).  
  
-   Un archivio BCD veniva utilizzato per inizializzare una direttiva diverso da `TBYTE`.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)