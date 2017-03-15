---
title: "Using the RichEdit 1.0 Control with MFC | Microsoft Docs"
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
  - "C++"
helpviewer_keywords: 
  - "RichEdit 1.0 control"
  - "rich edit controls, RichEdit 1.0"
ms.assetid: 5a9060dd-44d8-4ef3-956e-16152f7e23d2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using the RichEdit 1.0 Control with MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per utilizzare un controllo RichEdit, è necessario prima chiamare [AfxInitRichEdit2](../Topic/AfxInitRichEdit2.md) per caricare il controllo RichEdit 2.0 \(RICHED20.DLL\) oppure chiamare [AfxInitRichEdit](../Topic/AfxInitRichEdit.md) per chiamare la versione precedente del controllo, RichEdit 1.0 \(RICHED32.DLL\).  
  
 Sebbene sia possibile utilizzare la classe [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) corrente con il precedente controllo RichEdit 1.0, **CRichEditCtrl** è progettata esclusivamente per supportare il controllo RichEdit 2.0.  Poiché RichEdit 1.0 e RichEdit 2.0 sono molto simili, sarà possibile utilizzare la maggior parte dei metodi. Tra controlli 1.0 e 2.0, tuttavia, esistono delle differenze ed è quindi possibile che alcuni metodi non funzionino correttamente o che non funzionino affatto.  
  
## Requisiti  
 MFC  
  
## Vedere anche  
 [Troubleshooting the Dialog Editor](../mfc/troubleshooting-the-dialog-editor.md)   
 [Dialog Editor](../mfc/dialog-editor.md)