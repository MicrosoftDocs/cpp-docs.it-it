---
title: "Gestione automazione (MFC) | Microsoft Docs"
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
  - "AUTMGR32.exe"
  - "client di automazione, Gestione automazione"
  - "Gestione automazione"
  - "server di automazione, Gestione automazione"
  - "automazione, Gestione automazione"
  - "Automazione remota, Gestione automazione"
ms.assetid: 6bf3429e-1946-41c5-86d0-ad7f5b8585b8
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione automazione (MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

AUTMGR32.EXE deve essere copiato nella directory di sistema di Windows di ogni computer in cui viene destinando per fornire oggetti di automazione remota.  In Windows 95 e Windows 98, questa directory è in genere C:\\WINDOWS\\SYSTEM.  Per Windows NT e Windows 2000, è in genere C:\\WINNT\\SYSTEM32.  
  
 Se si desidera abilitare i callback dal server al client, il file eseguibile deve essere copiato nella directory di sistema ogni computer client.  
  
 Quando Automation Manager è in esecuzione, viene visualizzata una piccola finestra nel server contenente più brevi informazioni sullo stato.  Se si desidera nascondere l'elemento, fare riferimento all'articolo Q138067 della Microsoft Knowledge Base.  
  
## Vedere anche  
 [Gestione connessioni di automazione remota](../mfc/remote-automation-connection-manager.md)   
 [Componenti utente di automazione remota](../mfc/remote-automation-user-components.md)   
 [Installazione automazione remota](../mfc/remote-automation-installation.md)