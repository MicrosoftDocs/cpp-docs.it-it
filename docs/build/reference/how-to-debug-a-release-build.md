---
title: "Procedura: eseguire il debug di una build di rilascio | Microsoft Docs"
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
  - "debug [C++], build di rilascio"
  - "build di rilascio, debug"
ms.assetid: d333e4d1-4e6c-4384-84a9-cb549702da25
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Procedura: eseguire il debug di una build di rilascio
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile eseguire il debug di una build di rilascio di un'applicazione.  
  
### Per eseguire il debug di una build di rilascio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sul nodo **C\/C\+\+**.  Impostare l'opzione **Formato informazioni di debug** su [Compatibile C7 \(\/Z7\)](../../build/reference/z7-zi-zi-debug-information-format.md) o su **Database di programma \(\/Zi\)**.  
  
3.  Espandere il nodo **Linker** e fare clic sul nodo **Generale**.  Impostare **Abilita collegamento incrementale** su [No \(\/INCREMENTAL:NO\)](../../build/reference/incremental-link-incrementally.md).  
  
4.  Selezionare il nodo **Debug**.  Impostare **Genera informazioni di debug** su [Sì \(\/DEBUG\)](../../build/reference/debug-generate-debug-info.md).  
  
5.  Selezionare il nodo **Ottimizzazione**.  Impostare **Riferimenti** su [\/OPT:REF](../../build/reference/opt-optimizations.md) e **Abilita riduzione COMDAT** su [\/OPT:ICF](../../build/reference/opt-optimizations.md).  
  
6.  Sarà quindi possibile eseguire il debug della build di rilascio dell'applicazione.  Per individuare un problema, eseguire il codice un'istruzione alla volta \(oppure avvalersi del debug JIT\) finché non si individua il punto in cui si verifica l'errore, quindi determinare con precisione il codice o i parametri errati.  
  
     Se un'applicazione viene eseguita correttamente in una build di debug ma non in una di rilascio, è probabile che una delle ottimizzazioni del compilatore riveli un difetto nel codice sorgente.  Per isolare il problema, è opportuno disabilitare le ottimizzazioni selezionate per ciascun file del codice sorgente fino all'individuazione del file e dell'ottimizzazione che causano il problema. Per velocizzare il processo, è possibile dividere i file in due gruppi, disabilitare l'ottimizzazione in un gruppo e, quando si individua un problema in un gruppo, continuare a dividere i file fino a isolare il problema in un unico file.  
  
     È possibile utilizzare [\/RTC](../../build/reference/rtc-run-time-error-checks.md) per provare ad esporre bug di questo tipo nelle build di debug.  
  
     Per ulteriori informazioni, vedere [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md).  
  
## Vedere anche  
 [Correzione dei problemi della build di rilascio](../../build/reference/fixing-release-build-problems.md)