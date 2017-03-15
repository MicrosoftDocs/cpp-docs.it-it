---
title: "Distruzione del controllo List | Microsoft Docs"
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
  - "CListCtrl (classe), distruzione di controlli"
  - "controlli elenco, eliminazione"
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Distruzione del controllo List
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si importa l'oggetto di [CListCtrl](../mfc/reference/clistctrl-class.md) come membro dati di una visualizzazione o una classe di finestre di dialogo, viene eliminata durante il proprietario viene eliminato.  Se si utilizza [CListView](../mfc/reference/clistview-class.md), il framework elimina il controllo quando elimina la visualizzazione.  
  
 Se si specificano alcuni dei dati dell'elenco da archiviare nell'applicazione anziché il controlloelenco, è necessario assicurare la disallocazione.  Per ulteriori informazioni, vedere [Elementi di callback e la maschera di callback](http://msdn.microsoft.com/library/windows/desktop/bb774736) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Inoltre, si è responsabili di rilascio di tutti gli elenchi di immagini creato e vengono associati all'oggetto di controllo list.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)