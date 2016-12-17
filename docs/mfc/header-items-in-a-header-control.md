---
title: "Elementi di intestazione in un controllo Header | Microsoft Docs"
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
  - "CHeaderCtrl (classe), voci di intestazione in"
  - "controlli [MFC], intestazione"
  - "controlli intestazione, voci di intestazione in"
  - "elementi di intestazione in controlli intestazione"
ms.assetid: ac79ef1f-a671-4ab2-93e9-b1aa016a48bf
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elementi di intestazione in un controllo Header
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È molto utile controllare l'aspetto e il comportamento delle voci di intestazione che costituiscono un controllo intestazione \([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)\).  Ogni voce di intestazione può contenere una stringa, un'immagine indirizzata a bit, un'immagine da un elenco immagini collegato, o un valore a 32 bit definito dall'applicazione associato.  La stringa, la bitmap, o l'immagine visualizzata nella voce di intestazione.  
  
 È possibile personalizzare l'aspetto e il contenuto di nuovi elementi quando vengono creati utilizzando una chiamata [CHeaderCtrl::InsertItem](../Topic/CHeaderCtrl::InsertItem.md) o modifica un elemento esistente, con una chiamata a [CHeaderCtrl::GetItem](../Topic/CHeaderCtrl::GetItem.md) e a [CHeaderCtrl::SetItem](../Topic/CHeaderCtrl::SetItem.md).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Personalizzare l'aspetto voce di intestazione](../mfc/customizing-the-header-item-s-appearance.md)  
  
-   [Elementi nel controllo intestazione](../mfc/ordering-items-in-the-header-control.md)  
  
-   [Fornendo supporto trascinamento per le voci di intestazione](../mfc/providing-drag-and-drop-support-for-header-items.md)  
  
-   [Utilizzo di elenchi di immagini con i controlli intestazione](../mfc/using-image-lists-with-header-controls.md)  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)