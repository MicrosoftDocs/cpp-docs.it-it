---
title: ML errore non irreversibile A2085 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: A2085
dev_langs: C++
helpviewer_keywords: A2085
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f987b775c13b0e477fd5c1d215d556069535a0fd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ml-nonfatal-error-a2085"></a>Errore ML non irreversibile A2085
**istruzione o registrazione non è accettata in modalità di CPU corrente**  
  
 È stato effettuato un tentativo di utilizzare un'istruzione, registrare o parola chiave che non è valido per la modalità del processore corrente.  
  
 Ad esempio, registri di 32 bit richiedono [.386](../../assembler/masm/dot-386.md) o versione successiva. Registri di controllo, ad esempio CR0 richiede una modalità privilegiata [.386P](../../assembler/masm/dot-386p.md) o versione successiva. Questo errore verrà generato anche per il **NEAR32**, **FAR32**, e **FLAT** parole chiave, che richiedono. **386** o versione successiva.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)