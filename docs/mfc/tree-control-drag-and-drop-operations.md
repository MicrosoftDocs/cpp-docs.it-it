---
title: "Operazioni di trascinamento del controllo Tree | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "CTreeCtrl (classe), operazioni di trascinamento della selezione"
  - "trascinamento della selezione, CTreeCtrl"
  - "struttura ad albero (controlli), operazioni di trascinamento della selezione"
ms.assetid: 3cf78b4c-4579-4fe1-9bc9-c5ab876e4af1
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operazioni di trascinamento del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) invia una notifica quando l'utente inizia per trascinare un elemento.  Il controllo invia un messaggio di notifica di [TVN\_BEGINDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773504) quando l'utente inizia trascinando un elemento con il pulsante sinistro del mouse e un messaggio di notifica di [TVN\_BEGINRDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773509) quando l'utente inizia il trascinamento con il pulsante destro.  È possibile impedire un controllo struttura ad albero dall'invio delle notifiche fornendo al controllo di struttura ad albero lo stile di **TVS\_DISABLEDRAGDROP**.  
  
 Ottenere l'immagine da visualizzare durante un'operazione di trascinamento chiamare la funzione membro di [CreateDragImage](../Topic/CTreeCtrl::CreateDragImage.md).  Il controllo struttura ad albero creare una bitmap di trascinamento in base all'etichetta dell'elemento trascinato.  Il controllo struttura ad albero crea un elenco immagini, aggiungere la bitmap e restituisce un puntatore all'oggetto di [CImageList](../mfc/reference/cimagelist-class.md).  
  
 È necessario fornire il codice effettivamente trascinare l'elemento.  In genere ciò prevede l'utilizzo delle funzionalità trascinare le funzionielenco immagini ed elaborare i messaggi di [WM\_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) e di [WM\_LBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms645608) \(o [WM\_RBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms646243)\) inviati dopo l'operazione di trascinamento è stata avviata.  Per ulteriori informazioni sulle funzionielenco immagini, vedere [CImageList](../mfc/reference/cimagelist-class.md)*in riferimenti alla libreria MFC* e [Elenchi di immagini](http://msdn.microsoft.com/library/windows/desktop/bb761389) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  Per ulteriori informazioni sul trascinamento di un elemento del controllo struttura ad albero, vedere [Trascinare l'elemento della visualizzazione struttura ad albero](http://msdn.microsoft.com/library/windows/desktop/bb760017), anche in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
 Se gli elementi in un controllo struttura ad albero devono essere destinazioni di un'operazione di trascinamento della selezione, è necessario sapere quando il cursore del mouse su un elemento di destinazione.  È possibile ottenere chiamando la funzione membro di [HitTest](../Topic/CTreeCtrl::HitTest.md).  Si specifica un punto e integer, o l'indirizzo di una struttura di [TVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb773448) che include le coordinate corrente del cursore del mouse.  Al completamento della funzione, integer o una struttura contiene un flag che indica la posizione del cursore del mouse relativa al controllo di struttura ad albero.  Se il cursore si trova sopra un elemento nel controllo struttura ad albero, la struttura contiene l'handle dell'elemento anche.  
  
 È possibile indicare che un elemento è la destinazione di un'operazione di trascinamento della selezione chiamando la funzione membro di [SetItem](../Topic/CTreeCtrl::SetItem.md) per impostare lo stato sul valore di `TVIS_DROPHILITED`.  Un elemento che presenta questo stato viene disegnato nello stile utilizzato per indicare una destinazione di trascinamento.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)