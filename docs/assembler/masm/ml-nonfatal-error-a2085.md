---
title: ML errore non irreversibile A2085 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2085
dev_langs:
- C++
helpviewer_keywords:
- A2085
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 82f0a014810679f0b48f79198b1335240f5cd6a8
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="ml-nonfatal-error-a2085"></a>Errore ML non irreversibile A2085
**istruzione o registrazione non è accettata in modalità di CPU corrente**  
  
 È stato effettuato un tentativo di utilizzare un'istruzione, registrare o parola chiave che non è valido per la modalità del processore corrente.  
  
 Ad esempio, registri di 32 bit richiedono [.386](../../assembler/masm/dot-386.md) o versione successiva. Registri di controllo, ad esempio CR0 richiede una modalità privilegiata [.386P](../../assembler/masm/dot-386p.md) o versione successiva. Questo errore verrà generato anche per il **NEAR32**, **FAR32**, e **FLAT** parole chiave, che richiedono. **386** o versione successiva.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)