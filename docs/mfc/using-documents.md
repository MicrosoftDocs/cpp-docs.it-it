---
title: Utilizzo dei documenti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- documents [MFC], C++ applications
- data [MFC], reading
- documents [MFC]
- files [MFC], writing to
- data [MFC], documents
- files [MFC]
- views [MFC], C++ applications
- document/view architecture [MFC], documents
- reading data [MFC], documents and views
- printing [MFC], documents
- writing to files [MFC]
ms.assetid: f390d6d8-d0e1-4497-9b6a-435f7ce0776c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 48f3bd6c6463bbbe26214a29960260d2be583e20
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="using-documents"></a>Utilizzo di documenti
Collaborare, documenti e visualizzazioni:  
  
-   Contengono, gestire e visualizzare le specifiche dell'applicazione [dati](../mfc/managing-data-with-document-data-variables.md).  
  
-   Fornire un'interfaccia composta da [variabili dati documento](../mfc/managing-data-with-document-data-variables.md) per la manipolazione dei dati.  
  
-   Partecipare [scrittura e lettura di file](../mfc/serializing-data-to-and-from-files.md).  
  
-   Partecipare [stampa](../mfc/role-of-the-view-in-printing.md).  
  
-   [Gestire](../mfc/handling-commands-in-the-document.md) la maggior parte dei comandi e messaggi dell'applicazione.  
  
 Il documento è particolarmente coinvolte nella gestione dei dati. Archiviare i dati, in genere, nelle variabili di membro di classe documento. La vista utilizza queste variabili per accedere ai dati per la visualizzazione e aggiornare. Il meccanismo di serializzazione predefinito del documento gestisce la lettura e scrittura dei dati da e verso i file. Documenti possono anche gestire i comandi (ma non di Windows diverso da messaggi di **WM_COMMAND**).  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Derivazione di una classe documento da CDocument](../mfc/deriving-a-document-class-from-cdocument.md)  
  
-   [La gestione dei dati con variabili dati documento](../mfc/managing-data-with-document-data-variables.md)  
  
-   [La serializzazione dei dati da e verso i file](../mfc/serializing-data-to-and-from-files.md)  
  
-   [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)  
  
-   [Gestione dei comandi nel documento](../mfc/handling-commands-in-the-document.md)  
  
-   [La funzione membro OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument)  
  
-   [La funzione membro DeleteContents](../mfc/reference/cdocument-class.md#deletecontents)  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

