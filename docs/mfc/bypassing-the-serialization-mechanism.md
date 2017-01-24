---
title: "Esclusione del meccanismo di serializzazione | Microsoft Docs"
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
  - "oggetti archivio [C++]"
  - "archivi [C++]"
  - "archivi [C++], serializzazione"
  - "esclusione della serializzazione"
  - "serializzazione [C++], esclusione"
  - "serializzazione [C++], override"
  - "serializzazione [C++], ruolo di framework"
ms.assetid: 48d4a279-b51c-4ba5-81cd-ed043312b582
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Esclusione del meccanismo di serializzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come si è visto, il framework fornisce una modalità predefinita leggere e scrivere dati da e verso file.  La serializzazione attraverso un oggetto dell'archivio indica le necessità di grandi dimensioni più applicazioni.  Tale applicazione legge un file interamente in memoria, consente all'utente aggiornare il file e quindi scrive la versione aggiornata su disco nuovamente.  
  
 Tuttavia, alcune applicazioni utilizzano dati molto in modo diverso e per queste applicazioni serializzazione tramite un archivio non è appropriato.  Gli esempi includono i programmi del database, programmi che consentono di modificare solo le parti di file di grandi dimensioni, i programmi che producono i file di solo testo e programmi che condividono i file di dati.  
  
 In questi casi, è possibile eseguire l'override della funzione di [Serializzare](../Topic/CObject::Serialize.md) in modo diverso per mediare le azioni di file attraverso un oggetto di [File C](../mfc/reference/cfile-class.md) anziché un oggetto di [CArchive](../mfc/reference/carchive-class.md).  
  
 È possibile utilizzare **Apri**, **Leggere**, **Scrittura**, **Chiudi** e le funzioni membro di `Seek` di classe `CFile` per aprire un file, spostare il puntatore del file \(ricerca\) a un punto specifico nel file, leggere un record \(un determinato numero di byte\) a questo punto, si lascia l'utente aggiornare il record, quindi si trova nello stesso punto ancora e scrivere il record del file.  Il framework aperto il file e utilizzare la funzione membro di `GetFile` di classe `CArchive` per ottenere un puntatore all'oggetto di `CFile`.  Per l'utilizzo elastica ancora più sofisticata, è possibile eseguire l'override delle funzioni membro di [OnSaveDocument](../Topic/CDocument::OnSaveDocument.md) e di [OnOpenDocument](../Topic/CDocument::OnOpenDocument.md) di classe `CWinApp`.  Per ulteriori informazioni, vedere la classe [CFile](../mfc/reference/cfile-class.md) nel *Riferimento MFC*.  
  
 In questo scenario, le l'override di `Serialize` non eseguono alcuna operazione, a meno che, ad esempio, si desidera eseguirla scrivere e leggere l'intestazione del file per tenerla aggiornata quando il documento viene chiuso.  
  
## Vedere anche  
 [Utilizzo di documenti](../mfc/using-documents.md)