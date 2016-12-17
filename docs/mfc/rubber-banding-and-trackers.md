---
title: "Selezione e tracker | Microsoft Docs"
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
  - "CRectTracker (classe), implementazione di tracker"
  - "oggetti OLE, selezione"
  - "rettangoli di selezione"
  - "tracker"
  - "WM_LBUTTONDOWN"
ms.assetid: 0d0fa64c-6418-4baf-ab7f-2d16ca039230
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Selezione e tracker
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'altra funzionalità fornita dagli strumenti di rilevamento è la selezione "rubber\-band", che consente a un utente di selezionare più elementi OLE trascinando un rettangolo di ridimensionamento attorno agli elementi da selezionare.  Quando l'utente rilascia il pulsante sinistro del mouse, gli elementi inclusi nell'area selezionata dall'utente vengono selezionati e possono essere modificati dall'utente.  Ad esempio, l'utente può trascinare la selezione in un'altra applicazione contenitore.  
  
 Implementare questa funzionalità richiede una parte di codice addizionale nella funzione di gestione di `WM_LBUTTONDOWN` dell'applicazione.  
  
 Nell'esempio di codice seguente si implementano la selezione rubber\-band e le funzionalità aggiuntive.  
  
 [!code-cpp[NVC_MFCOClient#6](../mfc/codesnippet/CPP/rubber-banding-and-trackers_1.cpp)]  
  
 Se si desidera consentire l'orientamento reversibile dello strumento di rilevamento durante la rubber\-banding, è necessario chiamare [CRectTracker::TrackRubberBand](../Topic/CRectTracker::TrackRubberBand.md) con il terzo parametro impostato su **TRUE**.  Si tenga presente che consentire l'orientamento reversibile può indurre l'inversione di [CRectTracker::m\_rect](../Topic/CRectTracker::m_rect.md).  Questo comportamento può essere corretto mediante una chiamata a [CRect::NormalizeRect](../Topic/CRect::NormalizeRect.md).  
  
 Per ulteriori informazioni, vedere [Elementi client dei contenitori](../mfc/containers-client-items.md) e [Personalizzare il trascinamento della selezione](../mfc/drag-and-drop-customizing.md).  
  
## Vedere anche  
 [Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)   
 [CRectTracker Class](../mfc/reference/crecttracker-class.md)