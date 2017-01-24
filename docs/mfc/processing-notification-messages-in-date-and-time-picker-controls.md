---
title: "Elaborazione dei messaggi di notifica nel controlli selezione data e ora | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DTN_CLOSEUP"
  - "DTN_DATETIMECHANGE"
  - "DTN_DROPDOWN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDateTimeCtrl (classe), gestione delle notifiche"
  - "DateTimePicker (controllo) [MFC]"
  - "DateTimePicker (controllo) [MFC], gestione delle notifiche"
  - "DTN_CLOSEUP (notifica)"
  - "DTN_DATETIMECHANGE (notifica)"
  - "DTN_DROPDOWN (notifica)"
  - "DTN_FORMAT (notifica)"
ms.assetid: ffbe29ab-ff80-4609-89f7-260b404439c4
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elaborazione dei messaggi di notifica nel controlli selezione data e ora
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Mentre gli utenti interagiscono con il controllo di selezione data e ora, il controllo \(`CDateTimeCtrl`\) invia i messaggi di notifica alla finestra padre, in genere una visualizzazione o un oggetto finestra di dialogo.  Gestire questi messaggi se si desidera eseguire un'operazione nella risposta.  Ad esempio, quando l'utente apre la selezione data e ora per visualizzare il controllo calendario mensile incorporato, la notifica di **DTN\_DROPDOWN** viene inviata.  
  
 Utilizzare la Finestra Proprietà per aggiungere gestori della notifica alla classe padre per i messaggi che si desidera implementare.  
  
 Nell'elenco seguente vengono descritte le varie notifiche inviate dal controllo di selezione data e ora.  
  
-   **DTN\_DROPDOWN** notifica dell'elemento padre che il controllo calendario mensile incorporato sta per visualizzare.  Questa notifica viene inviato solo quando lo stile di **DTS\_UPDOWN** non è stato impostato.  Per ulteriori informazioni su questa notifica, vedere [Accedere al controllo calendario mensile incorporato](../mfc/accessing-the-embedded-month-calendar-control.md).  
  
-   **DTN\_CLOSEUP** notifica dell'elemento padre che il controllo calendario mensile incorporato sta per la chiusura.  Questa notifica viene inviato solo quando lo stile di **DTS\_UPDOWN** non è stato impostato.  
  
-   **DTN\_DATETIMECHANGE** notifica dell'elemento padre che una modifica si è verificata nel controllo.  
  
-   **DTN\_FORMAT** notifica il padre del testo è necessaria per essere visualizzati in un campo callback.  Per ulteriori informazioni su questi notifica e campi callback, vedere [Utilizzando i campi callback in un controllo di selezione data e ora](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
-   **DTN\_FORMATQUERY** richiede al padre per fornire la dimensione massima consentita della stringa visualizzata in un campo callback.  Gestire la notifica consente sempre correttamente il controllo per visualizzare l'output, riducendo lo sfarfallio della visualizzazione del controllo.  Per ulteriori informazioni su questa notifica, vedere [Utilizzando i campi callback in un controllo di selezione data e ora](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
-   **DTN\_USERSTRING** notifica dell'elemento padre che l'utente ha completato modificare il contenuto del controllo di selezione data e ora.  Questa notifica viene inviato solo quando lo stile di **DTS\_APPCANPARSE** è stato impostato.  
  
-   **DTN\_WMKEYDOWN** notifica al padre quando gli utenti in un campo callback.  Gestire la notifica per emulare la stessa risposta della tastiera supportate per i campi non di callback in un controllo di selezione data e ora.  Per ulteriori informazioni su questa notifica, vedere [Campi callback di supporto in un controllo di DTP](http://msdn.microsoft.com/library/windows/desktop/bb761726) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)