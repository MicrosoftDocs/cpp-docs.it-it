---
title: "Distruzione della finestra di dialogo | Microsoft Docs"
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
  - "distruzione, finestra di dialogo"
  - "finestre di dialogo, eliminazione"
  - "finestre di dialogo, eliminazione"
  - "finestre di dialogo, rimozione"
  - "MFC (finestre di dialogo), eliminazione"
  - "finestre di dialogo modali, eliminazione"
  - "finestre di dialogo non modali, eliminazione"
ms.assetid: dabceee7-3639-4d85-bf34-73515441b3d0
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Distruzione della finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Finestre di dialogo modali in genere vengono create nello stack frame e vengono eliminati alla funzione che le ha create fine.  Il distruttore dell'oggetto finestra di dialogo viene chiamato quando l'oggetto dall'ambito.  
  
 Finestre di dialogo non modale in genere vengono create e possedute da una visualizzazione padre o da una finestra cornice della finestra cornice principale dell'applicazione o una finestra cornice di documento.  Il gestore di [OnClose](../Topic/CWnd::OnClose.md) di impostazione predefinita chiama [DestroyWindow](../Topic/CWnd::DestroyWindow.md), che elimina la finestra di dialogo.  Se la finestra di dialogo sia da solo, senza i puntatori o a un'altra semantica speciale di proprietà, è necessario eseguire l'override di [PostNcDestroy](../Topic/CWnd::PostNcDestroy.md) elimini l'oggetto della finestra di dialogo C\+\+.  È inoltre necessario eseguire l'override di [OnCancel](../Topic/CDialog::OnCancel.md) e chiamare `DestroyWindow` da.  In caso contrario, il proprietario della finestra di dialogo deve eliminare l'oggetto C\+\+ quando non è più necessario.  
  
## Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)