---
title: "Override del routing dei comandi standard | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi (gestione), routing di comandi"
  - "comandi (routing), override"
  - "MFC, comandi (routing)"
  - "override, routing di comandi standard"
ms.assetid: 872b698a-7432-40c4-9008-68721e8effa5
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Override del routing dei comandi standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In rari casi in cui è necessario implementare la modifica del framework standard che vengono risolti, è possibile eseguirne l'override.  Lo scopo è di modificare il routing in una o più classi eseguire l'override `OnCmdMsg` in tali classi.  Eseguire questa operazione:  
  
-   Nella classe che consente di interrompere ordine per passare a un oggetto non predefinito.  
  
-   Nel nuovo oggetto non predefinito oppure aggiungerlo al comando destinazioni può a sua volta passare ai controlli.  
  
 Se si inserisce un nuovo oggetto nel routing, la classe deve essere una classe di destinazione comando.  Nelle versioni eseguire l'override di `OnCmdMsg`, assicurarsi di chiamare la versione che si esegue l'override.  Vedere la funzione membro di [OnCmdMsg](../Topic/CCmdTarget::OnCmdMsg.md) di classe `CCmdTarget`*in riferimenti alla libreria MFC* e versioni in tali classi come `CView` e **CDocument** nel codice sorgente fornito per gli esempi.  
  
## Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)