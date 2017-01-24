---
title: "Lettura e scrittura di file | Microsoft Docs"
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
  - "CFile (classe), oggetti"
  - "CFile (classe), lettura e scrittura di oggetti CFile"
  - "esempi [MFC], lettura di file"
  - "esempi [MFC], scrittura in file"
  - "file [C++], lettura"
  - "file [C++], scrittura"
  - "MFC [C++], operazioni sui file"
  - "lettura di file"
  - "scrittura su file [C++]"
ms.assetid: cac0c826-ba56-495f-99b3-ce6336f65763
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Lettura e scrittura di file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si utilizzano le funzioni di gestione dei file della libreria di runtime del linguaggio C, la lettura di MFC e le operazioni di scrittura risulteranno comuni.  In questo articolo viene descritto direttamente da leggere e scrivere direttamente a un oggetto di `CFile`.  È inoltre possibile fare l'i\/o di file memorizzato nel buffer alla classe di [CArchive](../mfc/reference/carchive-class.md).  
  
#### Per leggere e scrivere nel file  
  
1.  Utilizzare le funzioni membro di **Scrittura** e di **Leggere** per leggere e scrivere dati nel file.  
  
     \- oppure \-  
  
2.  La funzione membro di `Seek` è disponibile anche per passare a un offset specifico nel file.  
  
 **Leggere** accetta un puntatore a un buffer e il numero di byte per leggere e restituisce il numero effettivo di byte che sono stati letti.  Se il numero di byte richiesto non venga visualizzato perché \(EOF\) di fine file viene raggiunto, il numero effettivo di byte letti viene restituito.  Se qualsiasi errore di lettura caso, viene generata un'eccezione.  **Scrittura** è simile a **Leggere**, ma il numero di byte scritto non viene restituito.  Se un errore di scrittura si verifica, includendo la scrittura di tutti i byte specificati, viene generata un'eccezione.  Se si dispone di un oggetto valido di `CFile`, è possibile leggere o scrivere come illustrato nel seguente esempio:  
  
 [!code-cpp[NVC_MFCFiles#2](../mfc/codesnippet/CPP/reading-and-writing-files_1.cpp)]  
  
> [!NOTE]
>  È necessario in genere eseguire le operazioni di input\/output all'interno di un blocco di gestione delle eccezioni**Catch** \/ **Prova**.  Per ulteriori informazioni, vedere [Gestione delle eccezioni \(MFC\)](../mfc/exception-handling-in-mfc.md).  
  
## Vedere anche  
 [File](../mfc/files-in-mfc.md)