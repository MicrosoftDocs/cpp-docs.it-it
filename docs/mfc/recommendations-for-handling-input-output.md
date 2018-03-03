---
title: Suggerimenti per la gestione di Input-Output | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- I/O [MFC], about I/O
- file-based I/O options
- I/O [MFC]
- I/O [MFC], options
- I/O [MFC], file-based options
ms.assetid: d664b175-3b4a-40c3-b14b-39de6b12e419
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cc7fbb58aa1ac85c185756eb336737cbaf33a48e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recommendations-for-handling-inputoutput"></a>Suggerimenti per la gestione di input/output
Sia con basate su file i/o che non dipende dal tipo di modalità rispondere alle domande nell'albero delle decisioni seguenti:  
  
 **I dati nell'applicazione principali si trovano in un file su disco**  
  
-   Sì, i dati primari si trovano in un file su disco:  
  
     **L'applicazione letto l'intero file in memoria su File aperto e riscrivere l'intero file su disco nel salvataggio File**  
  
    -   Sì: Questo è il caso di documento MFC predefinita. Utilizzare **CDocument** la serializzazione.  
  
    -   No: Si tratta in genere nel caso del basato sulle transazioni di aggiornamento del file. Si aggiorna il file in base a una transazione e non è necessario **CDocument** la serializzazione.  
  
-   No, i dati primari non si trovano in un file su disco:  
  
     **I dati si trovano in un'origine dati ODBC**  
  
    -   Sì, i dati risiedono in un'origine dati ODBC:  
  
         Utilizzare il supporto di database MFC. Include l'implementazione di MFC standard per questo caso un `CDatabase` dell'oggetto, come descritto nell'articolo [MFC: utilizzo di classi di Database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md). L'applicazione potrebbe leggere e scrivere file ausiliario, lo scopo della creazione guidata applicazione opzione "vista di database sia un file di supporto". In questo caso, utilizzare la serializzazione per il file ausiliario.  
  
    -   No, i dati non si trovano in un'origine dati ODBC.  
  
         Esempi di questo caso: i dati si trovano in una non ODBC DBMS; i dati vengono letti tramite un altro meccanismo, ad esempio OLE o DDE.  
  
         In questi casi, non utilizzare la serializzazione e l'applicazione non verrà aperto e salvare le voci di menu. Si potrebbe ancora si desidera utilizzare un **CDocument** come base principale, come un database ODBC MFC applicazione usa il documento per archiviare `CRecordset` oggetti. Ma non consente la serializzazione di documenti del framework predefinito Apri/Salva.  
  
 Per supportare l'apertura, Salva e Salva i comandi del menu File, il framework fornisce la serializzazione di documenti. Legge e scrive i dati, compresi gli oggetti derivati dalla classe di serializzazione `CObject`, un archivio permanente a, in genere un file su disco. La serializzazione è facile da usare e ha molte delle esigenze, ma potrebbe non essere adatta in molte applicazioni di accesso ai dati. Applicazioni di accesso ai dati in genere aggiornare dati in base a una transazione. Aggiornare i record interessati dalla transazione anziché durante la lettura e scrittura di un intero file di dati in una sola volta.  
  
 Per informazioni sulla serializzazione, vedere [serializzazione](../mfc/serialization-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione e Database di Input/Output](../mfc/serialization-serialization-vs-database-input-output.md)
