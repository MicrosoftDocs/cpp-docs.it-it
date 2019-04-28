---
title: Suggerimenti per la gestione di Input / Output
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [MFC], about I/O
- file-based I/O options
- I/O [MFC]
- I/O [MFC], options
- I/O [MFC], file-based options
ms.assetid: d664b175-3b4a-40c3-b14b-39de6b12e419
ms.openlocfilehash: 760c213c3af7f9c75374f04e3dfc6b9499eade5c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62218564"
---
# <a name="recommendations-for-handling-inputoutput"></a>Suggerimenti per la gestione di input/output

Che si usano i/o basati su file o non dipende dal modo in cui risponde alle domande nell'albero delle decisioni seguente:

**I dati primari nell'applicazione si trovano in un file su disco**

- Sì, i dati primari si trovano in un file su disco:

     **L'applicazione leggere l'intero file in memoria sul File aperto e riscrivere l'intero file su disco nel salvataggio File**

   - Sì: Questo è il caso di documento predefinito MFC. Usare `CDocument` serializzazione.

   - No: Si tratta in genere nel caso del basato sulle transazioni di aggiornamento del file. Aggiornare il file in base a una transazione e non è necessario `CDocument` serializzazione.

- No, i dati primari non risiedano in un file su disco:

     **I dati si trovano in un'origine dati ODBC**

   - Sì, i dati risiedono in un'origine dati ODBC:

         Use MFC's database support. The standard MFC implementation for this case includes a `CDatabase` object, as discussed in the article [MFC: Using Database Classes with Documents and Views](../data/mfc-using-database-classes-with-documents-and-views.md). The application might also read and write an auxiliary file — the purpose of the application wizard "both a database view and file support" option. In this case, you'd use serialization for the auxiliary file.

   - No, i dati non si trovano in un'origine dati ODBC.

         Examples of this case: the data resides in a non-ODBC DBMS; the data is read via some other mechanism, such as OLE or DDE.

         In such cases, you won't use serialization, and your application won't have Open and Save menu items. You might still want to use a `CDocument` as a home base, just as an MFC ODBC application uses the document to store `CRecordset` objects. But you won't use the framework's default File Open/Save document serialization.

Per supportare l'apertura, salvataggio e salvare come comandi del menu File, il framework fornisce la serializzazione di documenti. Serializzazione legge e scrive i dati, compresi gli oggetti derivati dalla classe `CObject`, un archivio permanente a, in genere un file su disco. La serializzazione è facile da usare e serve molte delle proprie esigenze, ma potrebbe non essere adatta in molte applicazioni di accesso ai dati. In genere, le applicazioni di accesso ai dati aggiorna i dati in base a una transazione. Gli utenti aggiornare record interessati da transazioni anziché la lettura e scrittura di un intero file di dati in una sola volta.

Per informazioni sulla serializzazione, vedere [serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Serializzazione: Serializzazione e Input/Output del database](../mfc/serialization-serialization-vs-database-input-output.md)
