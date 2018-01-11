---
title: Tracker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- trackers [MFC]
- OLE applications [MFC], trackers
- applications [OLE], trackers
- tracking OLE items [MFC]
- OLE containers [MFC], trackers
- CDC class [MFC], trackers
- CRectTracker class [MFC], implementing trackers
- OLE server applications [MFC], trackers
ms.assetid: dcd09399-6637-4621-80e5-d12670429787
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 29e4d3c556a5f7b6b3aed5daa0285ea6c2c15447
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="trackers"></a>Tracker
Il [CRectTracker](../mfc/reference/crecttracker-class.md) classe fornisce un'interfaccia utente tra gli elementi rettangolari nell'applicazione e l'utente, offrendo una varietà di stili di visualizzazione. Gli stili comprendono i bordi di continuo, tratteggiati o tratteggiati; un motivo tratteggiato che copre l'elemento. e quadratini di ridimensionamento che può trovarsi all'esterno o all'interno di un bordo. Tracker vengono spesso utilizzati in combinazione con gli elementi OLE, ovvero oggetti derivati da `COleClientItem`. I rettangoli tracker forniscono indicazioni visive sullo stato corrente dell'elemento.  
  
 L'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) illustrata un'interfaccia comune utilizzo Tracker ed elementi client OLE dal punto di vista di un'applicazione contenitore. Per una dimostrazione di stili e le capacità di un oggetto di registrazione, vedere l'esempio generale MFC [TRACKER](../visual-cpp-samples.md).  
  
 Per ulteriori informazioni sull'implementazione di tracker nell'applicazione OLE, vedere [Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Classe COleClientItem](../mfc/reference/coleclientitem-class.md)
