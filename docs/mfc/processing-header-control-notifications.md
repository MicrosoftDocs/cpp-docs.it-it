---
title: "Elaborazione delle notifiche Header-Control | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "CHeaderCtrl (classe), elaborazione delle notifiche"
  - "controlli [MFC], intestazione"
  - "notifiche dei controlli intestazione"
  - "controlli intestazione, elaborazione delle notifiche"
  - "notifiche, elaborazione per CHeaderCtrl"
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elaborazione delle notifiche Header-Control
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella visualizzazione o classe della finestra di dialogo, utilizzare la Finestra Proprietà per creare una funzione di gestione di [OnChildNotify](../Topic/CWnd::OnChildNotify.md) con un'istruzione switch per tutti i messaggi di notifica del controllo intestazione \([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)\) si desidera gestire \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)\).  Le notifiche inviate alla finestra padre quando l'utente fa clic o fare doppio clic su una voce di intestazione, trascinare un separatore tra elementi, e così via.  
  
 I messaggi di notifica associati a un controllo intestazione sono elencati in [Riferimento al controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775239) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)