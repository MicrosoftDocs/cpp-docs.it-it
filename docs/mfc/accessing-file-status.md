---
title: "Accesso allo stato del file | Microsoft Docs"
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
  - "esempi [MFC], file (stato)"
  - "stato dei file [C++]"
  - "file [C++], accesso"
  - "file [C++], informazioni di stato"
  - "stato dei file"
ms.assetid: 1b8891d6-eb0f-4037-a837-4928fe595222
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Accesso allo stato del file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`CFile` supporta inoltre lo stato del file, includendo se il file esiste, la data e l'ora di creazione e di modifica, la dimensione logica e il percorso.  
  
### Per ottenere lo stato del file  
  
1.  Utilizzare la classe [File C](../mfc/reference/cfile-class.md) per ottenere e impostare informazioni su un file.  Un'applicazione utile prevede di utilizzare il membro statico **GetStatus** della funzione `CFile` per determinare se un file esiste.  **GetStatus** restituisce 0 se il file specificato non esiste.  
  
 Pertanto, è possibile utilizzare il risultato di **GetStatus** per determinare se utilizzare il flag **CFile::modeCreate** per aprire il file, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCFiles#3](../mfc/codesnippet/CPP/accessing-file-status_1.cpp)]  
  
 Per ulteriori informazioni, vedere [Serializzazione](../mfc/serialization-in-mfc.md).  
  
## Vedere anche  
 [File](../mfc/files-in-mfc.md)