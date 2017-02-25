---
title: "Quando vengono chiamati i gestori aggiornamento | Microsoft Docs"
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
  - "comandi (routing), comandi di aggiornamento"
  - "comandi (routing), gestori aggiornamento"
  - "disabilitazione voci di menu"
  - "disabilitazione dei pulsanti della barra degli strumenti"
  - "voci di menu, abilitazione"
  - "menu [C++], inizializzazione"
  - "menu [C++], aggiornamento come modifiche di contesto"
  - "pulsanti della barra degli strumenti [C++], abilitazione"
  - "controlli della barra degli strumenti [MFC], aggiornati durante il metodo OnIdle"
  - "barre degli strumenti [C++], aggiornamento"
  - "gestori aggiornamento"
  - "gestori aggiornamento, chiamata"
  - "aggiornamento di oggetti dell'interfaccia utente"
ms.assetid: 7359f6b1-4669-477d-bd99-690affed08d9
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Quando vengono chiamati i gestori aggiornamento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Si supponga i clic dell'utente il mouse sul menu File, che genera un messaggio di `WM_INITMENUPOPUP`.  Il meccanismo di aggiornamento del framework aggiorna collettivamente tutti gli elementi dal menu File prima dei menu a discesa del menu pertanto l'utente possano visualizzarle.  
  
 A questo scopo, le route del framework aggiornano i controlli per tutte le voci del menu di scelta rapida lungo il routing di comandi standard.  Le destinazioni comando sul routing è possibile aggiornare tutte le voci di menu corrispondente il comando di aggiornamento specificando una voce della mappa messaggi \(appropriata del form `ON_UPDATE_COMMAND_UI`\) e chiamando una funzione del gestore "update".  Pertanto, per un menu con sei voci di menu, sei comandi di aggiornamento vengono inviati.  Se un gestore aggiornamento esiste per l'id di comando della voce di menu, viene chiamata per eseguire l'aggiornamento.  In caso contrario, il framework per l'esistenza di un gestore per tale ID comando e abilita o disabilita la voce di menu in base alle proprie esigenze.  
  
 Se il framework non trova una voce di `ON_UPDATE_COMMAND_UI` durante il routing dei comandi, abilita automaticamente l'oggetto dell'interfaccia utente se è presente un elemento di `ON_COMMAND` posizionato con lo stesso ID di comando  In caso contrario, disabilita l'oggetto dell'interfaccia utente.  Di conseguenza, per assicurarsi che un oggetto dell'interfaccia utente è abilitato, fornire un gestore per il comando che l'oggetto genera o fornire un gestore per aggiornamento.  Vedere la figura nell'argomento [Oggetti dell'interfaccia utente e ID di comando](../mfc/user-interface-objects-and-command-ids.md).  
  
 È possibile disabilitare disabilitare predefinito degli oggetti dell'interfaccia utente.  Per ulteriori informazioni, vedere il membro della classe [m\_bAutoMenuEnable](../Topic/CFrameWnd::m_bAutoMenuEnable.md)`CFrameWnd` nel *Riferimento MFC*.  
  
 L'inizializzazione di menu è automatica nel framework, verificantesi quando l'applicazione riceve un messaggio di `WM_INITMENUPOPUP`.  Durante il ciclo inattivo, il framework esegue la ricerca del routing di comandi gestori aggiornamenti del pulsante anche per i menu.  
  
## Vedere anche  
 [Procedura: aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)