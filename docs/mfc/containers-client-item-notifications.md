---
title: 'Contenitori: notifiche Client-Item'
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], container client item
- OLE containers [MFC], client-item notifications
- client items and OLE containers
ms.assetid: e1f1c427-01f5-45f2-b496-c5bce3d76340
ms.openlocfilehash: 54b1b2a64685b00fb265e0f80c1f6ad878a7da85
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623022"
---
# <a name="containers-client-item-notifications"></a>Contenitori: notifiche Client-Item

Questo articolo illustra le funzioni sottoponibili a override che il framework MFC chiama quando le applicazioni server modificano gli elementi nel documento dell'applicazione client.

[COleClientItem](reference/coleclientitem-class.md) definisce diverse funzioni sottoponibili a override che vengono chiamate in risposta alle richieste dell'applicazione componente, che viene anche chiamata applicazione server. Questi sottoponibili a override in genere fungono da notifiche. Informano l'applicazione contenitore di vari eventi, ad esempio lo scorrimento, l'attivazione o la modifica della posizione, nonché delle modifiche apportate dall'utente durante la modifica o la modifica dell'elemento.

Il framework invia una notifica all'applicazione contenitore delle modifiche tramite una chiamata a `COleClientItem::OnChange` , una funzione sottoponibile a override la cui implementazione è obbligatoria. Questa funzione protetta riceve due argomenti. Il primo specifica il motivo per cui il server ha modificato l'elemento:

|Notifica|Significato|
|------------------|-------------|
|**OLE_CHANGED**|L'aspetto dell'elemento OLE è stato modificato.|
|**OLE_SAVED**|L'elemento OLE è stato salvato.|
|**OLE_CLOSED**|L'elemento OLE è stato chiuso.|
|**OLE_RENAMED**|Il documento del server contenente l'elemento OLE è stato rinominato.|
|**OLE_CHANGED_STATE**|L'elemento OLE è stato modificato da uno stato a un altro.|
|**OLE_CHANGED_ASPECT**|L'aspetto di traccia dell'elemento OLE è stato modificato dal Framework.|

Questi valori sono delineati dall'enumerazione **OLE_NOTIFICATION** , definita in AFXOLE. H.

Il secondo argomento di questa funzione specifica il modo in cui l'elemento è stato modificato o lo stato immesso:

|Quando il primo argomento è|Secondo argomento|
|----------------------------|---------------------|
|**OLE_SAVED** o **OLE_CLOSED**|Non viene utilizzato.|
|**OLE_CHANGED**|Specifica l'aspetto dell'elemento OLE che è stato modificato.|
|**OLE_CHANGED_STATE**|Descrive lo stato immesso (*emptyState*, *loadedState*, *openState*, *ActiveState*o *activeUIState*).|

Per ulteriori informazioni sugli Stati che un elemento client può assumere, vedere [contenitori: Stati degli elementi client](containers-client-item-states.md).

Il Framework chiama `COleClientItem::OnGetItemPosition` quando un elemento viene attivato per la modifica sul posto. L'implementazione è necessaria per le applicazioni che supportano la modifica sul posto. La creazione guidata applicazione MFC fornisce un'implementazione di base, che assegna le coordinate dell'elemento all' `CRect` oggetto passato come argomento a `OnGetItemPosition` .

Se la posizione o le dimensioni di un elemento OLE cambiano durante la modifica sul posto, è necessario aggiornare le informazioni del contenitore sulla posizione e sui rettangoli di ritaglio dell'elemento e il server deve ricevere informazioni sulle modifiche. Il Framework chiama `COleClientItem::OnChangeItemPosition` a questo scopo. La creazione guidata applicazione MFC fornisce una sostituzione che chiama la funzione della classe di base. È necessario modificare la funzione che la creazione guidata applicazione scrive per la `COleClientItem` classe derivata da, in modo che la funzione aggiorni le informazioni conservate dall'oggetto client-elemento.

## <a name="see-also"></a>Vedere anche

[Contenitori](containers.md)<br/>
[Contenitori: stati elementi client](containers-client-item-states.md)<br/>
[COleClientItem:: OnChangeItemPosition](reference/coleclientitem-class.md#onchangeitemposition)
