---
title: 'Contenitori: Elementi Client notifiche | Documenti Microsoft'
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
ms.openlocfilehash: 2255f28c1250096bfbeb1a9365c57f78e17e20d7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="containers-client-item-notifications"></a>Contenitori: notifiche Client-Item
In questo articolo illustra le funzioni sottoponibili a override che il framework MFC chiama quando gli elementi nel documento dell'applicazione client di modificare le applicazioni server.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md) definisce diverse funzioni sottoponibili a override che vengono chiamate in risposta alle richieste dall'applicazione del componente, denominato anche l'applicazione server. In genere questi sottoponibili a override fungono da notifiche. Informano l'applicazione contenitore di vari eventi, ad esempio lo scorrimento, attivazione, o una modifica della posizione e delle modifiche apportate dall'utente durante la modifica o la manipolazione dell'elemento.  
  
 Il framework di notifica all'applicazione contenitore di modifiche tramite una chiamata a `COleClientItem::OnChange`, una funzione sottoponibile a override la cui implementazione è obbligatorio. Questa funzione protetta riceve due argomenti. La prima specifica il motivo per che il server è modificato l'elemento:  
  
|Notifica|Significato|  
|------------------|-------------|  
|`OLE_CHANGED`|L'aspetto dell'elemento OLE è stato modificato.|  
|`OLE_SAVED`|L'elemento OLE è stato salvato.|  
|`OLE_CLOSED`|L'elemento OLE è stato chiuso.|  
|**OLE_RENAMED**|Il documento server contenente l'elemento OLE è stato rinominato.|  
|`OLE_CHANGED_STATE`|L'elemento OLE è cambiato da uno stato a un altro.|  
|**OLE_CHANGED_ASPECT**|L'aspetto di disegno dell'elemento OLE è stato modificato dal framework.|  
  
 Questi valori sono compresi tra il **OLE_NOTIFICATION** enumerazione, è definito in AFXOLE. H.  
  
 Il secondo argomento della funzione specifica come l'elemento è stato modificato o lo stato che è in stato di:  
  
|Quando primo argomento è|Secondo argomento|  
|----------------------------|---------------------|  
|`OLE_SAVED` o `OLE_CLOSED`|Non viene usato.|  
|`OLE_CHANGED`|Specifica l'aspetto dell'elemento OLE che è stato modificato.|  
|`OLE_CHANGED_STATE`|Descrive lo stato (`emptyState`, **loadedState**, `openState`, `activeState`, o `activeUIState`).|  
  
 Per ulteriori informazioni sugli stati di può assumere una voce di client, vedere [contenitori: stati Client-Item](../mfc/containers-client-item-states.md).  
  
 Il framework chiama `COleClientItem::OnGetItemPosition` quando un elemento viene attivato per la modifica sul posto. Implementazione è necessario per le applicazioni che supportano la modifica sul posto. La creazione guidata applicazione MFC fornisce un'implementazione di base, che assegna le coordinate dell'elemento per il `CRect` oggetto passato come argomento di `OnGetItemPosition`.  
  
 Se posizione o le dimensioni di un elemento OLE viene modificato durante la modifica sul posto, è necessario aggiornare le informazioni del contenitore sulla posizione dell'elemento e i rettangoli di ritaglio e il server deve ricevere informazioni sulle modifiche. Il framework chiama `COleClientItem::OnChangeItemPosition` a questo scopo. La creazione guidata applicazione MFC fornisce un override che chiama la funzione della classe di base. È necessario modificare la funzione che scrive la creazione guidata applicazione per il `COleClientItem`-classe derivata, in modo che la funzione Aggiorna tutte le informazioni conservate dall'oggetto client-item.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: Stati elementi Client](../mfc/containers-client-item-states.md)   
 [COleClientItem:: OnChangeItemPosition](../mfc/reference/coleclientitem-class.md#onchangeitemposition)

