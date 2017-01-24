---
title: "Controllo List e visualizzazione elenco | Microsoft Docs"
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
  - "CListCtrl (classe), e CListView"
  - "CListView (classe), e CListCtrl"
  - "controlli elenco, visualizzazione elenco"
  - "visualizzazioni elenco"
  - "visualizzazioni, elenco e controllo elenco"
ms.assetid: 7aee1c48-b158-4399-be0b-be366993665e
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controllo List e visualizzazione elenco
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per comodità, MFC esegue il controllo elenco in due modi.  È possibile utilizzare i controlli elenco:  
  
-   Direttamente, incorporando un oggetto di [CListCtrl](../mfc/reference/clistctrl-class.md) in una classe finestra di dialogo.  
  
-   Indirettamente, utilizzando classe [CListView](../mfc/reference/clistview-class.md).  
  
 `CListView` semplifica integrare un controllo elenco con l'architettura documento\/visualizzazione MFC, incapsulante il controllo a come [CEditView](../mfc/reference/ceditview-class.md) incapsula un controllo di modifica: il controllo occupa l'intera area di una visualizzazione MFC. \(La visualizzazione *è* il controllo, cast a `CListView`\).  
  
 Un oggetto di `CListView` eredita da [CCtrlView](../mfc/reference/cctrlview-class.md) e le relative classi base e aggiungere una funzione membro per recuperare il controllo elenco sottostante.  Utilizzare i membri di visualizzazione per utilizzare la visualizzazione come visualizzazione.  Utilizzare la funzione membro di [GetListCtrl](../Topic/CListView::GetListCtrl.md) per accedere alle funzioni membro di controllo list.  Utilizzare questi membri:  
  
-   Aggiungere, eliminare, modificare o "elementi" nell'elenco.  
  
-   Imposta o ottiene gli attributi di controllo list.  
  
 Per ottenere un riferimento a `CListCtrl` sottostante a `CListView`, chiamare `GetListCtrl` dalla classe di visualizzazione elenco:  
  
 [!code-cpp[NVC_MFCListView#4](../mfc/codesnippet/CPP/list-control-and-list-view_1.cpp)]  
  
 In questo argomento vengono descritte entrambe le modalità per utilizzare il controllo elenco.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)