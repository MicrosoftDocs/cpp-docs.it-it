---
title: "Costanti di commit su disco | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.constants"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "costanti di commit su disco"
ms.assetid: 0b903b23-b4fa-431e-a937-51d95f695ecf
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costanti di commit su disco
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
## Sintassi  
  
```  
  
#include <stdio.h>  
```  
  
## Note  
 Queste costanti specifiche Microsoft specificano se il buffer associato al file aperto viene scaricato sui buffer del sistema operativo o su disco.  La modalità è inclusa nella stringa che specifica il tipo di accesso in lettura\/scrittura \(**"r"**, **"w"**, **"a"**, **"r\+"**, **"w\+"**, **"a\+"**\).  
  
 Le modalità di commit su disco sono le seguenti:  
  
 **c**  
 Scrive su disco i contenuti non scritti del buffer specificato.  Questa funzionalità di commit su disco si verifica solo per le chiamate esplicite a [fflush](../c-runtime-library/reference/fflush.md) o alla funzione [\_flushall](../c-runtime-library/reference/flushall.md).  Questa modalità è utile quando si gestiscono dati sensibili.  Ad esempio, se il programma termina dopo una chiamata a `fflush` o a `_flushall`, è possibile assicurarsi che i dati abbiano raggiunto i buffer del sistema operativo.  Tuttavia, a meno che un file non sia stato aperto con l'opzione **c**, i dati potrebbero non raggiungere mai il disco se termina anche il sistema operativo.  
  
 **n**  
 Scrive il contenuto non scritto del buffer specificato nei buffer del sistema operativo.  Il sistema operativo può memorizzare i dati e quindi determinare un momento opportuno per scriverli sul disco.  Sotto molte condizioni, questo comportamento rende efficiente il comportamento del programma.  Tuttavia, se la conservazione dei dati è critica \(ad esempio informazioni su transazioni bancarie o su biglietti di una compagnia aerea\) è opportuno utilizzare l'opzione **c**.  La modalità **n** è quella predefinita.  
  
> [!NOTE]
>  Le opzioni **c** e **n** non sono parte dello standard ANSI di `fopen`, ma sono estensioni Microsoft e non dovrebbero essere utilizzate nel caso sia richiesta la portabilità ANSI.  
  
## Utilizzo della funzionalità di commit su disco per il codice esistente  
 Per impostazione predefinita, le chiamate a [fflush](../c-runtime-library/reference/fflush.md) o alle funzioni di libreria [\_flushall](../c-runtime-library/reference/flushall.md) scrivono dati nei buffer gestiti dal sistema operativo.  Il sistema operativo determina il momento ottimale per scrivere effettivamente i dati su disco.  La funzionalità di commit su disco della libreria di runtime consente di assicurarsi che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo.  È possibile fornire questa funzionalità a un programma esistente senza riscriverlo collegando i relativi file oggetto con COMMODE.OBJ.  
  
 Nel file eseguibile risultante, le chiamate a `fflush` scrivono il contenuto del buffer direttamente su disco, e le chiamate a `_flushall` scrivono il contenuto di tutti i buffer su disco.  Queste due funzioni sono le uniche interessate da COMMODE.OBJ.  
  
 **FINE specifiche di Microsoft**  
  
## Vedere anche  
 [I\/O di flusso](../c-runtime-library/stream-i-o.md)   
 [\_fdopen, \_wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fopen, \_wfopen](../c-runtime-library/reference/fopen-wfopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)