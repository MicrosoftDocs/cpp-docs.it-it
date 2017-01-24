---
title: "Unable to read the resource information from the licx file | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.fail_reading_licx_file"
ms.assetid: e59f0965-fa1c-4852-bd39-63430d5b7d9f
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Unable to read the resource information from the licx file
Non è stato possibile leggere il file LICX.  Durante la preparazione delle licenze i file di testo LICX vengono convertiti in risorse binarie utilizzabili con il modello di gestione licenze COM\+.  
  
 Il file LICX viene generato o aggiornato automaticamente mediante Progettazione Windows Form ogni volta che un controllo concesso in licenza viene aggiunto al form.  Per ciascun progetto è presente un file LICX, che si trova nella cartella radice ed è denominato sempre licenses.licx.  
  
 Di seguito sono indicate alcune delle possibili cause dell'errore:  
  
-   Autorizzazione negata.  
  
-   Comunicazione persa con il server Web per i progetti Web.  
  
 Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
## Vedere anche  
 [How to: License Components and Controls](../Topic/How%20to:%20License%20Components%20and%20Controls.md)