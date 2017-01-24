---
title: "La DLL regolare presenta una perdita di memoria, ma il codice sembra corretto. Come &#232; possibile trovare la perdita di memoria? | Microsoft Docs"
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
  - "DLL [C++], perdite di memoria"
  - "perdite di memoria [C++], DLL"
ms.assetid: a5d76573-b567-4b6a-8303-dafeeed9204d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# La DLL regolare presenta una perdita di memoria, ma il codice sembra corretto. Come &#232; possibile trovare la perdita di memoria?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una delle possibili cause del problema di memoria è il fatto che MFC crea oggetti temporanei utilizzati all'interno delle funzioni del gestore dei messaggi.  Nelle DLL regolari, MFC non rilascia automaticamente la memoria assegnata per questi oggetti.  Per ulteriori informazioni, vedere [Gestione della memoria e heap di debug](http://msdn.microsoft.com/it-it/34dc6ef6-31c9-460e-a2a7-15e7f8e3334b) o l'articolo della Knowledge Base "Cleaning Up Temporary MFC Objects in \_USRDLL DLLs" \(Q105286\) \(informazioni in lingua inglese\).  
  
 Tenere presente che il termine USRDLL non è più utilizzato nella documentazione di Visual C\+\+.  Una DLL regolare collegata in modo statico a MFC possiede le stesse caratteristiche di USRDLL.  Il consiglio fornito nell'articolo della Knowledge Base si applica anche alle DLL regolari collegate a MFC in modo dinamico.  Le informazioni contenute nell'articolo citato si applicano sia alle DLL regolari collegate a MFC in modo statico che a quelle collegate a MFC in modo dinamico.  
  
## Vedere anche  
 [Domande frequenti relative alle DLL](../build/dll-frequently-asked-questions.md)