---
title: "Vantaggi dell&#39;architettura documento/visualizzazione | Microsoft Docs"
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
  - "architettura documento/visualizzazione, vantaggi"
  - "visualizzazioni, vantaggi"
ms.assetid: 0bc27071-e120-4889-939c-ce1e61fb9cb3
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Vantaggi dell&#39;architettura documento/visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il vantaggio principale nell'utilizzo dell'architettura documento\/visualizzazione MFC è che l'architettura supporta particolarmente bene più visualizzazioni dello stesso documento. \(Se non sono necessarie più visualizzazioni e il sovraccarico del documento\/visualizzazione è eccessivo nell'applicazione, è possibile evitare l'architettura.  [Alternative all'architettura documento\/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md).\)  
  
 Si supponga che l'applicazione permetta agli utenti di visualizzare i dati numerici sia nel formato foglio di calcolo che come grafico.  Un utente potrebbe voler visualizzare contemporaneamente sia i dati non elaborati, nel formato foglio di calcolo, che un grafico derivante dai dati.  È possibile mostrare queste visualizzazioni separate in finestre separate o nei riquadri della barra di divisione all'interno di una singola finestra.  Si supponga che l'utente voglia modificare i dati nel foglio di calcolo e che voglia visualizzare le modifiche immediatamente applicate nel grafico.  
  
 In MFC, la visualizzazione foglio di calcolo e la visualizzazione grafico sono basate su diverse classi derivate da CView.  Entrambe le visualizzazioni possono essere associate a un singolo oggetto del documento.  Il documento archivia i dati \(oppure li recupera da un database\).  Entrambe le visualizzazioni accedono al documento e visualizzano i dati recuperati da esso.  
  
 Quando un utente aggiorna una delle visualizzazioni, l'oggetto visualizzazione chiama `CDocument::UpdateAllViews`.  La funzione notifica tutte le visualizzazioni del documento e ogni visualizzazione si aggiorna utilizzando i dati più recenti dal documento.  La singola chiamata a `UpdateAllViews` sincronizza le diverse visualizzazioni.  
  
 Questo scenario è difficile da codificare senza la separazione dei dati dalla visualizzazione, in particolare se le visualizzazioni archiviano i dati stessi.  Con documento\/visualizzazione, è facile.  Il framework esegue la maggior parte delle operazioni di coordinamento automaticamente.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Alternative al documento\/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [CDocument](../mfc/reference/cdocument-class.md)  
  
-   [CView](../mfc/reference/cview-class.md)  
  
-   [CDocument::UpdateAllViews](../Topic/CDocument::UpdateAllViews.md)  
  
-   [CView::GetDocument](../Topic/CView::GetDocument.md)  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)