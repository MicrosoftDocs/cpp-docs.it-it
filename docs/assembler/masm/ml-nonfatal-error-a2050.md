---
title: ML errore non irreversibile A2050 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2050
dev_langs:
- C++
helpviewer_keywords:
- A2050
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 159ed131c13166435114234b3b16a82cd4d41d1f
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32056194"
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