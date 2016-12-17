---
title: "Elaborazione dei messaggi di notifica nei controlli List | Microsoft Docs"
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
  - "CListCtrl (classe), elaborazione delle notifiche"
  - "elaborazione delle notifiche"
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elaborazione dei messaggi di notifica nei controlli List
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come gli utenti fanno clic sulle intestazioni della colonna, trascinano le icone, modificano le etichette, e così via, il controllo elenco \([CListCtrl](../mfc/reference/clistctrl-class.md)\) invia i messaggi di notifica alla finestra padre.  Se si desidera eseguire un'operazione in risposta bisogna gestire questi messaggi.  Ad esempio, quando l'utente fa clic su un'intestazione della colonna, è possibile ordinare gli elementi in base al contenuto della colonna selezionata, come in Microsoft Outlook.  
  
 Elaborano i messaggi **WM\_NOTIFY** dal controllo elenco nella visualizzazione o nella classe della finestra di dialogo.  Utilizzare la Finestra Proprietà per creare una funzione di gestione [OnChildNotify](../Topic/CWnd::OnChildNotify.md) con un'istruzione switch in base alla quale messaggio di notifica viene gestito.  
  
 Per un elenco delle notifiche che un controllo elenco può inviare alla finestra padre, vedere [Riferimento del controllo visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774737) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)