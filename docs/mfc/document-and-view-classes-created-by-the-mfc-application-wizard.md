---
title: "Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC | Microsoft Docs"
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
  - "creazioni guidate applicazione [C++], classi documento/visualizzazione create"
  - "classi documento"
  - "classi documento, creazioni guidate applicazione"
  - "classi visualizzazione, creazioni guidate applicazione"
ms.assetid: 70c34a60-2701-4981-acea-c08a5787d8e6
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La Creazione guidata applicazione MFC offre un vantaggio acquisito all'inizio di una gara nel per lo sviluppo di programmi creazione del documento scheletrico e le classi visualizzazione automaticamente.  È quindi [comandi e messaggi della mappa a queste classi](../mfc/reference/mapping-messages-to-functions.md) e utilizzare l'editor del codice sorgente di Visual C\+\+ per scrivere le funzioni membro.  
  
 La classe document creata dalla Creazione guidata applicazione MFC è derivata dalla classe [CDocument](../mfc/reference/cdocument-class.md).  La classe di visualizzazione deriva da [CView](../mfc/reference/cview-class.md).  I nomi della creazione guidata applicazione fornisce le classi e i file che li contengono sono basati sul nome del progetto immesse nella finestra di dialogo creazione guidata applicazione.  Nella procedura guidata, è possibile utilizzare la pagina le classi generate per modificarne i nomi predefiniti.  
  
 Alcune applicazioni necessiti di più classi di documento, della classe di visualizzazione, la classe o della finestra cornice.  Per ulteriori informazioni, vedere [Tipi di documenti multipli, visualizzazioni e le finestre](../mfc/multiple-document-types-views-and-frame-windows.md).  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)