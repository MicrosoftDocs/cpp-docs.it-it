---
title: "CTreeCtrl e CTreeView | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CTreeCtrl"
  - "CTreeView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTreeCtrl (classe), e classe CTreeView"
  - "CTreeView (classe), e classe CTreeCtrl"
  - "struttura ad albero (controlli), e visualizzazione struttura ad albero"
  - "controlli visualizzazione struttura ad albero"
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTreeCtrl e CTreeView
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC fornisce due classi che incapsulano i controlli struttura ad albero: [Problemi](../mfc/reference/ctreectrl-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md).  Ogni classe è utile in diverse situazioni.  
  
 Utilizzare `CTreeCtrl` quando è necessario un normale controllo della finestra figlio; ad esempio, in una finestra di dialogo.  Occorre soprattutto per utilizzare `CTreeCtrl` se sono presenti altri controlli figlio della finestra, come in una normale finestra di dialogo.  
  
 Utilizzare `CTreeView` quando il controllo struttura ad albero per agire come una finestra di visualizzazione nell'architettura documento\/visualizzazione nonché in un controllo struttura ad albero.  `CTreeView` occupa l'intera area client di una finestra cornice o di una finestra con separatore.  Verrà ridimensionata automaticamente quando la relativa finestra padre viene ridimensionata e può elaborare i messaggi di comando dai menu, i tasti di scelta rapida e barre degli strumenti.  Poiché un controllo struttura ad albero contiene i dati necessari per visualizzare la struttura ad albero, l'oggetto corrispondente documento non deve essere complicato \- è inoltre possibile utilizzare [CDocument](../mfc/reference/cdocument-class.md) come tipo di documento nel modello di documento.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)