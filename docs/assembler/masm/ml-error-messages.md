---
title: Messaggi di errore ML | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.errors.ml
dev_langs: C++
helpviewer_keywords: MASM (Microsoft Macro Assembler), ML error messages
ms.assetid: e7e164b3-6d65-4b5b-8925-bfbebc043523
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1fa5933c9c676b76ebe342ffa848e7b40926da08
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ml-error-messages"></a>Messaggi di errore ML
I messaggi di errore generati dai componenti MASM rientrano in tre categorie:  
  
-   **Errori irreversibili.** Queste informazioni indicano un problema grave che impedisce l'utilità di completare il normale processo.  
  
-   **Errori non irreversibili.** L'utilità può essere completato il processo. In caso affermativo, il risultato non è probabilmente quello desiderato.  
  
-   **Avvisi.** Questi messaggi indicano le condizioni che potrebbero impedire di ottenere i risultati desiderati.  
  
 Tutti i messaggi di errore nel modo seguente:  
  
```  
  
Utility: Filename (Line) : [Error_type} (Code): Message_text  
```  
  
 dove:  
  
 `Utility`  
 Il programma che ha inviato il messaggio di errore.  
  
 *Nome file*  
 Il file che contiene la condizione di errore di generazione.  
  
 *Line*  
 La riga approssimativa in cui è presente la condizione di errore.  
  
 *Error_type*  
 Errore irreversibile errore, avviso o errore.  
  
 *Codice*  
 Il codice di errore univoco 5 o 6 cifre.  
  
 `Message_text`  
 Descrizione della condizione di errore breve e generale.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)