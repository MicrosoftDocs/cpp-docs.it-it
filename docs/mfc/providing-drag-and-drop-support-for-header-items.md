---
title: "Fornire supporto di trascinamento per gli elementi di intestazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHeaderCtrl (classe), supporto del trascinamento della selezione"
  - "notifiche HDN_"
  - "HDS_DRAGDROP (stile)"
  - "elementi di intestazione in controlli intestazione"
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Fornire supporto di trascinamento per gli elementi di intestazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per fornire il supporto di trascinamento della selezione alle voci di intestazione, specificare lo stile di `HDS_DRAGDROP`.  Trascinare il supporto per le voci di intestazione fornisce all'utente la possibilità di riordinare le voci di intestazione di un controllo intestazione.  Il comportamento predefinito fornisce un'immagine di trascinamento semitrasparente voce di intestazione trascinati e di un indicatore visivo della nuova posizione, se la voce di intestazione non viene rilasciato.  
  
 Come con funzionalità di trascinamento della selezione normale, è possibile estendere il pulsante ripristina il comportamento di trascinamento della selezione gestendo le notifiche di **HDN\_ENDDRAG** e di **HDN\_BEGINDRAG**.  È inoltre possibile personalizzare l'aspetto dell'immagine di trascinamento eseguire l'override della funzione membro di [CHeaderCtrl::CreateDragImage](../Topic/CHeaderCtrl::CreateDragImage.md).  
  
> [!NOTE]
>  Se viene fornito il supporto trascinamento di un controllo intestazione incorporato in un controllo elenco, vedere la sezione estesa di stile nell'argomento di [Modificare gli stili di controllo list](../mfc/changing-list-control-styles.md).  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)