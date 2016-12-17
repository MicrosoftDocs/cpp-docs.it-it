---
title: "Contenitori: stati Client-Item | Microsoft Docs"
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
  - "elementi e contenitori OLE client"
  - "durata, stati del ciclo di vita e elementi client dei contenitori OLE"
  - "contenitori OLE, stati elementi client"
  - "stati, elementi client di contenitore OLE"
ms.assetid: e7021caa-bd07-4adb-976e-f5f3d025bc53
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori: stati Client-Item
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra i diversi stati di un elemento del client passa nella relativa durata.  
  
 Un elemento del client passa attraverso i diversi stati mentre viene creato, attivata, modificato e salvato.  Ogni volta che ai cambiamenti di stato dell'elemento, il framework chiama [COleClientItem::OnChange](../Topic/COleClientItem::OnChange.md) con la notifica di `OLE_CHANGED_STATE`.  Il secondo parametro è un valore dall'enumerazione di **COleClientItem::ItemState**.  Può essere:  
  
-   **COleClientItem::emptyState**  
  
-   **COleClientItem::loadedState**  
  
-   **COleClientItem::openState**  
  
-   **COleClientItem::activeState**  
  
-   **COleClientItem::activeUIState**  
  
 In stato vuoto, un elemento client non essere completamente un elemento.  La memoria è stata allocata per, ma non è ancora stata inizializzata con i dati dell'elemento OLE.  Questo è lo stato di un elemento client è in quando viene creato tramite una chiamata a **nuova** comunque che non ha subito il secondo passaggio di creazione in due fasi tipica.  
  
 La seconda operazione, eseguita con una chiamata a `COleClientItem::CreateFromFile` o a un'altra funzione di **CreateFrom***xxxx*, l'elemento è completamente creato.  I dati OLE \(da un file o da un'altra origine, ad esempio gli Appunti\) sono stati associati a `COleClientItem`\- oggetto derivato.  Ora l'elemento è stato caricato.  
  
 Quando un elemento viene aperto nella finestra del server anziché aperto sul posto nel documento client, è \(o completamente aprire\) nello stato aperto.  In questo stato, una tra covata in genere viene disegnata sulla rappresentazione dell'elemento nella finestra contenitore per indicare che l'elemento è attivo in un altro punto.  
  
 Quando un elemento è stato attivato sul posto, passa, in genere solo brevemente, attraverso lo stato attivo.  Quindi assume lo stato attivo dell'interfaccia utente, dove il server unito i menu, barre degli strumenti e altri componenti dell'interfaccia utente a quelle del contenitore.  La presenza di questi componenti dell'interfaccia utente consente di spostare lo stato attivo interfaccia utente dallo stato attivo.  In caso contrario, lo stato attivo è simile allo stato attivo dell'interfaccia utente.  Se annulla server di supportare, il server è richiesta di mantenere le informazioni della fase di rollback\- stato dell'elemento OLE finché non raggiungerà caricato o aprire lo stato.  
  
## Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Attivazione](../mfc/activation-cpp.md)   
 [Contenitori: notifiche Client\-Item](../mfc/containers-client-item-notifications.md)   
 [Tracker](../mfc/trackers.md)   
 [CRectTracker Class](../mfc/reference/crecttracker-class.md)