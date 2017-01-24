---
title: "A failure occurred writing to the licenses file | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.fail_writing_licenses_file"
ms.assetid: 7ea1e2ac-fc94-4d53-8ce9-2ae31bcba85d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# A failure occurred writing to the licenses file
Non è stato possibile scrivere il file convertito.  Durante la preparazione delle licenze, i file di testo con estensione licx vengono convertiti dal sistema del progetto in file delle licenze binari riconosciuti dal sistema di gestione licenze [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  
  
 Tra le possibili cause di questo errore ci sono un insufficiente spazio su disco o il superamento del limite MAX\_PATH per i nomi file.  
  
 **Per correggere l'errore**  
  
-   Spostare il progetto in una cartella differente con un nome di percorso assoluto breve o abbreviare il nome del file di output.  
  
     Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
## Vedere anche  
 [How to: License Components and Controls](../Topic/How%20to:%20License%20Components%20and%20Controls.md)