---
title: "Opzioni collegamento | Microsoft Docs"
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
  - "nothrownew.obj"
  - "newmode.obj"
  - "noenv.obj"
  - "psetargv.obj"
  - "loosefpmath.obj"
  - "smallheap.obj"
  - "fp10.obj"
  - "nochkclr.obj"
  - "chkstk.obj"
  - "pcommode.obj"
  - "pnoenv.obj"
  - "opzioni collegamento [C++]"
  - "invalidcontinue.obj"
  - "pnothrownew.obj"
  - "pwsetargv.obj"
  - "pinvalidcontinue.obj"
  - "wsetargv.obj"
  - "binmode.obj"
  - "setargv.obj"
  - "noarg.obj"
  - "pnewmode.obj"
  - "commode.obj"
  - "pthreadlocale.obj"
  - "pbinmode.obj"
  - "threadlocale.obj"
  - "pnoarg.obj"
ms.assetid: 05b5a77b-9dd1-494b-ae46-314598c770bb
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Opzioni collegamento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La directory lib CRT include un certo numero di file oggetto di piccole dimensioni che consentono specifiche caratteristiche CRT senza alcuna modifica del codice.  Vengono chiamate "opzioni di collegamento" poiché è necessario aggiungerle alla riga di comando del linker per utilizzarle.  
  
 Versioni in modalità Pure sono state aggiunte.  Utilizzare le versioni standard per nativo e il codice di \/clr, utilizza le versioni e \(caratterizzate da un s\) per \/clr: modalità pure.  
  
|Nativo e \/clr|Modalità pure|Descrizione|  
|--------------------|-------------------|-----------------|  
|binmode.obj|binmode.obj|Imposta la modalità predefinita per la conversione del file binario.  Vedere [\_fmode](../c-runtime-library/fmode.md).|  
|chkstk.obj|n\/d|Fornisce stack di controllo e di sostegno assegnazione quando non si utilizza il CRT.|  
|commode.obj|commode.obj|Imposta il flag globale per eseguire il "commit".  Vedere [fopen, \_wfopen](../c-runtime-library/reference/fopen-wfopen.md) e [fopen\_s, \_wfopen\_s](../c-runtime-library/reference/fopen-s-wfopen-s.md).|  
|fp10.obj|n\/d|Modifica il controllo predefinito di precisione a 64 bit.  Vedere [Supporto a virgola mobile](../c-runtime-library/floating-point-support.md).|  
|invalidcontinue.obj|invalidcontinue.obj|Imposta un gestore non valido predefinito di un parametro che non esegue alcuna operazione, pertanto parametri non validi passati alle funzioni CRT solo imposterà il errno e restituirà il risultato degli errori.|  
|loosefpmath.obj|n\/d|Assicurarsi che il codice a virgola mobile tolleri i valori non normali.|  
|newmode.obj|newmode.obj|Determina [malloc](../c-runtime-library/reference/malloc.md) a chiamare il nuovo gestore di errore.  Vedere le proprietà [\_set\_new\_mode](../c-runtime-library/reference/set-new-mode.md), [\_set\_new\_handler](../c-runtime-library/reference/set-new-handler.md), [calloc](../c-runtime-library/reference/calloc.md) e [realloc](../c-runtime-library/reference/realloc.md).|  
|noarg.obj|pnoarg.obj|Disabilita l'elaborazione di argc e argv.|  
|nochkclr.obj|n\/d|Non esegue alcuna operazione.  Rimuovere dal progetto.|  
|noenv.obj|pnoenv.obj|Disabilita la creazione di un ambiente memorizzato nella cache per CRT.|  
|nothrownew.obj|nothrownew.obj|Abilita la versione non generatori di nuovo in CRT.  Vedere [Operatori new e delete](../cpp/new-and-delete-operators.md).|  
|setargv.obj|setargv.obj|Consente l'espansione del carattere jolly dell'argomento della riga di comando.  Vedere [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).|  
|smalheap.obj|n\/d|Installa un piccolo gestore dell'heap molto semplice.|  
|threadlocale.obj|threadlocale.obj|Consente alle impostazioni locali di thread per tutti i nuovi thread per impostazione predefinita.|  
|setargv.obj|setargv.obj|Consente l'espansione del carattere jolly dell'argomento della riga di comando.  Vedere [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).|  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)