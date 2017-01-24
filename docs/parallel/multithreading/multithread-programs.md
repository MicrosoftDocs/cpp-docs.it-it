---
title: "Programmi multithread | Microsoft Docs"
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
  - "multithreading [C++], informazioni sui thread"
  - "threading [C++], informazioni sul threading"
ms.assetid: 02443596-f7e1-48d0-b3a4-39ee0e54e444
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Programmi multithread
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un thread è fondamentalmente un percorso di esecuzione all'interno di un programma  e rappresenta l'unità di esecuzione minima prevista in Win32.  Un thread è composto da uno stack, dallo stato dei registri della CPU e da una voce dell'elenco di esecuzione dell'utilità di pianificazione di sistema.  Ogni thread condivide tutte le risorse del processo.  
  
 Un processo è costituito da uno o più thread, dal codice, dai dati e dalle altre risorse di un programma in memoria.  File aperti, semafori e memoria assegnata in modo dinamico sono tipiche risorse di programma.  L'esecuzione di un programma avviene quando il controllo dell'esecuzione viene assegnato a uno dei thread dell'utilità di pianificazione di sistema.  L'utilità di pianificazione determina quali thread devono essere eseguiti e quando.  È possibile che i thread con priorità più bassa debbano attendere che quelli con priorità più alta completino le proprie attività.  Su computer multiprocessore, l'utilità di pianificazione è in grado di spostare i vari thread su processori diversi, in modo da bilanciare il carico della CPU.  
  
 Ogni thread di un processo opera in modo indipendente.  A meno che non li si renda reciprocamente visibili, i thread vengono eseguiti singolarmente, in modo indipendente rispetto agli altri thread del processo.  È necessario tuttavia coordinare l'esecuzione dei thread che condividono risorse comuni tramite semafori o altri metodi di comunicazione tra i processi.  Per ulteriori informazioni sulla sincronizzazione dei thread, vedere [Scrittura di un programma multithread Win32](../../parallel/writing-a-multithreaded-win32-program.md).  
  
## Vedere anche  
 [Multithreading con C e Win32](../../parallel/multithreading-with-c-and-win32.md)