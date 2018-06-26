---
title: 'Dei contenitori: Notifiche elementi Client | Documenti Microsoft'
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
ms.openlocfilehash: d76717e68e37769cf55dceb4492ed78031c49e10
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928224"
---
# <a name="containers-client-item-notifications"></a>Contenitori: notifiche Client-Item
In questo articolo illustra le funzioni sottoponibili a override chiamato dal framework MFC quando le applicazioni server modificano gli elementi nel documento dell'applicazione client.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md) definisce diverse funzioni sottoponibili a override che vengono chiamate in risposta alle richieste dall'applicazione del componente, denominato anche l'applicazione server. Questi sottoponibili a override è generalmente fungono da notifiche. Informano l'applicazione contenitore di vari eventi, ad esempio lo scorrimento, attivazione, o una modifica della posizione e delle modifiche apportate dall'utente durante la modifica o la manipolazione dell'elemento.  
  
 Il framework di notifica all'applicazione contenitore di modifiche tramite una chiamata a `COleClientItem::OnChange`, una funzione sottoponibile a override la cui implementazione è obbligatorio. Questa funzione protetta riceve due argomenti. La prima specifica il motivo per che il server è modificato l'elemento:  
  
|Notifica|Significato|  
|------------------|-------------|  
|**OLE_CHANGED**|L'aspetto dell'elemento OLE è stato modificato.|  
|**OLE_SAVED**|L'elemento OLE è stato salvato.|  
|**OLE_CLOSED**|L'elemento OLE è stato chiuso.|  
|**OLE_RENAMED**|Il documento server contenente l'elemento OLE è stato rinominato.|  
|**OLE_CHANGED_STATE**|L'elemento OLE è cambiato da uno stato a un altro.|  
|**OLE_CHANGED_ASPECT**|L'aspetto di disegno dell'elemento OLE è stato modificato dal framework.|  
  
 Questi valori sono compresi il **OLE_NOTIFICATION** enumerazione, è definito in AFXOLE. H.  
  
 Il secondo argomento della funzione specifica come l'elemento è stata modificata o lo stato che è in stato di:  
  
|Quando è primo argomento|Secondo argomento|  
|----------------------------|---------------------|  
|**OLE_SAVED** o **OLE_CLOSED**|Non viene usato.|  
|**OLE_CHANGED**|Specifica l'aspetto dell'elemento OLE che è stato modificato.|  
|**OLE_CHANGED_STATE**|Descrive lo stato (*emptyState*, *loadedState*, *openState*, *activeState*, o  *activeUIState*).|  
  
 Per ulteriori informazioni sugli stati di può assumere una voce di client, vedere [contenitori: stati Client-Item](../mfc/containers-client-item-states.md).  
  
 Il framework chiama `COleClientItem::OnGetItemPosition` quando un elemento viene attivato per la modifica sul posto. Implementazione è richiesto per le applicazioni che supportano la modifica sul posto. La creazione guidata applicazione MFC fornisce un'implementazione di base, che assegna le coordinate dell'elemento per il `CRect` oggetto che viene passato come argomento a `OnGetItemPosition`.  
  
 Se posizione o le dimensioni di un elemento OLE viene modificato durante la modifica sul posto, è necessario aggiornare le informazioni del contenitore sulla posizione dell'elemento e i rettangoli di ritaglio e il server deve ricevere le informazioni sulle modifiche. Il framework chiama `COleClientItem::OnChangeItemPosition` per questo scopo. La creazione guidata applicazione MFC offre una sostituzione che chiama la funzione della classe di base. È consigliabile modificare la funzione che la creazione guidata applicazione scritta per il `COleClientItem`-classe derivata in modo che la funzione Aggiorna qualsiasi informazione conservate dall'oggetto client-item.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Dei contenitori: Stati elementi Client](../mfc/containers-client-item-states.md)   
 [COleClientItem:: OnChangeItemPosition](../mfc/reference/coleclientitem-class.md#onchangeitemposition)

