---
title: 'Contenitori: Notifiche elementi Client | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- notifications [MFC], container client item
- OLE containers [MFC], client-item notifications
- client items and OLE containers
ms.assetid: e1f1c427-01f5-45f2-b496-c5bce3d76340
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5db5170b6c946e4bfeda99a3275f045a07fc9beb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46435220"
---
# <a name="containers-client-item-notifications"></a>Contenitori: notifiche Client-Item

Questo articolo illustra le funzioni sottoponibili a override chiamato dal framework MFC quando le applicazioni server modificare gli elementi nel documento dell'applicazione client.

[COleClientItem](../mfc/reference/coleclientitem-class.md) definisce diverse funzioni sottoponibili a override che vengono chiamate in risposta alle richieste dall'applicazione del componente, noto anche come l'applicazione server. Sui sottoponibili a override in genere fungono da notifiche. Essi informano l'applicazione contenitore di vari eventi, ad esempio l'attivazione dello scorrimento, o una modifica della posizione e delle modifiche apportate dall'utente durante la modifica o la manipolazione dell'elemento.

Il framework di notifica all'applicazione contenitore di modifiche tramite una chiamata a `COleClientItem::OnChange`, una funzione sottoponibile a override la cui implementazione è obbligatorio. Questa funzione protetta riceve due argomenti. La prima specifica il motivo per che il server modificato l'elemento:

|Notifica|Significato|
|------------------|-------------|
|**OLE_CHANGED**|Aspetto di un elemento OLE viene modificato.|
|**OLE_SAVED**|L'elemento OLE è stato salvato.|
|**OLE_CLOSED**|L'elemento OLE è stato chiuso.|
|**OLE_RENAMED**|Il documento server contenente l'elemento OLE è stato rinominato.|
|**OLE_CHANGED_STATE**|L'elemento OLE è stato modificato da uno stato a altro.|
|**OLE_CHANGED_ASPECT**|L'aspetto di disegno dell'elemento OLE è stato modificato dal framework.|

Questi valori sono compresi tra il **OLE_NOTIFICATION** enumerazione, definito nel AFXOLE. H.

Il secondo argomento alla funzione specifica come l'elemento è stato modificato o lo stato che è stato immesso:

|Quando è primo argomento|Secondo argomento|
|----------------------------|---------------------|
|**OLE_SAVED** o **OLE_CLOSED**|Non viene utilizzato.|
|**OLE_CHANGED**|Specifica l'aspetto dell'elemento OLE che è stato modificato.|
|**OLE_CHANGED_STATE**|Descrive lo stato venga immesso (*emptyState*, *loadedState*, *openState*, *activeState*, o  *activeUIState*).|

Per altre informazioni sugli stati di può assumere una voce di client, vedere [contenitori: stati elementi Client](../mfc/containers-client-item-states.md).

Il framework chiama `COleClientItem::OnGetItemPosition` quando un elemento viene attivato per la modifica sul posto. Implementazione è necessaria per le applicazioni che supportano la modifica sul posto. La creazione guidata applicazione MFC fornisce un'implementazione di base, che assegna le coordinate dell'elemento per il `CRect` oggetto passato come argomento a `OnGetItemPosition`.

Se posizione o le dimensioni di un elemento OLE viene modificato durante la modifica sul posto, informazioni del contenitore sulla posizione dell'elemento e i rettangoli di ritaglio devono essere aggiornate e il server deve ricevere informazioni sulle modifiche. Il framework chiama `COleClientItem::OnChangeItemPosition` per questo scopo. La creazione guidata applicazione MFC offre una sostituzione che chiama la funzione della classe di base. È consigliabile modificare la funzione che scrive la creazione guidata applicazione per il `COleClientItem`-classe derivata in modo che la funzione Aggiorna tutte le informazioni conservate dall'oggetto client-item.

## <a name="see-also"></a>Vedere anche

[Contenitori](../mfc/containers.md)<br/>
[Contenitori: stati elementi client](../mfc/containers-client-item-states.md)<br/>
[COleClientItem:: OnChangeItemPosition](../mfc/reference/coleclientitem-class.md#onchangeitemposition)

