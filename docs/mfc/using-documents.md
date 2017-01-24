---
title: "Utilizzo di documenti | Microsoft Docs"
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
  - "dati [MFC], documenti"
  - "dati [MFC], lettura"
  - "architettura documento/visualizzazione [C++], documenti"
  - "documenti [C++]"
  - "documenti [C++], applicazioni C++"
  - "file [C++]"
  - "file [C++], scrittura"
  - "stampa [MFC], documenti"
  - "lettura di dati [C++], documenti e visualizzazioni"
  - "visualizzazioni [C++], applicazioni C++"
  - "scrittura su file [C++]"
ms.assetid: f390d6d8-d0e1-4497-9b6a-435f7ce0776c
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di documenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Congiunto, documenti e visualizzazioni:  
  
-   Contenga, gestire e visualizzare il [dati](../mfc/managing-data-with-document-data-variables.md)specifico dell'applicazione.  
  
-   Fornire un'interfaccia [documentare le variabili di dati](../mfc/managing-data-with-document-data-variables.md) quantità di modificare i dati.  
  
-   Partecipazione a [file di lettura e scrittura](../mfc/serializing-data-to-and-from-files.md).  
  
-   Partecipazione a [stampa](../mfc/role-of-the-view-in-printing.md).  
  
-   [Handle](../mfc/handling-commands-in-the-document.md) più dei controlli e dei messaggi dell'applicazione.  
  
 Il documento viene incluso in particolare nel gestire i dati.  Memorizzare i dati, in genere, variabili membro di classe del documento.  La visualizzazione utilizza queste variabili per accedere ai dati da visualizzare e l'aggiornamento.  Il meccanismo di serializzazione predefinito document gestisce la lettura e la scrittura dei dati verso e dai file.  I documenti possono inoltre possibile gestire i comandi \(ma non i messaggi di windows diverso da **WM\_COMMAND**\).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Derivando una classe del documento di CDocument](../mfc/deriving-a-document-class-from-cdocument.md)  
  
-   [Gestire i dati con le variabili dei dati del documento](../mfc/managing-data-with-document-data-variables.md)  
  
-   [La serializzazione dei dati da e verso file](../mfc/serializing-data-to-and-from-files.md)  
  
-   [Ignorare il meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)  
  
-   [Comandi di gestione del documento](../mfc/handling-commands-in-the-document.md)  
  
-   [La funzione membro di OnNewDocument](../Topic/CDocument::OnNewDocument.md)  
  
-   [La funzione membro di DeleteContents](../Topic/CDocument::DeleteContents.md)  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)