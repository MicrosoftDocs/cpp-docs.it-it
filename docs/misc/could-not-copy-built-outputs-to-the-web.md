---
title: "Impossibile copiare output compilati sul Web | Microsoft Docs"
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
  - "vs.tasklisterror.cantcopyoutputstoweb"
ms.assetid: 59cf714b-cf7d-4df9-81ae-d3254969d5bc
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile copiare output compilati sul Web
Il sistema del progetto non è riuscito a copiare uno o più file di output compilati, ad esempio assembly satellite, file PDB o DLL compilate, sul server Web.  
  
 Questo errore indica che uno o più file di output compilati non sono stati copiati sul server Web.  
  
 L'errore è solitamente dovuto a un file di output della compilazione bloccato o di sola lettura sul server. Se un file è bloccato sul server, i simboli di debug, i satelliti o gli assembly che si trovano attualmente sul server non sono stati copiati correttamente dal runtime di [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)].  
  
 È inoltre possibile che lo spazio su disco nel server sia insufficiente o che problemi di rete impediscano a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] di caricare i file sul Web.  
  
### Per correggere l'errore  
  
1.  Controllare lo spazio disponibile su disco.  
  
2.  Se un file è bloccato, riavviare il server Web in modo da eliminare il blocco di [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)] sui file interessati.  
  
## Vedere anche  
 [PDB Files](http://msdn.microsoft.com/it-it/1761c84e-8c2c-4632-9649-b5f99964ed3f)