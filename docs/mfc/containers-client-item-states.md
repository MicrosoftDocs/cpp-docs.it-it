---
title: 'Contenitori: stati Client-Item'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE containers [MFC], client-item states
- states, OLE container client-item
- lifetime, lifetime states and OLE container client items
- client items and OLE containers
ms.assetid: e7021caa-bd07-4adb-976e-f5f3d025bc53
ms.openlocfilehash: 927211ccec35d8ec26e2f76b971c59b80248ab96
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625982"
---
# <a name="containers-client-item-states"></a>Contenitori: stati Client-Item

Questo articolo illustra i diversi Stati che un elemento client passa per tutta la sua durata.

Un elemento client passa attraverso diversi Stati quando viene creato, attivato, modificato e salvato. Ogni volta che lo stato dell'elemento viene modificato, il Framework chiama [COleClientItem:: OnChange](reference/coleclientitem-class.md#onchange) con la notifica **OLE_CHANGED_STATE** . Il secondo parametro è un valore dell' `COleClientItem::ItemState` enumerazione. I possibili valori sono i seguenti:

- *COleClientItem:: emptyState*

- *COleClientItem:: loadedState*

- *COleClientItem:: openState*

- *COleClientItem:: activeState*

- *COleClientItem:: activeUIState*

Nello stato vuoto, un elemento client non è ancora completamente un elemento. La memoria è stata allocata, ma non è ancora stata inizializzata con i dati dell'elemento OLE. Si tratta dello stato in cui si trova un elemento client quando è stato creato tramite una chiamata a **New** ma non è ancora stato sottoposto al secondo passaggio della creazione tipica in due passaggi.

Nel secondo passaggio, eseguito tramite una chiamata a `COleClientItem::CreateFromFile` o a un'altra `CreateFrom` funzione *xxxx* , l'elemento viene creato completamente. I dati OLE (da un file o da un'altra origine, ad esempio gli appunti) sono stati associati all' `COleClientItem` oggetto derivato da. Ora l'elemento si trova nello stato Loaded.

Quando un elemento è stato aperto nella finestra del server anziché essere aperto sul posto nel documento del contenitore, si trova nello stato aperto (o completamente aperto). In questo stato viene in genere disegnato un tratteggio attraverso la rappresentazione dell'elemento nella finestra del contenitore per indicare che l'elemento è attivo altrove.

Quando un elemento è stato attivato sul posto, viene passato, in genere solo brevemente, tramite lo stato attivo. Entra quindi nello stato attivo dell'interfaccia utente, in cui il server ha unito i menu, le barre degli strumenti e altri componenti dell'interfaccia utente con quelli del contenitore. La presenza di questi componenti dell'interfaccia utente distingue lo stato attivo dell'interfaccia utente da uno stato attivo. In caso contrario, lo stato attivo sarà simile allo stato attivo dell'interfaccia utente. Se il server supporta l'annullamento, è necessario che il server mantenga le informazioni sullo stato di annullamento dell'elemento OLE fino a quando non raggiunge lo stato caricato o aperto.

## <a name="see-also"></a>Vedere anche

[Contenitori](containers.md)<br/>
[Activation](activation-cpp.md)<br/>
[Contenitori: notifiche elementi client](containers-client-item-notifications.md)<br/>
[Tracker](trackers.md)<br/>
[Classe CRectTracker](reference/crecttracker-class.md)
