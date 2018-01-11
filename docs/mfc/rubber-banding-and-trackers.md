---
title: Rettangoli di selezione e Tracker | Documenti Microsoft
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
- CRectTracker class [MFC], implementing trackers
- OLE objects [MFC], selecting
- rubber banding [MFC]
- WM_LBUTTONDOWN [MFC]
ms.assetid: 0d0fa64c-6418-4baf-ab7f-2d16ca039230
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3bd9da00d2d6ea0110562f523a0adc53c1a476c2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="rubber-banding-and-trackers"></a>Selezione e tracker
Un'altra funzionalità fornita dagli strumenti di rilevamento è il rettangolo di selezione, che consente a un utente di selezionare più elementi OLE trascinando un rettangolo di ridimensionamento attorno agli elementi da selezionare. Quando l'utente rilascia il pulsante sinistro del mouse, gli elementi inclusi nell'area selezionata vengono selezionati e possono essere modificati dall'utente. Ad esempio, l'utente può trascinare la selezione in un'altra applicazione contenitore.  
  
 L'implementazione di questa funzionalità richiede del codice aggiuntivo nella funzione di gestione `WM_LBUTTONDOWN` dell'applicazione.  
  
 Nell'esempio di codice seguente sono implementati il rettangolo di selezione e funzionalità aggiuntive.  
  
 [!code-cpp[NVC_MFCOClient#6](../mfc/codesnippet/cpp/rubber-banding-and-trackers_1.cpp)]  
  
 Se si desidera consentire l'orientamento reversibile dello strumento di rilevamento durante rettangoli di selezione, è necessario chiamare [TrackRubberBand](../mfc/reference/crecttracker-class.md#trackrubberband) con il terzo parametro impostato su **TRUE**. Tenere presente che consentire l'orientamento reversibile può talvolta indurre [CRectTracker:: M_rect](../mfc/reference/crecttracker-class.md#m_rect) per invertito. Questo può essere corretto da una chiamata a [CRect:: NormalizeRect](../atl-mfc-shared/reference/crect-class.md#normalizerect).  
  
 Per ulteriori informazioni, vedere [elementi Client dei contenitori](../mfc/containers-client-items.md) e [personalizzazione di trascinamento della selezione](../mfc/drag-and-drop-customizing.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Tracker: Implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)   
 [Classe CRectTracker](../mfc/reference/crecttracker-class.md)
