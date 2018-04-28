---
title: ML errore non irreversibile A2133 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2133
dev_langs:
- C++
helpviewer_keywords:
- A2133
ms.assetid: 5ba50911-22c8-43b7-90e2-946fc612e05f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f240ed6f2e8330017e56334dfcc41be478537c7b
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="ml-nonfatal-error-a2133"></a>Errore ML non irreversibile A2133
**valore sovrascritto da INVOKE di registro**  
  
 Un registro è stato passato come argomento a una routine, ma il codice generato da [INVOKE](../../assembler/masm/invoke.md) gli altri argomenti vengono passati eliminato in modo permanente il contenuto del registro.  
  
 I registri AX AL, AH, EAX, DX, DL, DH ed EDX utilizzabile dall'assembler per eseguire la conversione dei dati.  
  
 Utilizzare un registro diverso.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)