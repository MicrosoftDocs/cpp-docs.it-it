---
title: "Relazioni con l&#39;API in linguaggio C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.mfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "documentazione [C++]"
  - "documentazione [C++], informazioni su MFC e Windows SDK"
  - "MFC [C++], API Windows"
  - "Visual C, chiamate API Windows"
  - "API Windows [C++], e MFC"
ms.assetid: 334e8efc-f3cc-4018-bc2e-02908b2a39fe
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Relazioni con l&#39;API in linguaggio C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La caratteristica che imposta la libreria MFC \(Microsoft Foundation Class\) oltre ad altre librerie di classi per Windows è il mapping molto simile all'API Windows scritta nel linguaggio C.  Inoltre, in genere è possibile combinare liberamente le chiamate alla libreria della classe con chiamate dirette all'API Windows.  L'accesso diretto, tuttavia, non implica che le classi siano una sostituzione completa dell'API.  Gli sviluppatori però talvolta devono eseguire chiamate dirette ad alcune funzioni Windows, come per esempio [SetCursor](http://msdn.microsoft.com/library/windows/desktop/ms648393) e [GetSystemMetrics](http://msdn.microsoft.com/library/windows/desktop/ms724385).  Una funzione Windows viene sottoposta al wrapping da una funzione membro di una classe solo quando si presenta un chiaro vantaggio nel farlo.  
  
 Poiché talvolta è necessario effettuare chiamate di funzione Windows native, è necessario avere accesso alla documentazione del linguaggio C dell'API Windows.  Questa documentazione è inclusa con Microsoft Visual C\+\+.  
  
> [!NOTE]
>  Per una panoramica su come opera il framework della libreria MFC, vedere [Utilizzo delle classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).  
  
## Vedere anche  
 [Filosofia di progettazione classi generale](../mfc/general-class-design-philosophy.md)