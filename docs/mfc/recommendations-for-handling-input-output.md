---
title: Suggerimenti per la gestione di input-output
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [MFC], about I/O
- file-based I/O options
- I/O [MFC]
- I/O [MFC], options
- I/O [MFC], file-based options
ms.assetid: d664b175-3b4a-40c3-b14b-39de6b12e419
ms.openlocfilehash: 956a92fd1761f61081afa2eb9c6cb35fe72b46d6
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446905"
---
# <a name="recommendations-for-handling-inputoutput"></a>Suggerimenti per la gestione di input/output

Se si usa l'I/O basato su file o non dipende da come si risponde alle domande nell'albero delle decisioni seguente:

**I dati primari nell'applicazione si trovano in un file su disco**

- Sì, i dati primari si trovano in un file su disco:

     **Consente all'applicazione di leggere l'intero file in memoria sul file aperto e di riscrivere l'intero file su disco al salvataggio del file**

   - Sì: si tratta del caso del documento MFC predefinito. Usare `CDocument` serializzazione.

   - No: si tratta in genere del caso dell'aggiornamento basato sulle transazioni del file. Il file viene aggiornato in base alle singole transazioni e non è necessario `CDocument` la serializzazione.

- No, i dati primari non si trovano in un file su disco:

     **I dati risiedono in un'origine dati ODBC**

   - Sì, i dati si trovano in un'origine dati ODBC:

      Utilizzare il supporto per i database di MFC. L'implementazione MFC standard per questo caso include un oggetto `CDatabase`, come illustrato nell'articolo [MFC: utilizzo di classi di database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md). È inoltre possibile che l'applicazione legga e scriva un file ausiliario, ovvero lo scopo della creazione guidata applicazione, ovvero l'opzione "visualizzazione database e supporto file". In questo caso, si utilizzerebbe la serializzazione per il file ausiliario.

   - No, i dati non si trovano in un'origine dati ODBC.

      Esempi di questo caso: i dati si trovano in un sistema DBMS non ODBC; i dati vengono letti tramite un altro meccanismo, ad esempio OLE o DDE.

      In questi casi, non si userà la serializzazione e l'applicazione non avrà voci di menu aperte e salvate. Per archiviare `CRecordset` oggetti, è comunque possibile utilizzare un `CDocument` come base principale, proprio come un'applicazione ODBC MFC che utilizza il documento. Tuttavia, non verrà usato il file predefinito del Framework per la serializzazione dei documenti aperti o salvati.

Per supportare i comandi Apri, Salva e Salva con nome nel menu file, il Framework fornisce la serializzazione dei documenti. La serializzazione legge e scrive i dati, inclusi gli oggetti derivati dalla classe `CObject`, in un archivio permanente, in genere un file su disco. La serializzazione è facile da usare e offre molte delle proprie esigenze, ma potrebbe non essere appropriata in molte applicazioni di accesso ai dati. Le applicazioni di accesso ai dati in genere aggiornano i dati in base alle singole transazioni. Aggiornano i record interessati dalla transazione anziché leggere e scrivere un intero file di dati in una sola volta.

Per informazioni sulla serializzazione, vedere [serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md)
