---
title: ML errore non irreversibile A2219 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2219
dev_langs:
- C++
helpviewer_keywords:
- A2219
ms.assetid: 5ebc2f40-e47e-4f8e-b7b9-960b9cfc9f6d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8d1ae9eb4b8535ac3f1363bb1059468cddf5636
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="ml-nonfatal-error-a2219"></a>Errore ML non irreversibile A2219
**Allineamento non valido per l'offset nel codice di rimozione**  
  
 L'operando per [. ALLOCSTACK](../../assembler/masm/dot-allocstack.md) e [. SAVEREG](../../assembler/masm/dot-savereg.md) deve essere un multiplo di 8.  L'operando per [. SAVEXMM128](../../assembler/masm/dot-savexmm128.md) e [. SETFRAME](../../assembler/masm/dot-setframe.md) deve essere un multiplo di 16.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)