---
description: 'Altre informazioni su: gestione dei dati con le variabili di dati del documento'
title: Gestione di dati con variabili dati documento
ms.date: 11/04/2016
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
ms.openlocfilehash: d05bfe71d080c08b3e0f3bbd416421e612b5d7ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97112206"
---
# <a name="managing-data-with-document-data-variables"></a>Gestione di dati con variabili dati documento

Implementare i dati del documento come variabili membro della classe del documento. Ad esempio, il programma Scribble dichiara un membro dati di tipo `CObList` , un elenco collegato che archivia i puntatori agli `CObject` oggetti. Questo elenco viene usato per archiviare matrici di punti che costituiscono un disegno a linee a mano libera.

La modalità di implementazione dei dati dei membri del documento dipende dalla natura dell'applicazione. In questo modo, MFC fornisce un gruppo di "classi di raccolta", ovvero matrici, elenchi e mappe (dizionari), incluse le raccolte basate su modelli C++, insieme alle classi che incapsulano una varietà di tipi di dati comuni, ad esempio,,, `CString` `CRect` `CPoint` `CSize` e `CTime` . Per ulteriori informazioni su queste classi, vedere [Cenni preliminari sulla libreria di classi](class-library-overview.md) nella Guida di riferimento a *MFC*.

Quando si definiscono i dati dei membri del documento, in genere si aggiungono funzioni membro alla classe Document per impostare e ottenere gli elementi di dati ed eseguire altre operazioni utili su di essi.

Le visualizzazioni accedono all'oggetto Document usando il puntatore della vista al documento, installato nella visualizzazione al momento della creazione. È possibile recuperare questo puntatore nelle funzioni membro di una visualizzazione chiamando la `CView` funzione membro `GetDocument` . Assicurarsi di eseguire il cast di questo puntatore al tipo di documento. È quindi possibile accedere ai membri del documento pubblico tramite il puntatore.

Se per il trasferimento di dati frequente è necessario l'accesso diretto o si desidera utilizzare i membri non pubblici della classe Document, è consigliabile impostare la classe di visualizzazione come Friend (in termini di C++) della classe Document.

## <a name="see-also"></a>Vedi anche

[Utilizzo di documenti](using-documents.md)
