---
title: "Messaggi di notifica del controllo Tree | Microsoft Docs"
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
  - "CTreeCtrl (classe), notifiche"
  - "messaggi, notifica"
  - "notifiche, CTreeCtrl"
  - "notifiche, struttura ad albero (controlli)"
  - "struttura ad albero (controlli), messaggi di notifica"
ms.assetid: ac7013b4-91dd-4668-bd75-439ca0680ef9
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Messaggi di notifica del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) invia i seguenti messaggi di notifica come messaggi di **WM\_NOTIFY** :  
  
|Messaggio di notifica|Descrizione|  
|---------------------------|-----------------|  
|**TVN\_BEGINDRAG**|Segnala l'inizio di un'operazione di trascinamento della selezione|  
|**TVN\_BEGINLABELEDIT**|Segnala l'inizio della modifica sul posto dell'etichetta|  
|**TVN\_BEGINRDRAG**|Segnala l'inizio dell'operazione di trascinamento, utilizzando il pulsante destro del mouse|  
|**TVN\_DELETEITEM**|Segnala l'eliminazione di un elemento specifico|  
|**TVN\_ENDLABELEDIT**|Segnala la fine della modifica dell'etichetta|  
|**TVN\_GETDISPINFO**|Richiede le informazioni del controllo struttura ad albero richiede per visualizzare un elemento|  
|**TVN\_ITEMEXPANDED**|Segnali che l'elenco di un elemento padre degli elementi figlio è stato espanso o compresso stato|  
|**TVN\_ITEMEXPANDING**|Segnala che l'elenco di un elemento padre degli elementi figlio sta per essere espansa o compressa|  
|**TVN\_KEYDOWN**|Segnala un evento di tastiera|  
|**TVN\_SELCHANGED**|Segnala che la selezione è stata modificata da un elemento ad un altro|  
|**TVN\_SELCHANGING**|Segnala che la selezione sta per essere modificati da un elemento ad un altro|  
|**TVN\_SETDISPINFO**|Notifica per aggiornare le informazioni per mantenere un elemento|  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)