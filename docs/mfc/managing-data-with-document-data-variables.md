---
title: La gestione dei dati con variabili dati documento | Documenti Microsoft
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
ms.openlocfilehash: 6ca7c673f47510282e129eab2538008400eb2fb9
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929432"
---
# <a name="managing-data-with-document-data-variables"></a>Gestione di dati con variabili dati documento
Implementare i dati del documento come variabili membro della classe documento. Ad esempio, il programma Scribble dichiara un membro dati di tipo `CObList` , ovvero un elenco collegato che archivia i puntatori a `CObject` oggetti. Questo elenco viene usato per archiviare le matrici di punti che compongono un disegno a mano libera.  
  
 Modalità di implementazione di dati dei membri del documento dipende dalla natura dell'applicazione. Per facilitare out, MFC fornisce un gruppo "delle classi della raccolta", ovvero matrici, elenchi e mappe (dizionari), incluse le raccolte basate su modelli C++, insieme a classi che incapsulano una varietà di tipi di dati comuni, ad esempio `CString`, `CRect`, `CPoint`, `CSize`, e `CTime`. Per ulteriori informazioni su queste classi, vedere la [Cenni preliminari sulla libreria di classe](../mfc/class-library-overview.md) nel *riferimenti alla libreria MFC*.  
  
 Quando si definiscono i dati dei membri del documento, in genere si aggiungeranno funzioni membro alla classe di documento per impostare e ottenere gli elementi di dati ed eseguire altre operazioni utili su di essi.  
  
 Le visualizzazioni accedono all'oggetto documento utilizzando il puntatore della vista al documento, installato nella visualizzazione al momento della creazione. È possibile recuperare l'indicatore di misura nelle funzioni membro di una visualizzazione chiamando il `CView` funzione membro `GetDocument`. Assicurarsi di eseguire il cast di questo puntatore al tipo di documento. È quindi possibile accedere membri pubblici del documento tramite il puntatore.  
  
 Trasferimento frequenti dei dati richiede l'accesso diretto, se si desidera utilizzare i membri non pubblici della classe di documento, si desidera trasformare la classe friend (in termini di C++) della classe documento visualizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)

