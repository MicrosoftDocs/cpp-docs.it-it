---
title: "Identificatori di classi di archiviazione static | Microsoft Docs"
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
  - "identificatori di classi di archiviazione statici"
  - "variabili statiche, identificatore"
  - "classi di archiviazione, statiche"
ms.assetid: 9bce361e-919b-46b9-8148-40d7ab0eb024
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Identificatori di classi di archiviazione static
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una variabile dichiarata a livello interno con l'identificatore classe di archiviazione **static** ha una durata globale ma è visibile solo all'interno del blocco in cui è dichiarata.  Per le stringhe costanti, utilizzare **static** è utile, perché allevia il sovraccarico dovuto alle frequenti inizializzazioni nelle funzioni chiamate più frequentemente.  
  
## Note  
 Se non si inizializza in modo esplicito una variabile **static**, la stessa viene inizializzata su 0 per impostazione predefinita.  All'interno di una funzione, **static** determina l'allocazione della memoria e funge da definizione.  Le variabili statiche interne forniscono memoria privata, permanente e visibile a una sola funzione.  
  
## Vedere anche  
 [Statico](../misc/static-cpp.md)