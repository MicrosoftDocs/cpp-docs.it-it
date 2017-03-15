---
title: "Controlli ActiveX MFC: eventi | Microsoft Docs"
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
  - "COleControl (classe), gestione di eventi"
  - "eventi di contenitore"
  - "eventi personalizzati, aggiunta a controlli ActiveX"
  - "eventi (C++), controlli ActiveX"
  - "eventi (C++), mapping"
  - "mapping, eventi"
  - "MFC (controlli ActiveX), eventi"
  - "notifiche [C++], notifica di contenitori di eventi"
  - "OLE (eventi)"
  - "eventi predefiniti"
ms.assetid: e1e57e0c-206b-4923-a0b5-682c26564f74
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: eventi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Eventi di utilizzo dei controlli ActiveX per notificare a un contenitore che se si è verificato al controllo.  Alcuni esempi comuni degli eventi includono fa clic sul controllo, i dati immessi tramite tastiera e le modifiche allo stato del controllo.  Quando queste azioni elencate, il controllo genera un evento per avvisare il contenitore.  
  
 Eventi vengono chiamati messaggi.  
  
 MFC supporta due tipi di eventi: e azione personalizzata.  Gli eventi predefiniti sono gli eventi che venga l'handle di [COleControl](../mfc/reference/colecontrol-class.md) automaticamente.  Per un elenco completo degli eventi predefiniti, vedere l'articolo [Controlli ActiveX MFC: Aggiunta di eventi predefiniti](../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md).  Gli eventi personalizzati consentono a un controllo la possibilità di notificare a l un'azione specifica del controllo verifica.  Alcuni esempi sono una modifica nello stato interno di un controllo o di una ricezione di un determinato messaggio della finestra.  
  
 Affinché il controllo genera gli eventi correttamente, la classe del controllo deve eseguire il mapping di ogni evento del controllo su una funzione membro che deve essere chiamata quando l'evento correlato si verifica.  Questo meccanismo di mapping denominato una mappa eventi\) centralizza le informazioni sull'evento e consente Visual Studio più facilmente accesso e modificare gli eventi del controllo.  Questa mappa eventi viene dichiarata dalla macro seguente, disponibile nell'intestazione precompilata. H\) file della dichiarazione della classe del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#2](../mfc/codesnippet/CPP/mfc-activex-controls-events_1.h)]  
  
 Dopo la mappa eventi è stata dichiarata, deve essere definita nel file di implementazione del controllo \(.CPP\).  Le seguenti righe di codice definiscono la mappa eventi, consentendo il controllo a eventi specifici di generazione:  
  
 [!code-cpp[NVC_MFC_AxUI#3](../mfc/codesnippet/CPP/mfc-activex-controls-events_2.cpp)]  
[!code-cpp[NVC_MFC_AxUI#4](../mfc/codesnippet/CPP/mfc-activex-controls-events_3.cpp)]  
  
 Se si utilizza la Creazione guidata controllo ActiveX MFC per creare il progetto, aggiunge automaticamente queste righe.  Se non si utilizza la Creazione guidata controllo ActiveX MFC, è necessario aggiungere manualmente queste righe.  
  
 Mediante Visualizzazione classi, è possibile aggiungere eventi predefiniti supportati da classe `COleControl` o da eventi personalizzati definiti.  Per ogni nuovo evento, Visualizzazione classi aggiunge automaticamente la voce appropriata nella mappa eventi del controllo e del file .IDL del controllo.  
  
 Altri due articoli commercio gli eventi:  
  
-   [Controlli ActiveX MFC: Aggiunta di eventi predefiniti](../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)  
  
-   [Controlli ActiveX MFC: Aggiunta di eventi personalizzati](../mfc/mfc-activex-controls-adding-custom-events.md)  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)