---
title: "Relazioni tra oggetti MFC | Microsoft Docs"
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
  - "relazioni di oggetti MFC"
  - "MFC, relazioni tra oggetti chiave"
  - "oggetti [C++], relazioni"
  - "relazioni, oggetti MFC"
ms.assetid: 6e8f3b51-e80f-4d88-94c8-4c1e4ee163ad
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Relazioni tra oggetti MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per aiutare inserire il processo di creazione documento\/visualizzazione nella prospettiva, si consideri un programma in esecuzione: un documento, la finestra cornice utilizzata per contenere la visualizzazione e la visualizzazione associati al documento.  
  
-   Un documento gestisce un elenco delle visualizzazioni del documento e un puntatore al modello di documento che ha creato il documento.  
  
-   Una visualizzazione è un puntatore al documento ed è un elemento figlio della finestra cornice padre.  
  
-   Una finestra cornice di documento consente un puntatore alla relativa visualizzazione attiva corrente.  
  
-   Un modello di documento consente un elenco dei documenti aperti.  
  
-   L'applicazione gestisce un elenco dei modelli di documento.  
  
-   Le finestre tiene traccia di tutte le finestre aperte in modo da poter inviare messaggi a tali righe.  
  
 Queste relazioni sono impostate durante la creazione documento\/visualizzazione.  Nella tabella seguente mostra come oggetti in un programma in esecuzione possono accedere ad altri oggetti.  Un oggetto può ottenere un puntatore all'oggetto applicazione chiamando la funzione globale [AfxGetApp](../Topic/AfxGetApp.md).  
  
### L'accesso ad altri oggetti nell'applicazione  
  
|Da object|Come accedere ad altri oggetti|  
|---------------|------------------------------------|  
|Documento|Utilizzare [GetFirstViewPosition](../Topic/CDocument::GetFirstViewPosition.md) e [GetNextView](../Topic/CDocument::GetNextView.md) per accedere all'elenco visualizzazione del documento.<br /><br /> Chiamata [GetDocTemplate](../Topic/CDocument::GetDocTemplate.md) per ottenere il modello di documento.|  
|Visualizzazione|Chiamata [GetDocument](../Topic/CView::GetDocument.md) per ottenere il documento.<br /><br /> Chiamata [GetParentFrame](../Topic/CWnd::GetParentFrame.md) per ottenere la finestra cornice.|  
|Finestra cornice di documento|Chiamata [GetActiveView](../Topic/CFrameWnd::GetActiveView.md) per ottenere la visualizzazione corrente.<br /><br /> Chiamare [GetActiveDocument](../Topic/CFrameWnd::GetActiveDocument.md) per ottenere il documento associato alla visualizzazione corrente.|  
|Finestra cornice MDI|Chiamare [MDIGetActive](../Topic/CMDIFrameWnd::MDIGetActive.md) per ottenere attualmente [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)attivo.|  
  
 In genere, una finestra cornice dispone di una visualizzazione, ma talvolta, come nelle finestre con separatore, la stessa finestra cornice contiene più visualizzazioni.  La finestra cornice è attualmente un puntatore alla visualizzazione attiva; il puntatore viene aggiornato ogni volta un'altra visualizzazione viene attivata.  
  
> [!NOTE]
>  Un puntatore alla finestra cornice principale è memorizzato in una variabile membro di [m\_pMainWnd](../Topic/CWinThread::m_pMainWnd.md) dell'oggetto applicazione.  Una chiamata a `OnFileNew` nell'override della funzione membro di `InitInstance` di `CWinApp` imposta `m_pMainWnd` automaticamente.  Se non si chiama `OnFileNew`, è necessario impostare il valore della variabile in `InitInstance` manualmente. \(Le applicazioni di componenti COM SDI \(server non possono impostare la variabile se \/Embedding è la riga di comando.\) Si noti che `m_pMainWnd` è ora un membro di classe `CWinThread` anziché `CWinApp`.  
  
## Vedere anche  
 [Modelli di documenti e processo di creazione documento\/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione di modelli di documento](../mfc/document-template-creation.md)   
 [Creazione di documenti\/visualizzazioni](../mfc/document-view-creation.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)