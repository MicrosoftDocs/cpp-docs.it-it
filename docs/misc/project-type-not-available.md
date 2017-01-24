---
title: "Tipo di progetto non disponibile | Microsoft Docs"
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
  - "vs.projecttypenotavailable"
helpviewer_keywords: 
  - "Tipo di progetto non disponibile (errore)"
ms.assetid: a579fe75-efa2-4dd0-b5d7-ae106d3aedbd
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Tipo di progetto non disponibile
Questa finestra di dialogo verrà visualizzata con l'errore "Il progetto \<project\> non può essere aperto poiché il tipo di progetto \<project type\> non è supportato da questa versione dell'applicazione".  
  
## Soluzione alternativa  
  
-   Questa finestra di dialogo viene visualizzata quando non è stato trovato il prodotto o la versione del prodotto necessaria per aprire il file specificato.  In genere questo errore si verifica quando si cerca di aprire un file di progetto che non può essere aperto con la versione installata di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Se, ad esempio, si tenta di aprire un file di progetto [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] con [!INCLUDE[vbprvbxprlong](../misc/includes/vbprvbxprlong_md.md)], verrà visualizzata questa finestra di dialogo.  
  
#### Per risolvere il problema  
  
-   Installare la versione corretta di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## Vedere anche  
 [Portabilità, migrazione e aggiornamento dei progetti di Visual Studio](../Topic/Porting,%20Migrating,%20and%20Upgrading%20Visual%20Studio%20Projects.md)   
 [Riferimenti alle proprietà di progetto](../Topic/Project%20Properties%20Reference.md)