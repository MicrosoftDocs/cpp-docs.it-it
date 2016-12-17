---
title: "Nessun collegamento | Microsoft Docs"
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
  - "collegamento [C++], nessuno"
  - "nessun collegamento"
ms.assetid: 5a413082-1034-4e04-b76b-8d14668bf434
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Nessun collegamento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se una dichiarazione di un identificatore all'interno di un blocco non include l'identificatore di classe di archiviazione `extern`, significa che l'identificatore non dispone di un collegamento ed è univoco nella funzione.  
  
 I seguenti identificatori non dispongono di collegamento:  
  
-   Identificatori dichiarati come elementi diversi da un oggetto o da una funzione  
  
-   Identificatori dichiarati come parametri di una funzione  
  
-   Identificatori con ambito di blocco per un oggetto dichiarato senza l'identificatore di classe di archiviazione `extern`  
  
 Se un identificatore non dispone di collegamento, dichiarando nuovamente lo stesso nome \(in un dichiaratore o in un identificatore di tipo\) nello stesso livello di ambito verrà generato un errore di ridefinizione dei simboli.  
  
## Vedere anche  
 [Utilizzo di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)