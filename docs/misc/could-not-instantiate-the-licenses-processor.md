---
title: "Could not instantiate the licenses processor | Microsoft Docs"
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
  - "vs.tasklisterror.no_licx_generator"
ms.assetid: 9e95d590-f41f-4cfa-bc73-fadeacfdb879
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Could not instantiate the licenses processor
Non è stato possibile creare un'istanza dello strumento utilizzato per convertire i file LICX in risorse binarie.  
  
 Durante la compilazione, un file di testo LICX viene convertito in una risorsa binaria che fornisce il supporto per la gestione licenze dei controlli .NET.  La risorsa binaria verrà quindi incorporata nell'output del progetto.  
  
 Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
 Il file LICX viene generato o aggiornato automaticamente mediante Progettazione Windows Form ogni volta che un controllo concesso in licenza viene aggiunto al form.  Per ciascun progetto è presente un file LICX, che si trova nella cartella radice ed è denominato sempre licenses.licx.  
  
 **Per correggere l'errore**  
  
-   Reinstallare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## Vedere anche  
 [How to: License Components and Controls](../Topic/How%20to:%20License%20Components%20and%20Controls.md)