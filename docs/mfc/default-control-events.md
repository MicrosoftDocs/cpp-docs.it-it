---
title: "Default Control Events | Microsoft Docs"
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
  - "C++"
helpviewer_keywords: 
  - "Dialog editor, default control events"
  - "controls [C++], default control events"
  - "events [C++], controls"
  - "dialog box controls, events"
ms.assetid: 75556b23-18f5-4390-97a4-2ecad3309741
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Default Control Events
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ai seguenti nomi di controlli sono associati gli eventi predefiniti indicati:  
  
|Nome del controllo|Evento predefinito|  
|------------------------|------------------------|  
|Animazione|**ACN\_START**|  
|Casella di controllo|**BN\_CLICKED**|  
|Casella combinata|**CBN\_SELCHANGE**|  
|Personalizzato|**TTN\_GETDISPINFO**|  
|Selezione data e ora|**DTN\_DATETIMECHANGE**|  
|Casella di testo|**EN\_CHANGE**|  
|Casella di gruppo|Non applicabile|  
|Tasto di scelta|**NM\_OUTOFMEMORY**|  
|Indirizzo IP|**IPN\_FIELDCHANGED**|  
|Elenco|**LVN\_ITEMCHANGE**|  
|Casella di riepilogo|**LBN\_SELCHANGE**|  
|Calendario mensile|**MCN\_SELCHANGE**|  
|Controllo immagine|Non applicabile|  
|Stato|**NM\_CUSTOMDRAW**|  
|Pulsante di comando|**BN\_CLICKED**|  
|Pulsante di opzione|**BN\_CLICKED**|  
|Rich Edit|**EN\_CHANGE**|  
|Barra di scorrimento|**NM\_THEMECHANGED**|  
|Slider|**NM\_CUSTOMDRAW**|  
|Casella di selezione|**UDN\_DELTAPOS**|  
|Testo statico|Non applicabile|  
|Tab|**TCN\_SELCHANGE**|  
|Struttura ad albero|**TVN\_SELCHANGE**|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Defining Member Variables for Dialog Controls](../mfc/defining-member-variables-for-dialog-controls.md)   
 [Tipi di messaggi associati a oggetti dell'interfaccia utente](../mfc/reference/message-types-associated-with-user-interface-objects.md)   
 [Modifica di un gestore messaggi](../mfc/reference/editing-a-message-handler.md)   
 [Definizione di un gestore messaggi per un messaggio riprodotto](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md)   
 [Dichiarazione di una variabile basata su una nuova classe di controlli](../mfc/reference/declaring-a-variable-based-on-your-new-control-class.md)   
 [Override di una funzione virtual](../ide/overriding-a-virtual-function-visual-cpp.md)