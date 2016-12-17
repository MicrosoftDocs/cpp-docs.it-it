---
title: "Procedura di stampa predefinita | Microsoft Docs"
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
  - "stampa predefinita"
  - "impostazioni predefinite, stampa"
  - "stampa [MFC], predefinita"
ms.assetid: 0f698459-0fc9-4d43-97da-29cf0f65daa2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura di stampa predefinita
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato il processo di stampa predefinito in Windows in termini del framework MFC.  
  
 Nelle applicazioni MFC, la classe di visualizzazione dispone di una funzione membro denominata `OnDraw` contenente tutto il codice di disegno.  `OnDraw` accetta come parametro un puntatore a un oggetto [CDC](../mfc/reference/cdc-class.md).  L'oggetto `CDC` rappresenta il contesto di dispositivo che deve ricevere l'immagine prodotta da `OnDraw`.  Quando la finestra visualizza il documento riceve un messaggio [WM\_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213), il framework chiama `OnDraw` e passa ad essa un contesto di dispositivo per lo schermo \(per la precisione un oggetto [CPaintDC](../mfc/reference/cpaintdc-class.md)\).  Pertanto, l'output di `OnDraw` sarà inviato allo schermo.  
  
 Nella programmazione per Windows, inviare l'output alla stampante è molto simile a inviare l'output allo schermo.  Questo perché la Windows Graphics Device Interface \(GDI\) è indipendente dall'hardware.  È possibile utilizzare le stesse funzioni GDI per la visualizzazione su schermo o per la stampa utilizzando semplicemente il contesto di dispositivo appropriato.  Se l'oggetto `CDC` ricevuto da `OnDraw` rappresenta la stampante, l'output di `OnDraw` sarà inviato alla stampante.  
  
 Questo mostra come le applicazioni MFC possono eseguire la stampa semplice senza necessità di operazioni aggiuntive.  Il framework si prende cura della visualizzazione della finestra di dialogo Stampa e della creazione di un contesto di dispositivo per la stampante.  Quando l'utente seleziona il comando Stampa dal menu File, la visualizzazione passa tale contesto di dispositivo a `OnDraw`, che disegna il documento nella stampante.  
  
 Tuttavia, esistono alcune differenze significative tra stampa e visualizzazione su schermo.  Quando si stampa, è necessario dividere il documento in pagine distinte e visualizzarle una alla volta, anziché mostrare la porzione visibile in una finestra.  Come effetto, si deve tenere conto del formato della carta \(ovvero dimensione lettera, legale o busta\).  È possibile che si desideri stampare con orientamenti diversi, quali orientamento orizzontale o verticale.  La libreria MFC non può prevedere come l'applicazione gestirà questi problemi, pertanto viene fornito un protocollo per poter aggiungere queste funzionalità.  
  
 Tale protocollo è descritto nell'articolo [Documenti con più pagine](../mfc/multipage-documents.md).  
  
## Vedere anche  
 [Stampa](../mfc/printing.md)