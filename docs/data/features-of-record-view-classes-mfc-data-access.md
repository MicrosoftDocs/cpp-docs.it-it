---
title: "Funzionalit&#224; delle classi di visualizzazione di record (accesso ai dati MFC) | Microsoft Docs"
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
  - "classi di visualizzazione dei record"
  - "visualizzazioni di record, classi"
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzionalit&#224; delle classi di visualizzazione di record (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sebbene sia possibile programmare l'accesso ai dati basato su form con la classe [CFormView](../mfc/reference/cformview-class.md), le classi [CRecordView](../mfc/reference/crecordview-class.md) e [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) rappresentano in linea di massima un punto di partenza migliore.  Oltre alle funzionalità specifiche di `CFormView`, `CRecordView` e `CDaoRecordView` sono infatti in grado di:  
  
-   Fornire funzionalità DDX \(Dialog Data Exchange\) per lo scambio di dati tra i controlli dei form e l'oggetto recordset associato.  
  
-   Gestire i comandi Move First, Move Next, Move Previous e Move Last per lo spostamento tra i record dell'oggetto recordset associato.  
  
-   Aggiornare le modifiche al record corrente quando l'utente passa a un record diverso.  
  
 Per altre informazioni sulla navigazione, vedere [Visualizzazioni di record: Supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md).  
  
## Vedere anche  
 [Visualizzazioni di record \(accesso ai dati MFC\)](../data/record-views-mfc-data-access.md)   
 [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)