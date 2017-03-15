---
title: "Personalizzazione dell&#39;elaborazione dalla riga di comando C | Microsoft Docs"
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
  - "_exec (funzione)"
  - "_setargv (funzione)"
  - "_spawn (funzioni)"
  - "riga di comando, elaborazione"
  - "riga di comando, elaborazione argomenti"
  - "elaborazione dalla riga di comando"
  - "ambiente, routine elaborazione ambiente"
  - "avvio (codice), personalizzazione elaborazione dalla riga di comando"
  - "soppressione elaborazione ambiente"
ms.assetid: c20fa11d-b35b-4f3e-93b6-2cd5a1c3c993
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Personalizzazione dell&#39;elaborazione dalla riga di comando C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando.  Questa routine viene chiamata **\_setargv** \(o **\_wsetargv** nell'ambiente a caratteri estesi\), come descritto in [Espansione degli argomenti jolly](../c-language/expanding-wildcard-arguments.md).  Per eliminarne l'utilizzo, definire una routine che non esegue alcuna operazione nel file che contiene la funzione **main** e denominarla **\_setargv** \(o **\_wsetargv** nell'ambiente a caratteri estesi\).  La chiamata a **\_setargv** o a **\_wsetargv** viene soddisfatta dalla definizione **\_setargv** o **\_wsetargv** e la versione di libreria non viene caricata.  
  
 Analogamente, se non si accede mai alla tabella dell'ambiente tramite l'argomento `envp`, è possibile fornire una propria routine vuota da utilizzare invece di **\_setenvp** \(o **\_wsetenvp**\), la routine di ambiente\-elaborazione.  
  
 Se il programma effettua chiamate alla famiglia di routine **\_exec** o **\_spawn** nella libreria di runtime del linguaggio C, non si deve eliminare la routine di ambiente\-elaborazione, poiché questa procedura viene utilizzata per passare un ambiente dal processo di generazione al nuovo processo.  
  
## Vedere anche  
 [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)