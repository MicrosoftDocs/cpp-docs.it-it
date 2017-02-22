---
title: "Serializzazione in MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "esclusione della serializzazione"
  - "classi di raccolte, serializzazione"
  - "MFC, serializzazione"
  - "serializzazione [C++], esclusione"
  - "serializzazione [C++], MFC"
ms.assetid: fb596a18-4522-47e0-96e0-192732d24c12
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Serializzazione in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato il meccanismo di serializzazione fornito nella libreria Microsoft Foundation classes \(MFC\) per consentire agli oggetti persista tra le esecuzioni del programma.  
  
 La serializzazione è il processo di scrittura o lettura di un oggetto o da un supporto di archivio permanente come un file su disco.  La serializzazione è ideale per le situazioni in cui è previsto per gestire lo stato dei dati strutturati \(ad esempio classi o strutture C\+\+\) durante o dopo l'esecuzione di un programma.  Utilizzo di oggetti di serializzazione forniti da MFC consente che questo si verifichi in un modo standard e coerente, sollevante l'utente dalla necessità di eseguire manualmente le operazioni sui file.  
  
 MFC fornisce il supporto incorporato per la serializzazione nella classe `CObject`.  Pertanto, tutte le classi derivate da `CObject` possono utilizzare il protocollo di serializzazione di `CObject`.  
  
 L'idea di base della serializzazione viene creato un oggetto deve poter scrivere lo stato corrente, in genere indicato dal valore delle variabili membro, in un archivio permanente.  In seguito, l'oggetto potrà essere ricreato lettura, o deserializzazione, lo stato dell'oggetto dall'archiviazione.  La serializzazione gestisce tutti i dettagli dei puntatori agli oggetti e i riferimenti circolari a oggetti che vengono utilizzati per serializzare un oggetto.  Un aspetto fondamentale è che l'oggetto stesso è responsabile della lettura e la scrittura dello stato.  Pertanto, affinché la classe sia serializzabile, deve implementare le operazioni di base di serializzazione.  Come illustrato nel gruppo di serializzazione di articoli, è facile aggiungere questa funzionalità in una classe.  
  
 MFC utilizza un oggetto classe di `CArchive` come intermediario tra l'oggetto da serializzare e il supporto di archiviazione.  Questo oggetto è associato sempre con un oggetto di `CFile`, da cui ottenere le informazioni necessarie per la serializzazione, inclusi il nome file e se l'operazione richiesta è di lettura o scrittura.  L'oggetto che esegue un'operazione di serializzazione può utilizzare l'oggetto di `CArchive` indipendentemente dalla natura del supporto di archiviazione.  
  
 Un oggetto di `CArchive` vengono utilizzati operatori di overload di inserimento \(**\<\<**\) e di estrazione \(**\>\>**\) per eseguire la scrittura e le operazioni di lettura.  Per ulteriori informazioni, vedere [CObjects archiviando e di carico tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md) la serializzazione dell'articolo: Serializzare un oggetto.  
  
> [!NOTE]
>  Non confondere la classe di `CArchive` con le classi iostream di utilizzo generale, utilizzati per solo testo formattato.  La classe di `CArchive` riguarda gli oggetti serializzati in formato binario.  
  
 Se si desidera, è possibile ignorare la serializzazione di MFC per creare un meccanismo per l'archiviazione dei dati persistenti.  Sarà necessario eseguire l'override del membro della classe eseguono la serializzazione avviata al comando dell'utente.  Vedere le informazioni in [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) dei comandi di **ID\_FILE\_SAVE\_AS** e di **ID\_FILE\_SAVE**standard, di `ID_FILE_OPEN`.  
  
 Gli articoli seguenti sono contenute due attività principali richieste per la serializzazione:  
  
-   [Serializzazione: Creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)  
  
-   [Serializzazione: Serializzare un oggetto](../mfc/serialization-serializing-an-object.md)  
  
 L'articolo [Serializzazione: Serialization vs. database](../mfc/serialization-serialization-vs-database-input-output.md) viene descritto quando la serializzazione è una tecnica appropriata di output nelle applicazioni di database.  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [CArchive Class](../mfc/reference/carchive-class.md)   
 [CObject Class](../mfc/reference/cobject-class.md)   
 [CDocument Class](../mfc/reference/cdocument-class.md)   
 [CFile Class](../mfc/reference/cfile-class.md)