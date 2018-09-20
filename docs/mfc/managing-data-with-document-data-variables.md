---
title: La gestione dei dati con variabili dati documento | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- documents [MFC], data storage
- friend classes [MFC]
- classes [MFC], friend
- data [MFC]
- data [MFC], documents
- collection classes [MFC], used by document object
- document data [MFC]
- member variables [MFC], document class [MFC]
ms.assetid: e70b87f4-8c30-49e5-8986-521c2ff91704
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e0a1db1e15733a0a3cd217c44aaaa325c146ee64
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46435883"
---
# <a name="managing-data-with-document-data-variables"></a>Gestione di dati con variabili dati documento

Implementare i dati del documento come variabili membro della classe del documento. Ad esempio, il programma Scribble dichiara un membro dati di tipo `CObList` , ovvero un elenco collegato che archivia i puntatori a `CObject` oggetti. Questo elenco viene usato per archiviare le matrici di punti che compongono un disegno a mano libera.

Come implementare i dati del documento membro dipende dalla natura dell'applicazione. Per agevolare out, MFC fornisce un gruppo di classi di raccolta di"", ovvero matrici, elenchi e mappe (dizionari), ad esempio le raccolte basate su modelli C++, insieme a classi che incapsulano una varietà di tipi di dati comuni, ad esempio `CString`, `CRect`, `CPoint`, `CSize`, e `CTime`. Per altre informazioni su queste classi, vedere la [Class Library Overview](../mfc/class-library-overview.md) nel *riferimento MFC*.

Quando si definiscono i dati dei membri del documento, in genere si aggiungerà funzioni membro alla classe documento da impostare e ottenere gli elementi di dati ed eseguire altre utili operazioni su di essi.

Le visualizzazioni accedono all'oggetto documento utilizzando il proprio puntatore al documento, installato nella visualizzazione al momento della creazione. È possibile recuperare questo puntatore nelle funzioni membro di una visualizzazione chiamando il `CView` funzione membro `GetDocument`. Assicurarsi di eseguire il cast di questo puntatore a un proprio tipo di documento. È quindi possibile accedere membri pubblici del documento tramite il puntatore del mouse.

Se il trasferimento dei dati spesso richiede l'accesso diretto, o si vogliono usare i membri non pubblici della classe documento, è possibile rendere la visualizzazione di classe friend della classe di documenti (in termini di C++).

## <a name="see-also"></a>Vedere anche

[Uso di documenti](../mfc/using-documents.md)

