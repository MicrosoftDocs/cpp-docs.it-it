---
title: "Classi correlate ai controlli Rich Edit | Microsoft Docs"
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
  - "classi [C++], correlate ai controlli Rich Edit"
  - "CRichEditCtrl (classe), classi correlate"
  - "CRichEditCtrlItem (classe) e CRichEditCtrl"
  - "CRichEditDoc (classe), Rich Edit (controlli)"
  - "CRichEditView (classe), e CRichEditCtrl"
  - "Rich Edit (controlli), e CRichEditDoc"
  - "Rich Edit (controlli), e CRichEditItem"
  - "Rich Edit (controlli), e CRichEditView"
  - "Rich Edit (controlli), classi correlate a"
ms.assetid: 4b31c2cc-6ea1-4146-b7c5-b0b5b419f14d
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi correlate ai controlli Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CRichEditView](../mfc/reference/cricheditview-class.md), [CRichEditDoc](../mfc/reference/cricheditdoc-class.md) e le classi di [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md) forniscono funzionalità del controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) nel contesto dell'architettura documento\/visualizzazione di MFC.  `CRichEditView` gestisce il testo e formattare specifici di testo.  `CRichEditDoc` gestisce l'elenco di elementi client OLE presenti nella visualizzazione.  `CRichEditCntrItem` fornisce l'accesso in contenitore\- isolateassembly all'elemento client OLE.  Per modificare il contenuto di `CRichEditView`, utilizzare [CRichEditView::GetRichEditCtrl](../Topic/CRichEditView::GetRichEditCtrl.md) per accedere al controllo Rich Edit sottostante.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)