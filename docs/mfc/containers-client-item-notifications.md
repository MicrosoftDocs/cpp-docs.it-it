---
title: "Contenitori: notifiche Client-Item | Microsoft Docs"
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
  - "notifiche, elementi client di contenitore"
  - "contenitori OLE, notifiche elementi client"
ms.assetid: e1f1c427-01f5-45f2-b496-c5bce3d76340
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori: notifiche Client-Item
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato funzioni sottoponibili a override che il framework MFC chiama quando le applicazioni server modificano gli elementi del documento dell'applicazione client.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md) definisce diverse funzioni sottoponibili a override che vengono chiamate in risposta alle richieste dall'applicazione del componente, che è denominata anche l'applicazione server.  Questi overridables generalmente agiscono da notifiche.  Notificare l'applicazione contenitore di vari eventi, ad esempio lo scorrimento, l'attivazione, o una modifica della posizione e le modifiche che l'utente viene effettuata quando si modifica oppure modificando l'elemento.  
  
 Il framework notifica l'applicazione contenitore delle modifiche tramite una chiamata a `COleClientItem::OnChange`, una funzione sottoponibile a override dell'implementazione è richiesta.  Questa funzione protetta riceve due argomenti.  Il primo specifica la ragione che il server è stato modificato l'elemento:  
  
|Notification|Significato|  
|------------------|-----------------|  
|`OLE_CHANGED`|L'aspetto dell'elemento OLE è stato modificato.|  
|`OLE_SAVED`|L'elemento OLE è stato salvato.|  
|`OLE_CLOSED`|L'elemento OLE è stato chiuso.|  
|**OLE\_RENAMED**|Il documento server contenente l'elemento OLE è stato rinominato.|  
|`OLE_CHANGED_STATE`|L'elemento OLE è stato modificato da uno stato a un altro.|  
|**OLE\_CHANGED\_ASPECT**|L'aspetto di disegno di elemento OLE è stato modificato dal framework.|  
  
 Questi valori provengono dall'enumerazione di **OLE\_NOTIFICATION**, definita in AFXOLE.H.  
  
 Il secondo argomento alla funzione specifica come elemento è stato modificato o che è stato immesso:  
  
|Quando il primo argomento è|Secondo argomento|  
|---------------------------------|-----------------------|  
|`OLE_SAVED` o `OLE_CLOSED`|Non viene utilizzato.|  
|`OLE_CHANGED`|Specifica l'aspetto dell'elemento OLE modificato.|  
|`OLE_CHANGED_STATE`|Viene descritto lo stato è impostato su \(`emptyState`, **loadedState**, `openState`, `activeState`, o `activeUIState`\).|  
  
 Per ulteriori informazioni sugli stati di un elemento client può assumere, vedere [Contenitori: Stati dell'elemento client](../mfc/containers-client-item-states.md).  
  
 Il framework chiama `COleClientItem::OnGetItemPosition` quando un elemento viene attivando per la modifica sul posto.  L'implementazione è richiesta per le applicazioni che supportano la modifica sul posto.  La Creazione guidata applicazione MFC fornisce un'implementazione di base, che assegna le coordinate dell'elemento all'oggetto di `CRect` passato come argomento a `OnGetItemPosition`.  
  
 Se le modifiche della posizione o della dimensione di un elemento OLE durante la modifica sul posto, le informazioni sul contenitore sulla posizione dell'elemento e rettangoli di ridimensionamento devono essere aggiornati e il server deve ricevere informazioni sulle modifiche.  Il framework chiama `COleClientItem::OnChangeItemPosition` a questo scopo.  La Creazione guidata applicazione MFC fornisce override che chiamano la funzione della classe base.  È necessario modificare la funzione della creazione guidata applicazioni scritte per il `COleClientItem`\- classe derivata in modo che la funzione aggiornare qualsiasi informazione mantenuta dall'oggetto client dell'elemento.  
  
## Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: stati Client\-Item](../mfc/containers-client-item-states.md)   
 [COleClientItem::OnChangeItemPosition](../Topic/COleClientItem::OnChangeItemPosition.md)