---
title: "Suggerimenti per la gestione di input/output | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "opzioni di I/O basate su file"
  - "I/O [C++]"
  - "I/O [C++], opzioni basate su file"
  - "I/O [C++], opzioni"
  - "I/O [MFC], informazioni su I/O"
ms.assetid: d664b175-3b4a-40c3-b14b-39de6b12e419
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Suggerimenti per la gestione di input/output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si utilizza I\/O basato su file o non dipende da come si sceglie alle domande elencate nella seguente struttura ad albero delle decisioni:  
  
 **I dati primari nell'applicazione si trovano in un file su disco?**  
  
-   Sì, i dati primari risiedono in un file su disco:  
  
     **L'applicazione legge l'intero file in memoria nel file aperto e verrà scritto il file di nuovo su disco a al salvataggio del file?**  
  
    -   Sì: Questo è il caso del documento predefinito di MFC.  Serializzazione di **CDocument** di utilizzo.  
  
    -   No: In genere è il caso di aggiornamento basato su transazione del file.  Aggiornare il file in base a transazione e non è necessaria la serializzazione di **CDocument**.  
  
-   No, i dati primari non si trova in un file su disco:  
  
     **I dati risiedono in un'origine dati ODBC?**  
  
    -   Sì, i dati risiedono in un'origine dati ODBC:  
  
         Supporto di usa MFC.  L'implementazione MFC standard per questo caso include un oggetto di **CDocument** per memorizzare un oggetto di `CDatabase`, come illustrato nell'articolo [Cosa è il modello di programmazione MFC per database?](../data/what-is-the-mfc-database-programming-model-q.md).  L'applicazione potrebbe anche per leggere e scrivere un file ausiliario allo scopo della procedura guidata applicazione "sia una visualizzazione di database in cui archiviare opzione di supporto".  In questo caso, si utilizza la serializzazione per il file ausiliario.  
  
    -   No, i dati non si trova in un'origine dati ODBC.  
  
         Esempi di questo caso: i dati si trovano in un ODBC non DBMS; i dati vengono letti tramite un altro meccanismo, come OLE o DDE.  
  
         In tali casi, non sarà possibile utilizzare la serializzazione e l'applicazione non verrà aperto e senza salvare le voci di menu.  È tuttavia possibile utilizzare come home **CDocument** base, come nel caso di un'applicazione ODBC MFC utilizza il documento per archiviare oggetti di `CRecordset`.  Ma non si utilizzerà il file predefinito del framework serializzazione\/salva apertura del documento.  
  
 Per supportare il pulsante apri, salva e salva come comandi del menu File, il framework forniscono la serializzazione del documento.  La serializzazione legge e scrive i dati, inclusi gli oggetti derivati dalla classe `CObject`, a un archivio permanente, in genere un file su disco.  La serializzazione è facile da utilizzare e fornisce molti dei requisiti, ma può essere appropriato in molte applicazioni di accesso ai dati.  Le applicazioni di accesso ai dati in genere vengono aggiornati i dati in base a transazione.  Aggiornare i record interessati dalla transazione anziché la lettura e la scrittura di un intero file di dati contemporaneamente.  
  
 Per informazioni sulla serializzazione, vedere [Serializzazione](../mfc/serialization-in-mfc.md).  
  
## Vedere anche  
 [Serializzazione: serializzazione e input\/output del database](../mfc/serialization-serialization-vs-database-input-output.md)