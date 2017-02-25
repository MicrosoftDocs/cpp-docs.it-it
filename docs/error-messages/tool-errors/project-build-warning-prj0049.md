---
title: "Avviso di compilazione progetto PRJ0049 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0049"
ms.assetid: 8b38afa1-e080-4efd-ae89-776cfd044413
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Avviso di compilazione progetto PRJ0049
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La destinazione '\<Reference\>' a cui si fa riferimento richiede .NET Framework \<MinFrameworkVersion\> e non può essere eseguita nel framework di destinazione del progetto  
  
 Le applicazioni create con [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)] possono specificare la versione di [!INCLUDE[dnprdnshort](../../error-messages/tool-errors/includes/dnprdnshort_md.md)] di destinazione.  Se si aggiunge un riferimento a un assembly o a un progetto che dipende da una versione di [!INCLUDE[dnprdnshort](../../error-messages/tool-errors/includes/dnprdnshort_md.md)] successiva alla versione di destinazione, in fase di compilazione si otterrà questo avviso.  
  
### Per correggere l'avviso  
  
1.  Effettuare una delle seguenti operazioni:  
  
    -   Modificare il framework di destinazione nella finestra di dialogo **Pagine delle proprietà** del progetto in modo che sia successivo o uguale alla versione minima del framework di tutti gli assembly e i progetti a cui si fa riferimento.  Per ulteriori informazioni, vedere [Aggiunta di riferimenti](../../ide/adding-references-in-visual-cpp-projects.md).  
  
    -   Rimuovere il riferimento all'assembly o al progetto con la versione minima del framework successiva al framework di destinazione.  Questi elementi verranno contrassegnati con un'icona di avviso nella finestra di dialogo **Pagine delle proprietà**del progetto.  
  
## Vedere anche  
 [Errori e avvisi relativi alla compilazione di progetti \(PRJxxxx\)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)