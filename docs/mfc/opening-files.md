---
title: "Apertura di file | Microsoft Docs"
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
  - "CFile (classe), variabile"
  - "esempi [MFC], apertura di file"
  - "gestione delle eccezioni [C++], apertura di file"
  - "gestione delle eccezioni [C++], durante l'apertura di file"
  - "oggetti file [C++]"
  - "file [C++], apertura"
  - "MFC [C++], operazioni sui file"
  - "chiamate aperte"
  - "Open (funzioni membro)"
  - "Open (metodo), CFile (classe)"
  - "apertura di file"
  - "apertura di file, gestione di eccezioni"
  - "apertura di file, in MFC"
ms.assetid: a991b8ec-b04a-4766-b47e-7485b5dd0b01
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Apertura di file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In MFC, il metodo più comune per aprire un file è un processo in due fasi.  
  
#### Per aprire un file  
  
1.  Creare l'oggetto file senza specificare un percorso o i contrassegni di autorizzazione.  
  
     Generalmente si crea un oggetto file dichiarare una variabile di [File C](../mfc/reference/cfile-class.md) sullo stack frame.  
  
2.  Chiamare la funzione membro di [Apri](../Topic/CFile::Open.md) per l'oggetto file, fornendo un percorso e i contrassegni di autorizzazione.  
  
     Il valore restituito per `Open` sarà diverso da zero se il file è stato aperto correttamente oppure 0 se il file specificato non può essere aperto.  La funzione membro di `Open` con prototipo è la seguente:  
  
     `virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );`  
  
     I flag aperti specifica che le autorizzazioni, come di sola lettura, dal file.  Valori di flag possibili sono definiti come costanti enumerate nella classe di `CFile`, pertanto sono qualificati con "`CFile::`" come in `CFile::modeRead`.  Utilizzare il flag di `CFile::modeCreate` se si desidera creare il file.  
  
 Nell'esempio seguente viene illustrato come creare un nuovo file con l'autorizzazione lettura \/scrittura \(che sostituisce qualsiasi file precedente con lo stesso percorso\):  
  
 [!code-cpp[NVC_MFCFiles#1](../mfc/codesnippet/CPP/opening-files_1.cpp)]  
  
> [!NOTE]
>  In questo esempio viene creato e aperto un file.  Se sono presenti problemi, la chiamata di `Open` può restituire un oggetto di `CFileException` nell'ultimo parametro, come illustrato di seguito.  La macro di `TRACE` stampa il nome file sia un codice che indicano la causa di errore.  È possibile chiamare la funzione di `AfxThrowFileException` se è richiesta la segnalazione errori più dettagliata.  
  
## Vedere anche  
 [CFile Class](../mfc/reference/cfile-class.md)   
 [CFile::Open](../Topic/CFile::Open.md)   
 [File](../mfc/files-in-mfc.md)