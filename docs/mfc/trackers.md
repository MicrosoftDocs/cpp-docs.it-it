---
title: Tracker | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6f0a0cc52e3a5150702af4acd293def38df758fd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381537"
---
# <a name="trackers"></a>Tracker
Il [CRectTracker](../mfc/reference/crecttracker-class.md) classe fornisce un'interfaccia utente tra gli elementi rettangolari nell'applicazione e l'utente, offrendo una varietà di stili di visualizzazione. Gli stili comprendono i bordi di continuo, tratteggiati o tratteggiati; un motivo tratteggiato che copre l'elemento. e quadratini di ridimensionamento che può trovarsi all'esterno o all'interno di un bordo. Tracker vengono spesso utilizzati in combinazione con gli elementi OLE, ovvero oggetti derivati da `COleClientItem`. I rettangoli tracker forniscono indicazioni visive sullo stato corrente dell'elemento.  
  
 L'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) illustrata un'interfaccia comune utilizzo Tracker ed elementi client OLE dal punto di vista di un'applicazione contenitore. Per una dimostrazione di stili e le capacità di un oggetto di registrazione, vedere l'esempio generale MFC [TRACKER](../visual-cpp-samples.md).  
  
 Per ulteriori informazioni sull'implementazione di tracker nell'applicazione OLE, vedere [Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Classe COleClientItem](../mfc/reference/coleclientitem-class.md)
