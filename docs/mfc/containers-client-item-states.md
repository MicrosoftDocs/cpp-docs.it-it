---
title: 'Contenitori: Elementi Client stati | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE containers [MFC], client-item states
- states, OLE container client-item
- lifetime, lifetime states and OLE container client items
- client items and OLE containers
ms.assetid: e7021caa-bd07-4adb-976e-f5f3d025bc53
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6bcc43d4e8b32a8766eef7c50e45bece569ef5c3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="containers-client-item-states"></a>Contenitori: stati Client-Item
Questo articolo illustra i diversi stati di che un elemento client passa attraverso il ciclo di vita.  
  
 Un elemento client passa attraverso diversi stati, così come viene creato, attivato, modificato e salvato. Ogni volta che cambia lo stato dell'elemento, il framework chiama [COleClientItem:: OnChange](../mfc/reference/coleclientitem-class.md#onchange) con il `OLE_CHANGED_STATE` notifica. Il secondo parametro è un valore di **COleClientItem:: ItemState** enumerazione. Può essere uno dei valori seguenti:  
  
-   **COleClientItem::emptyState**  
  
-   **COleClientItem::loadedState**  
  
-   **COleClientItem::openState**  
  
-   **COleClientItem::activeState**  
  
-   **COleClientItem::activeUIState**  
  
 Nello stato vuoto, un elemento client non è ancora completamente un elemento. È stata allocata memoria relativo, ma non è ancora stato inizializzato con i dati dell'elemento OLE. Si tratta dello stato di un elemento client è in quando è stato creato tramite una chiamata a **nuova** ma non ha ancora subito il secondo passaggio della creazione del genere in due passaggi.  
  
 Nel secondo passaggio, eseguito tramite una chiamata a `COleClientItem::CreateFromFile` o un altro **CreateFrom***xxxx* funzione, l'elemento viene completamente creato. I dati OLE (da un file o un'altra origine, ad esempio negli Appunti) sono stati associati la `COleClientItem`-oggetto derivato. Ora l'elemento è nello stato di caricamento.  
  
 Quando un elemento è stato aperto nella finestra del server anziché sul posto nel documento del contenitore, è nello stato aperto (o completamente aperto). In questo stato, un tratteggio incrociato in genere viene creato tramite la rappresentazione dell'elemento nella finestra del contenitore per indicare che l'elemento è attivo in un' posizione.  
  
 Quando un elemento è stato attivato sul posto, ha esito positivo, in genere solo in breve, tramite lo stato attivo. Che quindi entra in stato attivo dell'interfaccia utente, in cui il server è unito il relativo menu, barre degli strumenti e altri componenti dell'interfaccia utente con quelli del contenitore. La presenza di questi componenti dell'interfaccia utente distingue lo stato attivo dell'interfaccia utente dallo stato attivo. In caso contrario, lo stato attivo è simile allo stato attivo dell'interfaccia utente. Se il server supporta l'annullamento, il server è necessario per mantenere le informazioni di stato di annullamento di un elemento OLE finché raggiunge lo stato aperto o caricato.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Attivazione](../mfc/activation-cpp.md)   
 [Contenitori: Le notifiche elementi Client](../mfc/containers-client-item-notifications.md)   
 [Tracker](../mfc/trackers.md)   
 [Classe CRectTracker](../mfc/reference/crecttracker-class.md)
