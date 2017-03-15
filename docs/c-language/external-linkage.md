---
title: "Collegamento esterno | Microsoft Docs"
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
  - "collegamento esterno"
  - "collegamento esterno, informazioni su collegamento esterno"
  - "collegamento [C++], esterno"
ms.assetid: a6f8ea69-b405-4cdd-bf12-ad5462b73183
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Collegamento esterno
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se la prima dichiarazione, a livello di ambito file, di un identificatore non utilizza l'identificatore classe di archiviazione **static**, l'oggetto dispone di collegamento esterno.  
  
 Se la dichiarazione di un identificatore per una funzione non ha un *storage\-class\-specifier*, il relativo collegamento è determinato esattamente come se fosse dichiarato con *storage\-class\-specifier* `extern`.  Se la dichiarazione di un identificatore per un oggetto ha un ambito file e nessun *storage\-class\-specifier*, il relativo collegamento è esterno.  
  
 Il nome di un identificatore con collegamento esterno definisce la stessa funzione o oggetto dati di una qualunque altra dichiarazione per lo stesso nome con collegamento esterno.  Le due dichiarazioni possono trovarsi nella stessa unità di conversione o in unità di conversione diverse.  Se l'oggetto o la funzione dispongono anche di durata globale, l'oggetto o la funzione sono condivisi dall'intero programma.  
  
## Vedere anche  
 [Utilizzo di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)