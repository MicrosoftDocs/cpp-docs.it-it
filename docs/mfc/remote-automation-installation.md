---
title: "Installazione automazione remota | Microsoft Docs"
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
  - "installazione di Automazione remota"
  - "Automazione remota, installazione"
ms.assetid: 9a02c9f6-dfc6-4489-b240-a1afe25fa0c5
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Installazione automazione remota
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'automazione remota è relativamente limitate componenti:  
  
-   Il proxy client di automazione remota, AUTPRX32.DLL.  
  
-   Il componente lato server di automazione remota, Automation Manager, AUTMGR32.EXE.  
  
-   L'amministratore di RAC, RACMGR32.EXE, con la corrispondenza RACREG32.DLL.  
  
 Tra questi, l'amministratore di RAC viene scritto in Visual Basic e pertanto richiede il supporto di runtime di Visual Basic.  Questi e altri file di automazione remota vengono installati dall'installazione durante l'installazione di Visual C\+\+ edizione Enterprise.  
  
 Se si copia componenti di automazione remota in un computer in cui la versione di Visual C\+\+ edizione Enterprise non è installata, assicurarsi che REGSRV32.EXE si trova nel percorso del computer e il registro RACREG32.DLL utilizzando la seguente riga di comando:  
  
 REGSRVR32 RACREG32.DLL  
  
> [!NOTE]
>  Versioni di amministrazione RAC prima di Visual C\+\+ 5,0 GUAGE32.OCX e TABCTL32.OCX obbligatori.  Nessuno di questi è obbligatorio per la versione di amministrazione RAC fornito con Visual C\+\+ edizione Enterprise, versione 5,0 o successiva.  
  
## Argomenti della sezione  
 [Automation Manager](../mfc/automation-manager-mfc.md)  
  
 [Connection Manager di automazione remota](../mfc/remote-automation-connection-manager.md)  
  
 [Componenti dell'utente di automazione remota](../mfc/remote-automation-user-components.md)  
  
## Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)