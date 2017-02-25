---
title: "Gestione di dati con variabili dati documento | Microsoft Docs"
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
  - "classi [C++], Friend"
  - "classi di raccolte [C++], utilizzate da oggetto documento"
  - "dati [MFC]"
  - "dati [MFC], documenti"
  - "dati di documento [C++]"
  - "documenti [C++], archivio dati"
  - "classi di tipo friend"
  - "variabili membro [C++], classe documento"
ms.assetid: e70b87f4-8c30-49e5-8986-521c2ff91704
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Gestione di dati con variabili dati documento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Implementare i dati del documento come le variabili membro del documento classe.  Ad esempio, il programma scribble dichiara un membro dati di tipo `CObList` \- un elenco collegato di archiviare i puntatori a oggetti di `CObject`.  Questo elenco viene utilizzato per memorizzare matrici punti che costituiscono un disegno a tratteggio a mano libera.  
  
 Come si implementano i dati dei membri del documento dipendono dalla natura dell'applicazione.  Per consentire all'esterno, MFC fornisce un group "di classi collection" \- matrici, elenchi e mappe di dizionari\), incluse le raccolte basate su modelli C\+\+ \- con le classi che incapsulano vari tipi di dati comuni quali `CString`, `CRect`, `CPoint`, `CSize` e `CTime`.  Per ulteriori informazioni su queste classi, vedere [Cenni preliminari sulla libreria di classi](../mfc/class-library-overview.md) in *Riferimenti MFC*.  
  
 Quando si definiscono i dati dei membri del documento, in genere aggiunte le funzioni membro della classe di documento per impostare e ottenere gli elementi di dati ed eseguire altre operazioni utili tra essi.  
  
 I punti di vista accedono l'oggetto documento utilizzando il puntatore della visualizzazione del documento, installato nella visualizzazione all'ora di creazione.  È possibile recuperare questo puntatore nelle funzioni membro di una visualizzazione chiamando la funzione membro **GetDocument**di `CView`.  Assicurarsi di eseguire il cast di questo puntatore sul proprio tipo di documento.  È quindi possibile accedere ai membri del documento pubblico tramite il puntatore.  
  
 Se il frequente trasferimento dei dati richiede l'accesso diretto, o desidera utilizzare i membri non pubblici del documento classi, è possibile convertire la classe di visualizzazione friend \(in termini di C\+\+\) della classe document.  
  
## Vedere anche  
 [Utilizzo di documenti](../mfc/using-documents.md)