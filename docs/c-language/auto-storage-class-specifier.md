---
title: "Identificatore di classi di archiviazione auto | Microsoft Docs"
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
ms.assetid: 8e73f57e-aa92-4e41-91ea-5c8ad2a2b332
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Identificatore di classi di archiviazione auto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'identificatore della classe di archiviazione **auto** dichiara una variabile automatica, una variabile con una durata locale.  Una variabile **auto** è visibile solo nel blocco in cui viene dichiarata.  Le dichiarazioni delle variabili **auto** possono includere inizializzatori, come illustrato in [Inizializzazione](../c-language/initialization.md).  Poiché le variabili con la classe di archiviazione **auto** non vengono inizializzate automaticamente, è necessario inizializzarle in modo esplicito quando vengono dichiarate oppure assegnare loro valori iniziali nelle istruzioni all'interno del blocco.  I valori delle variabili **auto** inizializzate non sono definiti. Una variabile locale della classe di archiviazione **auto** o **register** viene inizializzata ogni volta in cui diventa interna all'ambito se viene fornito un inizializzatore.  
  
 Una variabile interna **static** \(una variabile statica con ambito blocco o locale\) può essere inizializzata con l'indirizzo di un elemento esterno o **static**, ma non con l'indirizzo di un altro elemento **auto**, poiché l'indirizzo di un elemento **auto** non è una costante.  
  
## Vedere anche  
 [Parola chiave auto](../cpp/auto-keyword.md)