---
title: Raccomandazioni per la gestione di Input-OutputRecommendations for Handling Input-Output
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [MFC], about I/O
- file-based I/O options
- I/O [MFC]
- I/O [MFC], options
- I/O [MFC], file-based options
ms.assetid: d664b175-3b4a-40c3-b14b-39de6b12e419
ms.openlocfilehash: c365120a385c440f09f0ee4c0a2fc52afb55834f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371729"
---
# <a name="recommendations-for-handling-inputoutput"></a>Suggerimenti per la gestione di input/output

L'utilizzo o meno dell'I/O basato su file dipende dal modo in cui si risponde alle domande nell'albero delle decisioni seguente:

**I dati primari nell'applicazione risiedono in un file su disco**

- Sì, i dati primari risiedono in un file su disco:

   **L'applicazione legge l'intero file in memoria su File Open e scrive l'intero file su disco al salvataggio del file**

  - Sì: questo è il caso di documento MFC predefinito. Utilizzare `CDocument` la serializzazione.

  - No: questo è in genere il caso di aggiornamento basato su transazioni del file. Aggiornare il file in base alla transazione `CDocument` e non è necessaria la serializzazione.

- No, i dati primari non risiedono in un file su disco:

   **I dati risiedono in un'origine dati ODBC**

  - Sì, i dati risiedono in un'origine dati ODBC:

      Utilizzare il supporto di database MFC. L'implementazione MFC standard `CDatabase` per questo caso include un oggetto, come descritto nell'articolo MFC: Utilizzo di classi di [database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md). L'applicazione potrebbe anche leggere e scrivere un file ausiliario - lo scopo della creazione guidata applicazione "sia una vista di database e il supporto di file". In questo caso, è necessario utilizzare la serializzazione per il file ausiliario.

  - No, i dati non risiedono in un'origine dati ODBC.

      Esempi di questo caso: i dati risiedono in un DBMS non ODBC; i dati vengono letti tramite un altro meccanismo, ad esempio OLE o DDE.

      In questi casi, non si utilizzerà la serializzazione e l'applicazione non dirà le voci di menu Apri e Salva. È comunque possibile `CDocument` utilizzare un come base iniziale, proprio come `CRecordset` un'applicazione ODBC MFC utilizza il documento per archiviare gli oggetti. Ma non si userà il framework predefinito Apri/Salva la serializzazione del documento.

Per supportare i comandi Apri, Salva e Salva con nome del menu File, il framework fornisce la serializzazione del documento. La serializzazione legge e scrive i `CObject`dati, inclusi gli oggetti derivati dalla classe , in un archivio permanente, in genere un file su disco. La serializzazione è facile da usare e soddisfa molte delle tue esigenze, ma potrebbe essere inappropriata in molte applicazioni di accesso ai dati. Le applicazioni di accesso ai dati in genere aggiornano i dati in base alle transazioni. Aggiornano i record interessati dalla transazione piuttosto che leggere e scrivere un intero file di dati in una sola volta.

Per informazioni sulla serializzazione, vedere [Serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md)
