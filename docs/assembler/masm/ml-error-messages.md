---
title: "ML Error Messages | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.errors.ml"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MASM (Microsoft Macro Assembler), ML error messages"
ms.assetid: e7e164b3-6d65-4b5b-8925-bfbebc043523
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Error Messages
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I messaggi di errore generati dai componenti di MASM sono suddivisi in tre categorie:  
  
-   **errori irreversibili.** Esse indicano un grave problema che estende l'utilità da eseguire il normale processo.  
  
-   **errori non irreversibili.** L'utilità possibile eseguire il processo.  In caso affermativo, il risultato non venga quello desiderato.  
  
-   **avvisi.** Questi messaggi indicano le condizioni che possono impedire a ottenere i risultati desiderati.  
  
 Tutti i messaggi di errore è il seguente:  
  
```  
  
Utility: Filename (Line) : [Error_type} (Code): Message_text  
```  
  
 Dove:  
  
 `Utility`  
 il programma che ha inviato il messaggio di errore.  
  
 *nome file*  
 Il file contenente la condizione di generazione.  
  
 *Riga*  
 La riga approssimativa in cui la condizione di errore esiste.  
  
 *Error\_type*  
 Errore irreversibile, errore, avviso o.  
  
 *Codice*  
 L'univoco 5 o un codice di errore 6 cifre.  
  
 `Message_text`  
 Una breve e descrizione generale della condizione di errore.  
  
## Vedere anche  
 [Microsoft Macro Assembler Reference](../../assembler/masm/microsoft-macro-assembler-reference.md)