---
title: Suggerimenti per la gestione di Input / Output | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- I/O [MFC], about I/O
- file-based I/O options
- I/O [MFC]
- I/O [MFC], options
- I/O [MFC], file-based options
ms.assetid: d664b175-3b4a-40c3-b14b-39de6b12e419
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9ee88b7784abb6ca622e72a9dfb31efc39fa7816
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930940"
---
# <a name="recommendations-for-handling-inputoutput"></a>Suggerimenti per la gestione di input/output
Indica se utilizzare i/o su file o non dipende dal modo in cui risponde alle domande nell'albero delle decisioni seguenti:  
  
 **I dati primari nell'applicazione si trovano in un file su disco**  
  
-   Sì, i dati primari si trovano in un file su disco:  
  
     **L'applicazione letto l'intero file in memoria su File aperto e riscrivere l'intero file su disco nel salvataggio File**  
  
    -   Sì: Questo è il caso di documenti MFC predefinito. Utilizzare `CDocument` serializzazione.  
  
    -   No: Si tratta in genere nel caso del basato sulle transazioni di aggiornamento del file. Si aggiorna il file in base a una transazione e non è necessario `CDocument` serializzazione.  
  
-   No, i dati primari non si trovano in un file su disco:  
  
     **I dati si trovano in un'origine dati ODBC**  
  
    -   Sì, i dati risiedono in un'origine dati ODBC:  
  
         Utilizzare il supporto di database di MFC. L'implementazione MFC standard per questo case include un `CDatabase` dell'oggetto, come descritto nell'articolo [MFC: utilizzo di classi di Database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md). L'applicazione potrebbe anche leggere e scrivere file ausiliario, lo scopo della creazione guidata applicazione opzione "una vista di database e file supportano entrambi". In questo caso, utilizzare la serializzazione per il file ausiliario.  
  
    -   No, i dati non si trovano in un'origine dati ODBC.  
  
         Esempi di questo caso: i dati si trovano in una non ODBC DBMS; i dati vengono letti tramite un altro meccanismo, ad esempio OLE o DDE.  
  
         In questi casi, non utilizzare la serializzazione e l'applicazione non verrà aperto e salvare le voci di menu. Potrebbe comunque voler utilizzare un `CDocument` come base principale, proprio come un database ODBC MFC applicazione usa il documento per archiviare `CRecordset` oggetti. Ma non consente la serializzazione di documenti del framework predefinito File Apri/Salva.  
  
 Per supportare l'apertura, salvataggio e Salva i comandi del menu File, il framework fornisce la serializzazione di documenti. Serializzazione legge e scrive i dati, compresi gli oggetti derivati dalla classe `CObject`, un archivio permanente a, in genere un file su disco. La serializzazione è facile da usare e soddisfare diverse esigenze, ma potrebbe non essere adatta in molte applicazioni l'accesso ai dati. Le applicazioni di accesso ai dati in genere aggiornare dati in base a una transazione. Aggiornare i record interessati dalla transazione anziché durante la lettura e scrittura di un intero file di dati in una sola volta.  
  
 Per informazioni sulla serializzazione, vedere [serializzazione](../mfc/serialization-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione e Input/Output di database](../mfc/serialization-serialization-vs-database-input-output.md)
