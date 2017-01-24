---
title: "Collegamento interno | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "collegamento interno"
  - "collegamento [C++], interne"
ms.assetid: 80be7b51-c930-43db-94d6-4f09a64077bf
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Collegamento interno
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se la dichiarazione di un identificatore di ambito file per un oggetto o una funzione contiene l'*storage\-class\-specifier* **static**, l'identificatore disporrà di collegamento esterno.  In caso contrario, l'identificatore disporrà di collegamento esterno.  Per una descrizione di *storage\-class\-specifier* non terminale, vedere [Classi di archiviazione](../c-language/c-storage-classes.md).  
  
 Nell'unità di conversione, ogni istanza di un identificatore con collegamento interno indica lo stesso identificatore o la stessa funzione.  Gli identificatori collegati internamente sono specifici di un'unità di conversione.  
  
## Vedere anche  
 [Utilizzo di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)