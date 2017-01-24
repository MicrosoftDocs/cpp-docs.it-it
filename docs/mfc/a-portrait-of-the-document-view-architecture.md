---
title: "Descrizione dell&#39;architettura documento/visualizzazione | Microsoft Docs"
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
  - "architettura documento/visualizzazione"
  - "architettura documento/visualizzazione, informazioni sull'architettura documento/visualizzazione"
  - "architettura documento/visualizzazione, accesso ai dati dalla visualizzazione"
  - "documenti, accesso ai dati dalla visualizzazione"
  - "documenti, visualizzazioni multiple"
  - "documenti, visualizzazioni"
  - "input, classe visualizzazione"
  - "visualizzazioni multiple, aggiornamento da documento"
  - "visualizzazioni, accesso ai dati del documento da"
  - "visualizzazioni, e input utente"
  - "visualizzazioni, aggiornamento"
ms.assetid: 4e7f65dc-b166-45d8-bcd5-9bb0d399b946
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Descrizione dell&#39;architettura documento/visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Documenti e visualizzazioni vengono associati in un'applicazione MFC tipica.  I dati vengono archiviati nel documento, ma la visualizzazione con ha accesso ai dati.  La separazione di documento dalla visualizzazione con l'archiviazione e la manutenzione dei dati dalla visualizzazione.  
  
## Accedere per documentare i dati dalla visualizzazione  
 La visualizzazione accede ai dati del documento uno con la funzione di [GetDocument](../Topic/CView::GetDocument.md), che restituisce un puntatore al documento, oppure facendo a\-c di visualizzazione e `friend` classe della classe del documento.  La visualizzazione viene utilizzato il relativo accesso ai dati per ottenere i dati quando è possibile disegnarlo o modificare in caso contrario.  
  
 Ad esempio, dalla funzione membro di [OnDraw](../Topic/CView::OnDraw.md) della visualizzazione, la visualizzazione utilizza **GetDocument** per ottenere un puntatore di documento.  Utilizza quindi il puntatore per accedere a un membro dati di `CString` nel documento.  La visualizzazione passa la stringa alla funzione di `TextOut`.  Per vedere il codice di questo esempio, vedere [Disegnare una visualizzazione](../mfc/drawing-in-a-view.md).  
  
## Input alla visualizzazione  
 La visualizzazione potrebbe anche interpretare un clic del mouse all'interno dello stesso ad esempio la selezione o modifica dei dati.  Analogamente potrebbe interpretare le sequenze di tasti quali l'immissione di dati o modifica.  Si supponga gli utenti una stringa in una visualizzazione che gestisce il testo.  La visualizzazione ottiene un puntatore al documento e posiziona il puntatore per passare i nuovi dati al documento, che lo archivia in una determinata struttura dei dati.  
  
## Aggiornare più visualizzazioni dello stesso documento  
 In un'applicazione con più visualizzazioni dello stesso documento \- come una finestra con separatore in un editor di testo al primo di visualizzazione passa i nuovi dati al documento.  Quindi chiama la funzione membro di [UpdateAllViews](../Topic/CDocument::UpdateAllViews.md) di documento, che indica tutte le visualizzazioni del documento di aggiornarsi, verrà visualizzata i nuovi dati.  Si sincronizza le visualizzazioni.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Vantaggi dell'architettura documento\/visualizzazione](../mfc/advantages-of-the-document-view-architecture.md)  
  
-   [Alternative all'architettura documento\/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)