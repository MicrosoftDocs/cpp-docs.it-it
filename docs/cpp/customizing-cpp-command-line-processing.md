---
title: "Personalizzazione dell&#39;elaborazione dalla riga di comando C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_setenvp"
  - "_setargv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_setargv (funzione)"
  - "_setenvp (funzione)"
  - "riga di comando, elaborazione"
  - "riga di comando, elaborazione argomenti"
  - "elaborazione dalla riga di comando"
  - "ambiente, routine elaborazione ambiente"
  - "avvio (codice), personalizzazione elaborazione dalla riga di comando"
  - "soppressione elaborazione ambiente"
ms.assetid: aae01cbb-892b-48b8-8e1f-34f22421f263
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Personalizzazione dell&#39;elaborazione dalla riga di comando C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando.  Questa routine viene chiamata **\_setargv** ed è descritta in [Espansione jolly](../cpp/wildcard-expansion.md).  Per eliminare l'utilizzo, definire una routine che non esegue alcuna operazione nel file che contiene la funzione **main** e denominarla **\_setargv**.  La chiamata a **\_setargv** viene soddisfatta dalla definizione di **\_setargv** e la versione di libreria non viene caricata.  
  
 Analogamente, se non si accede mai alla tabella dell'ambiente tramite l'argomento `envp`, è possibile fornire una propria routine vuota da utilizzare invece di **\_setenvp**, la routine di elaborazione dell'ambiente.  Come per la funzione **\_setargv**, **\_setenvp** deve essere dichiarata come **extern "C"**.  
  
 Il programma può effettuare chiamate alla famiglia di routine di **spawn** o `exec` presenti nella libreria di runtime di C.  In questo caso, non si deve eliminare la routine di elaborazione dell'ambiente, dato che questa routine viene utilizzata per passare un ambiente dal processo padre al processo figlio.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)