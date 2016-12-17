---
title: "Durata | Microsoft Docs"
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
  - "classe di archiviazione automatica"
  - "classe di archiviazione automatica, durata"
  - "assegnazione della memoria dinamica"
  - "funzioni [C++], durata"
  - "variabili globali, durata"
  - "durata"
  - "variabili locali, durata"
  - "allocazione di memoria, dinamica"
  - "allocazione di memoria, allocazione dinamica"
  - "identificatori di classi di archiviazione, durata di archiviazione"
  - "classi di archiviazione, durata"
  - "durata di archiviazione"
  - "variabili, automatico"
  - "variabili, durata"
ms.assetid: ff0b42cb-3f0f-49a3-a94f-d1d825d8ddfe
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Durata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

"Durata" è il periodo di tempo durante l'esecuzione di un programma in cui esiste una variabile o una funzione.  La durata di archiviazione dell'identificatore determina la sua durata.  
  
 Un identificatore dichiarato con *storage\-class\-specifier* **static** ha durata di archiviazione statica.  Gli identificatori con durata di archiviazione statica \(anche detta "globale"\) dispongono di archiviazione e di un valore definito per la durata di un programma.  L'archiviazione è riservata e il valore archiviato dell'identificatore viene inizializzato solo una volta, prima dell'avvio del programma.  Anche un identificatore dichiarato con collegamento esterno o interno dispone di durata di archiviazione statica \(vedere [Collegamento](../c-language/linkage.md)\).  
  
 Un identificatore dichiarato senza identificatore classe di archiviazione **statico** ha durata di archiviazione automatica se è dichiarato all'interno di una funzione.  Un identificatore con durata di archiviazione automatica \(un "identificatore locale"\) dispone di archiviazione e di un valore definito solo all'interno del blocco in cui l'identificatore viene definito o dichiarato.  Un identificatore automatico è una nuova archiviazione allocata ogni volta che il programma accede a tale blocco e perde la relativa archiviazione \(e il relativo valore\) quando il programma esce dal blocco.  Anche gli identificatori dichiarati in una funzione senza collegamento hanno una durata di archiviazione automatica.  
  
 Le regole seguenti specificano se un identificatore ha durata globale \(statica\) o locale \(automatica\):  
  
-   Tutte le funzioni hanno una durata statica.  Pertanto sono sempre presenti durante l'esecuzione del programma.  Gli identificatori dichiarati a livello esterno \(ovvero all'esterno di tutti i blocchi nel programma allo stesso livello delle definizioni di funzione\) hanno sempre durate globali \(statiche\).  
  
-   Se una variabile locale dispone di un inizializzatore, la variabile viene inizializzata ogni volta che viene creata \(a meno che non venga dichiarata come **statica**\).  Anche i parametri di funzione dispongono di durata locale.  È possibile specificare la durata globale per un identificatore all'interno di un blocco includendo l'identificatore classe di archiviazione **statico** nella relativa dichiarazione.  Una volta dichiarata **statica**, la variabile conserva il valore da una voce del blocco alla seguente.  
  
 Sebbene un identificatore con una durata globale esista durante l'esecuzione del programma di origine \(ad esempio, una variabile dichiarata esternamente o una variabile locale dichiarata con la parola chiave **statica**\), potrebbe non essere visibile in tutte le parti del programma.  Vedere [Ambito e visibilità](../c-language/scope-and-visibility.md) per informazioni sulla visibilità e vedere [Classi di archiviazione](../c-language/c-storage-classes.md) per una discussione su *storage\-class\-specifier* non terminale.  
  
 La memoria può essere allocata in base alle esigenze \(dinamica\) se creata tramite l'utilizzo delle routine di libreria speciali come `malloc`.  Poiché l'allocazione di memoria dinamica utilizza routine di libreria, non viene considerata parte del linguaggio.  Vedere la funzione [malloc](../c-runtime-library/reference/malloc.md) in *Riferimenti alla libreria di runtime*.  
  
## Vedere anche  
 [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md)