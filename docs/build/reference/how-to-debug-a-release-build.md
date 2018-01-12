---
title: 'Procedura: eseguire il Debug di una Build di rilascio | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- debugging [C++], release builds
- release builds, debugging
ms.assetid: d333e4d1-4e6c-4384-84a9-cb549702da25
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 31113d9a5935536ac10b22c7b5f5af27b0d29970
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-debug-a-release-build"></a>Procedura: eseguire il debug di una build di rilascio
È possibile eseguire il debug di una build di rilascio di un'applicazione.  
  
### <a name="to-debug-a-release-build"></a>Eseguire il debug di una build di rilascio  
  
1.  Aprire il **pagine delle proprietà** la finestra di dialogo per il progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **C/C++** nodo. Impostare **formato informazioni di Debug** a [compatibile C7 (/ Z7)](../../build/reference/z7-zi-zi-debug-information-format.md) o **il Database di programma (/Zi)**.  
  
3.  Espandere **Linker** e fare clic su di **generale** nodo. Impostare **Abilita collegamento incrementale** a [No (/ /INCREMENTAL: NO)](../../build/reference/incremental-link-incrementally.md).  
  
4.  Selezionare il **debug** nodo. Impostare **genera informazioni di Debug** a [Sì (/debug)](../../build/reference/debug-generate-debug-info.md).  
  
5.  Selezionare il **ottimizzazione** nodo. Impostare **riferimenti** a [/OPT: ref](../../build/reference/opt-optimizations.md) e **Abilita riduzione COMDAT** a [/OPT: ICF](../../build/reference/opt-optimizations.md).  
  
6.  È ora possibile eseguire il debug della compilazione di rilascio dell'applicazione. Per individuare un problema, esaminare il codice (o il debug Just-In-Time di utilizzo) finché non si trova in cui si verifica l'errore, quindi determinare il codice o i parametri non corretti.  
  
     Se un'applicazione funziona in una build di debug, ma non in una build di rilascio, una delle ottimizzazioni del compilatore esponendo un difetto del codice sorgente. Per isolare il problema, disabilitare le ottimizzazioni selezionate per ogni file di codice sorgente fino a individuare il file e dell'ottimizzazione che causa il problema. (Per velocizzare il processo, è possibile dividere i file in due gruppi, disabilitare l'ottimizzazione in un gruppo e quando si individua un problema in un gruppo, continuare divisione fino a isolare il file del problema.)  
  
     È possibile utilizzare [/RTC](../../build/reference/rtc-run-time-error-checks.md) per tentare di esporre tali bug nelle build di debug.  
  
     Per ulteriori informazioni, vedere [ottimizzazione del codice](../../build/reference/optimizing-your-code.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)