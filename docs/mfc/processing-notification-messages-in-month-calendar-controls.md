---
title: "Elaborazione dei messaggi di notifica nel controlli calendario mensile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMonthCalCtrl (classe), stati giorni"
  - "CMonthCalCtrl (classe), notifiche"
  - "controlli calendario mensile, messaggi di notifica"
  - "notifiche, per CMonthCalCtrl"
  - "notifiche, controllo calendario mensile"
ms.assetid: 607c3e90-0756-493b-9503-ce835a50c7ab
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Elaborazione dei messaggi di notifica nel controlli calendario mensile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Mentre gli utenti interagiscono con il controllo calendario mensile \(che seleziona le date e\/o che visualizza un altro mese\), il controllo \(`CMonthCalCtrl`\) invia i messaggi di notifica alla finestra padre, in genere una visualizzazione o un oggetto finestra di dialogo.  Gestire questi messaggi se si desidera eseguire un'operazione nella risposta.  Ad esempio, quando l'utente seleziona un altro mese per visualizzare, immettere un set di date che vengano sottolineate.  
  
 Utilizzare la Finestra Proprietà per aggiungere gestori della notifica alla classe padre per i messaggi che si desidera implementare.  
  
 Nell'elenco seguente vengono descritte le varie notifiche inviate dal controllo calendario mensile.  
  
-   **MCN\_GETDAYSTATE** richiede informazioni sui giorni devono essere visualizzati in grassetto.  Per informazioni sulla gestione di questa notifica, vedere [Impostare lo stato del giorno di un controllo calendario mensile](../mfc/setting-the-day-state-of-a-month-calendar-control.md).  
  
-   **MCN\_SELCHANGE** notifica dell'elemento padre che la data o l'intervallo seleziona data è stato modificato.  
  
-   **MCN\_SELECT** notifica dell'elemento padre che una selezione della data esplicita è stata eseguita.  
  
## Vedere anche  
 [Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controlli](../mfc/controls-mfc.md)