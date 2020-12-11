---
description: 'Altre informazioni su: uso dei documenti'
title: Utilizzo di documenti
ms.date: 11/04/2016
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
ms.openlocfilehash: 486604733808fb027d6dd0fbf81bb670c85313f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154500"
---
# <a name="using-documents"></a>Utilizzo di documenti

Collaborazione, documenti e visualizzazioni:

- Contenere, gestire e visualizzare i [dati](../mfc/managing-data-with-document-data-variables.md)specifici dell'applicazione.

- Fornire un'interfaccia costituita da [variabili di dati del documento](../mfc/managing-data-with-document-data-variables.md) per la modifica dei dati.

- Partecipare alla [scrittura e alla lettura di file](../mfc/serializing-data-to-and-from-files.md).

- Partecipare alla [stampa](../mfc/role-of-the-view-in-printing.md).

- [Gestire](../mfc/handling-commands-in-the-document.md) la maggior parte dei comandi e dei messaggi dell'applicazione.

Il documento è particolarmente impegnato nella gestione dei dati. Archiviare i dati, in genere, nelle variabili membro della classe Document. La vista usa queste variabili per accedere ai dati per la visualizzazione e l'aggiornamento. Il meccanismo di serializzazione predefinito del documento gestisce la lettura e la scrittura dei dati da e verso i file. I documenti possono anche gestire i comandi, ma non i messaggi di Windows diversi da WM_COMMAND.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Derivazione di una classe documento da CDocument](../mfc/deriving-a-document-class-from-cdocument.md)

- [Gestione di dati con variabili dati di documento](../mfc/managing-data-with-document-data-variables.md)

- [Serializzazione di dati da e verso file](../mfc/serializing-data-to-and-from-files.md)

- [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)

- [Gestione dei comandi nel documento](../mfc/handling-commands-in-the-document.md)

- [Funzione membro OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument)

- [Funzione membro DeleteContents](../mfc/reference/cdocument-class.md#deletecontents)

## <a name="see-also"></a>Vedi anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)
