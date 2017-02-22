---
title: "PogoSafeMode | Microsoft Docs"
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
  - "PogoSafeMode"
ms.assetid: 2daeeff7-44cb-417f-90eb-6b9edf658533
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# PogoSafeMode
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specificare se utilizzare la modalità veloce o la modalità sicura per la profilatura di applicazioni.  
  
## Sintassi  
  
```  
PogoSafeMode  
```  
  
## Note  
 L'ottimizzazione PGO \(Profile\-Guided Optimization\) dispone di due possibili modalità durante la fase di analisi: modalità veloce e modalità sicura.  Quando si esegue la profilatura in modalità veloce, utilizza l'istruzione **INC** per aumentare i contatori dei dati.  L'istruzione **INC** è più veloce ma non è thread\-safe.  Quando si esegue la profilazione in modalità sicura, utilizza l'istruzione **LOCK INC** per aumentare i contatori dei dati.  L'istruzione **LOCK INC** ha la stessa funzionalità dell'istruzione **INC** ed è thread\-safe, ma risulta più lenta dell'istruzione **INC**.  
  
 Per impostazione predefinita, la profilazione PGO viene eseguita in modalità veloce.  `PogoSafeMode` è necessario solo se si desidera utilizzare la modalità sicura.  
  
 Per eseguire la profilazione PGO in modalità sicura, è necessario utilizzare la variabile di ambiente `PogoSafeMode` o opzione del linker **\-PogoSafeMode**, a seconda del sistema.  Se si sta eseguendo la profilatura di un computer x64, è necessario utilizzare l'opzione del linker.  Se si sta eseguendo la profilatura di un computer x86, è impostare definire la variabile di ambiente su un valore qualsiasi prima di avviare il processo di ottimizzazione.  
  
## Esempio  
  
```  
set PogoSafeMode=1  
```  
  
## Vedere anche  
 [Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)   
 [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md)