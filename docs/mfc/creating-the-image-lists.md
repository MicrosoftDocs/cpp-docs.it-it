---
title: "Creazione degli elenchi di immagini | Microsoft Docs"
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
  - "CListCtrl (classe), creazione di elenchi di immagini per"
  - "elenchi di immagini [C++], creazione per CListCtrl"
  - "elenchi [C++], immagine"
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Creazione degli elenchi di immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Creare elenchi di immagini è lo stesso se si utilizza [CListView](../mfc/reference/clistview-class.md) o [CListCtrl](../mfc/reference/clistctrl-class.md).  
  
> [!NOTE]
>  È necessario disporre solo degli elenchi di immagini se l'elenco include lo stile di `LVS_ICON`.  
  
 Utilizzare la classe `CImageList` per creare uno o più elenchi immagini \(per le icone 100%, le icone piccole e stati\).  Vedere [CImageList](../mfc/reference/cimagelist-class.md) e vedere [Elenchi di immagini di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774736) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Chiamata [CListCtrl::SetImageList](../Topic/CListCtrl::SetImageList.md) per ogni elenco immagini; passare un puntatore all'oggetto appropriato di `CImageList`.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)