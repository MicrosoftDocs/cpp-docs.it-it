---
title: Utilizzo dei documenti | Microsoft Docs
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
ms.openlocfilehash: 6f039b2e81b52c753a1fb065572d4eac53d55ec9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428707"
---
# <a name="using-documents"></a>Utilizzo di documenti

Lavorare insieme, documenti e visualizzazioni:

- Contengono, gestire e visualizzare le specifiche dell'applicazione [dati](../mfc/managing-data-with-document-data-variables.md).

- Fornire un'interfaccia composta [variabili di dati del documento](../mfc/managing-data-with-document-data-variables.md) per la manipolazione dei dati.

- Partecipare [scrivere e leggere file](../mfc/serializing-data-to-and-from-files.md).

- Partecipare [stampa](../mfc/role-of-the-view-in-printing.md).

- [Gestire](../mfc/handling-commands-in-the-document.md) la maggior parte dei comandi e messaggi dell'applicazione.

Il documento è particolarmente coinvolte nella gestione dei dati. Store dei dati, in genere, in variabili membro di classe documento. La visualizzazione Usa queste variabili per accedere ai dati per la visualizzazione e aggiornare. Meccanismo di serializzazione predefinito del documento gestisce la lettura e scrittura dei dati da e verso i file. Documenti possono anche gestire i comandi (ma non i messaggi di Windows diverse da WM_COMMAND).

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Derivazione di una classe documento da CDocument](../mfc/deriving-a-document-class-from-cdocument.md)

- [La gestione dei dati con variabili dati documento](../mfc/managing-data-with-document-data-variables.md)

- [La serializzazione dei dati da e verso i file](../mfc/serializing-data-to-and-from-files.md)

- [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)

- [Gestione dei comandi nel documento](../mfc/handling-commands-in-the-document.md)

- [La funzione membro OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument)

- [La funzione membro DeleteContents](../mfc/reference/cdocument-class.md#deletecontents)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

