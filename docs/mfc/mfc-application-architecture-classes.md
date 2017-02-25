---
title: "Classi architettura dell&#39;applicazione MFC | Microsoft Docs"
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
  - "classi architettura dell'applicazione"
  - "classi [C++], MFC"
  - "MFC [C++], sviluppo di applicazioni"
  - "MFC [C++], classi"
ms.assetid: 71b2de54-b44d-407e-9c71-9baf954e18d9
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi architettura dell&#39;applicazione MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi in questa categoria consentono all'architettura di un'applicazione del framework.  Forniscono la funzionalità comuni alla maggior parte delle applicazioni.  Si compilerà il framework per aggiungere la funzionalità specifica dell'applicazione.  In genere, questa operazione derivare nuove classi dalle classi dell'architettura e quindi aggiungere nuovi membri o eseguire l'override delle funzioni membro esistenti.  
  
 [Creazioni guidate applicazione](../mfc/reference/mfc-application-wizard.md) genera vari tipi di applicazioni, che utilizzano il framework applicazione in modi diversi.  Le applicazioni SDI \(single document interface\) e MDI \(multiple document interface\) consentono di sfruttare appieno una parte del framework chiamato l'architettura documento\/visualizzazione.  Altri tipi di applicazioni, quali le applicazioni a finestre, le applicazioni basate su form e DLL, utilizzare solo alcune delle funzionalità per l'architettura documento\/visualizzazione.  
  
 Le applicazioni documento\/visualizzazione contengono uno o più set di documenti, visualizzazioni e delle finestre.  Un oggetto modello di documento associa le classi per ogni documento\/visualizzazione\/set di frame.  
  
 Sebbene non sia necessario utilizzare l'architettura documento\/visualizzazione in un'applicazione MFC, sono disponibili numerosi vantaggi offerti da farlo.  Il contenitore OLE MFC e il supporto server è basato sull'architettura documento\/visualizzazione, come supporto per la stampa e all'anteprima di stampa.  
  
 Tutte le applicazioni MFC dispongono almeno due oggetti: un oggetto applicazione derivata da [CWinApp](../mfc/reference/cwinapp-class.md) e il tipo dell'oggetto finestra principale, derivato \(spesso indirettamente\) da [CWnd](../mfc/reference/cwnd-class.md). In genere, la finestra principale è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md), da [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), o da [CDialog](../mfc/reference/cdialog-class.md), derivati da `CWnd`\).  
  
 Le applicazioni che utilizzano l'architettura documento\/visualizzazione contengono oggetti aggiuntivi.  Gli oggetti principali:  
  
-   Un oggetto applicazione derivato dalla classe [CWinApp](../mfc/reference/cwinapp-class.md), come indicato in precedenza.  
  
-   Uno o più sono descritti gli oggetti della classe derivati dalla classe [CDocument](../mfc/reference/cdocument-class.md).  Gli oggetti di una classe di documento sono responsabili della rappresentazione interna dei dati modificati nella visualizzazione.  È possibile associare a un file di dati.  
  
-   Uno o più oggetti visualizzazione derivati dalla classe [CView](../mfc/reference/cview-class.md).  Ogni visualizzazione è una finestra associata a un documento ed è associata a una finestra cornice.  Visualizzazioni consentono di visualizzare e modificare i dati contenuti in un oggetto di classe document.  
  
 Le applicazioni documento\/visualizzazione sono contenute anche le finestre \(derivate da [CFrameWnd](../mfc/reference/cframewnd-class.md)\) e i modelli di documento \(derivati da [CDocTemplate](../mfc/reference/cdoctemplate-class.md)\).  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)