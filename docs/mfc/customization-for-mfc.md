---
title: "Personalizzazione per MFC | Microsoft Docs"
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
  - "personalizzazioni, estensioni MFC"
ms.assetid: 3b1b7532-8cc9-48dc-9bbe-7fd4060530b5
caps.latest.revision: 21
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Personalizzazione per MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono forniti suggerimenti per personalizzare un'applicazione MFC.  
  
## Personalizzazioni generali  
 È possibile salvare e caricare lo stato dell'applicazione nel Registro di sistema.  Quando si abilita questa opzione, l'applicazione carica lo stato iniziale dal Registro di sistema.  Se si modifica il layout iniziale di ancoraggio per l'applicazione, sarà necessario cancellare i dati del Registro di sistema per l'applicazione.  In caso contrario, i dati nel Registro di sistema esegue l'override di tutte le modifiche apportate al layout iniziale.  
  
## Personalizzazioni specifiche classi  
 Suggerimenti aggiuntivi di personalizzazione si trovano negli argomenti seguenti:  
  
-   [CBasePane Class](../mfc/reference/cbasepane-class.md)  
  
-   [CDockablePane Class](../mfc/reference/cdockablepane-class.md)  
  
-   [CDockingManager Class](../mfc/reference/cdockingmanager-class.md)  
  
-   [CMFCBaseTabCtrl Class](../mfc/reference/cmfcbasetabctrl-class.md)  
  
## Suggerimenti aggiuntivi di personalizzazione  
 [Personalizzazione di tastiera e mouse](../mfc/keyboard-and-mouse-customization.md)  
  
 [Strumenti definiti dall'utente](../mfc/user-defined-tools.md)  
  
## Vedere anche  
 [Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md)   
 [Implicazioni relative alla sicurezza della personalizzazione](../mfc/security-implications-of-customization.md)