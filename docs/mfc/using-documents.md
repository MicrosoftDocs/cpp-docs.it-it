---
title: Utilizzo dei documenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 691d8d00b9c4671ea4b9c318313851a7fab73f7f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

