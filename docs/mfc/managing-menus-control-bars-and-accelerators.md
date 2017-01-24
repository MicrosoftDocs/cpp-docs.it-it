---
title: "Gestione di menu, barre di controllo e tasti di scelta rapida | Microsoft Docs"
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
  - "tabella dei tasti di scelta rapida [C++]"
  - "barre di controllo, aggiornamento nelle finestre cornice"
  - "finestre cornice, aggiornamento"
  - "MDI, finestre cornice"
  - "menu, aggiornamento come modifiche di contesto"
  - "condivisione di menu"
  - "barre di stato, aggiornamento"
  - "aggiornamento di oggetti dell'interfaccia utente"
  - "oggetti dell'interfaccia utente, aggiornamento"
ms.assetid: 97ca1997-06df-4373-b023-4f7ecd81047b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione di menu, barre di controllo e tasti di scelta rapida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La finestra cornice gestisce aggiornare gli oggetti dell'interfaccia utente, inclusi i menu, pulsanti della barra degli strumenti, sulla barra di stato e i tasti di scelta rapida.  Gestisce inoltre condividere la barra dei menu nelle applicazioni MDI.  
  
## Gestire i menu  
 La finestra cornice partecipa a aggiornare gli elementi dell'interfaccia utente utilizzando il meccanismo di `ON_UPDATE_COMMAND_UI` descritto in [Come aggiornare gli oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md).  I pulsanti sulle barre degli strumenti e altre barre di controllo vengono aggiornati durante il ciclo inattivo.  Le voci di menu nei menu a discesa della barra dei menu sono aggiornate appena prima dei menu a discesa del menu.  
  
 Per le applicazioni MDI, la finestra cornice MDI gestisce la barra dei menu e la didascalia.  Una finestra cornice MDI possiede un menu predefinito utilizzato come la barra dei menu quando non sono finestre figlio MDI attiva.  Quando sono presenti elementi figlio attivi, la barra dei menu della finestra cornice MDI viene rilevata dal menu della finestra figlio MDI attiva.  Se un'applicazione MDI supporta i tipi di documenti multipli, ad esempio il grafico e documenti del foglio di lavoro, ogni tipo inserisce i propri menu nella barra dei menu e la modifica della barra del titolo della finestra cornice principale.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) fornisce un'implementazione predefinita per i controlli standard nella finestra visualizzata per le applicazioni MDI.  In particolare, il comando nuova finestra \(**ID\_WINDOW\_NEW**\) viene implementato creare una finestra cornice e una visualizzazione nel documento corrente.  È necessario eseguire l'override di queste implementazioni solo se è necessaria la personalizzazione avanzata.  
  
 Le finestre figlio MDI più dello stesso tipo di documento condividono risorse di menu.  Se alcune finestre figlio MDI vengono create nello stesso modello di documento, possono qualsiasi utilizzo la stessa risorsa menu, risparmiante alle risorse di sistema in windows.  
  
## Gestire la barra di stato  
 La finestra cornice viene inoltre posizionato nella barra di stato all'interno dell'area client e gestisce gli indicatori della barra di stato.  La finestra cornice clear e aggiorna l'area messaggio nella barra di stato in base alle necessità e stringhe di richiesta di visualizzazione mentre l'utente seleziona le voci di menu o i pulsanti della barra degli strumenti, come descritto in [Come visualizzare informazioni del comando nella barra di stato](../mfc/how-to-display-command-information-in-the-status-bar.md).  
  
## Gestire i tasti di scelta rapida  
 Ogni finestra cornice gestisce una tabella di tasti di scelta rapida facoltativo che effettua la conversione dei tasti di scelta rapida automaticamente.  Questo meccanismo semplice definire tasti di scelta rapida \(anche noto come tasti di scelta rapida\) comandi di menu che richiama.  
  
## Vedere anche  
 [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)