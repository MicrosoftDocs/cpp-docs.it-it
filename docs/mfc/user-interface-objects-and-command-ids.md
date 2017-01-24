---
title: "Oggetti dell&#39;interfaccia utente e ID comando | Microsoft Docs"
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
  - "comandi (gestione), oggetti dell'interfaccia utente"
  - "ID di comando, oggetti dell'interfaccia utente"
  - "comandi (routing), MFC"
  - "tasti di scelta rapida, associazione a ID"
  - "voci di menu, associazione a ID"
  - "MFC, comandi (routing)"
  - "controlli della barra degli strumenti [MFC], ID di comando"
  - "oggetti dell'interfaccia utente, associazione a ID"
ms.assetid: 4ea19e9b-ed1e-452e-bd33-7f509107a45b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Oggetti dell&#39;interfaccia utente e ID comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le voci di menu, pulsanti della barra degli strumenti e i tasti di scelta rapida sono "oggetti dell'interfaccia utente" in grado di generazione dei comandi.  Ogni oggetto dell'interfaccia utente di identificazione  Associa un oggetto dell'interfaccia utente con un comando assegnando lo stesso ID all'oggetto e al comando.  Come illustrato in [Messaggi](../mfc/messages.md), i controlli vengono implementati come messaggi speciali.  Nella figura "ordina" in Framework di seguito viene illustrato come il framework gestisce i controlli.  Quando un oggetto dell'interfaccia utente genera un comando, ad esempio `ID_EDIT_CLEAR_ALL`, uno degli oggetti di un'applicazione gestisce il comando \- nella figura che segue, la funzione di `OnEditClearAll` dell'oggetto documento viene chiamata da mappa messaggi del documento.  
  
 ![Comandi nel framework](../mfc/media/vc385p1.png "vc385P1")  
Comandi nel framework  
  
 Nella figura "comando che aggiorna in Framework" riportata di seguito viene illustrato come MFC aggiorna gli oggetti dell'interfaccia utente quali le voci di menu e pulsanti della barra degli strumenti.  Prima di menu a discesa di un menu, o durante il ciclo inattivo nel caso dei pulsanti della barra degli strumenti, MFC è destinata a un comando di aggiornamento.  Nella figura riportata di seguito, l'oggetto document chiama il gestore comando di aggiornamento, `OnUpdateEditClearAll`, per abilitare o disabilitare l'oggetto dell'interfaccia utente.  
  
 ![Aggiornamento comandi nel framework](../mfc/media/vc385p2.png "vc385P2")  
Aggiornamento dei comandi nel framework  
  
## Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)