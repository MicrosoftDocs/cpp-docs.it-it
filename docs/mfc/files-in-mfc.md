---
title: "File in MFC | Microsoft Docs"
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
  - "accesso binario"
  - "accesso binario, operazioni su file binari in MFC"
  - "classi di I/O file [C++]"
  - "file [C++], modifica"
  - "file [C++], MFC"
  - "file [C++], serializzazione"
  - "I/O [C++], classi MFC"
  - "I/O [MFC]"
  - "MFC [C++], operazioni sui file"
  - "persistenza [C++]"
  - "serializzazione [C++], MFC (file)"
ms.assetid: ae25e2c5-2859-4679-ab97-438824e93ce1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# File in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella libreria Microsoft Foundation classes \(MFC\), la classe [File C](../mfc/reference/cfile-class.md) gestisce le normali operazioni dei\/O di file.  La famiglia di articoli viene illustrato come aprire e chiudere i file e di leggere e scrivere dati a quelli i file.  Vengono inoltre illustrate le operazioni dello stato del file.  Per informazioni su come utilizzare le funzionalità basate su oggetto di serializzazione di MFC come modalità alternativa di lettura e scrittura di dati nei file, vedere l'articolo [Serializzazione](../mfc/serialization-in-mfc.md).  
  
> [!NOTE]
>  Quando si utilizzano gli oggetti MFC **CDocument**, il framework esegue gran parte delle operazioni di serializzazione automaticamente.  In particolare, il framework crea e utilizza l'oggetto di `CFile`.  È necessario scrivere solo il codice nell'override della funzione membro di `Serialize` di classe **CDocument**.  
  
 La classe di `CFile` fornisce un'interfaccia per le operazioni di utilizzo generale del file binario.  `CStdioFile` e `CMemFile` classi derivate da `CFile` e la classe di `CSharedFile` derivata dai servizi di file specifici che consentono di `CMemFile`.  
  
 Per ulteriori informazioni sulle alternative a gestione dei file di MFC, vedere [Gestione dei file](../c-runtime-library/file-handling.md)*in riferimenti alla libreria di runtime*.  
  
 Per informazioni sulle classi derivate di `CFile`, vedere [Grafico della gerarchia di MFC](../mfc/hierarchy-chart.md).  
  
## Scegliere l'argomento con cui si desidera procedere  
 *Utilizzare il file C*  
  
-   [Aprire un file con il file C](../mfc/opening-files.md)  
  
-   [Leggere e scrivere un file con il file C](../mfc/reading-and-writing-files.md)  
  
-   [Chiudere un file con il file C](../mfc/closing-files.md)  
  
-   [Accedere allo stato del file con il file C](../mfc/accessing-file-status.md)  
  
 *Utilizzare la serializzazione MFC \(persistenza dell'oggetto\)*  
  
-   [Creare una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)  
  
-   [Serializzare un oggetto tramite un oggetto CArchive](../mfc/serialization-serializing-an-object.md)  
  
-   [Creare un oggetto CArchive](../mfc/two-ways-to-create-a-carchive-object.md)  
  
-   [Utilizzare CArchive \<\< e \>\> operatori](../mfc/using-the-carchive-output-and-input-operators.md)  
  
-   [Archiviare e caricare CObjects e gli oggetti derivati da cobject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md)  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [CArchive Class](../mfc/reference/carchive-class.md)   
 [CObject Class](../mfc/reference/cobject-class.md)   
 [Ricerca per categorie: Utilizzare la classe cfile?](http://go.microsoft.com/fwlink/?LinkId=128046)