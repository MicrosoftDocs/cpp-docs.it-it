---
title: "Errore degli strumenti del linker LNK2038 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2038"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2038"
ms.assetid: b8d0fb35-eee6-4f52-b3c4-239cb4f65656
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore degli strumenti del linker LNK2038
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

mismatch rilevato per '\<nome\>': valore '\<valore 1\>' non corrisponde al valore '\<valore 2\>' in \<filename.obj\>  
  
 Una mancata corrispondenza del simbolo è stata rilevata dal linker.  Questo errore indica che le parti diverse di un'applicazione\-questo include librerie o altro codice oggetto che l'applicazione collega\-usano diverse definizioni del simbolo.  Il pragma [rilevamento della mancata corrispondenza](../../preprocessor/detect-mismatch.md) viene utilizzato per definire tali simboli e per rilevare i valori in conflitto.  
  
### Per correggere l'errore  
  
-   Questo errore può verificarsi quando un file oggetto nel progetto è scaduto.  Prima di provare altre soluzioni a questo errore, eseguire una compilazione pulita per garantire che i file oggetto siano correnti.  
  
-   Visual Studio definisce i simboli seguenti per impedire l'accesso del codice incompatibile, che può generare errori di runtime o altri comportamenti imprevisti.  
  
     `_MSC_VER`  
     Indica i numeri delle versioni minore e maggiore del compilatore di Visual C\+\+ utilizzato per compilare un'applicazione o una libreria.  Il codice compilato con una versione del compilatore di Visual C\+\+ non è compatibile con il codice compilato utilizzando una versione con diversi numeri di versione maggiore e minore.  Per ulteriori informazioni, vedere `_MSC_VER` in [Macro predefinite](../../preprocessor/predefined-macros.md).  
  
     Se ci si sta collegando a una libreria che non è compatibile con la versione del compilatore di Visual C\+\+ in uso e non è possibile ottenere o creare una versione compatibile della libreria, è possibile utilizzare una versione precedente del compilatore per compilare il progetto\-basta cambiare la proprietà **Set di strumenti della piattaforma** del progetto.  Per ulteriori informazioni, vedere [Procedura: modificare il framework di destinazione e il set di strumenti della piattaforma](../../build/how-to-modify-the-target-framework-and-platform-toolset.md).  
  
     `_ITERATOR_DEBUG_LEVEL`  
     Indica il livello di sicurezza e le funzionalità di debug abilitati nella libreria standard di C\+\+.  Queste funzionalità possono modificare la rappresentazione di alcuni oggetti della libreria standard di C\+\+ e quindi renderle incompatibili con quelli che utilizzano funzionalità di sicurezza e debug diverse.  Per ulteriori informazioni, vedere [\_ITERATOR\_DEBUG\_LEVEL](../../standard-library/iterator-debug-level.md).  
  
     `RuntimeLibrary`  
     Indica la versione della libreria standard di C\+\+ e il runtime C utilizzate da un'applicazione o da una libreria.  Il codice che utilizza una versione della libreria standard di C\+\+ o runtime C è incompatibili con il codice che utilizza una versione diversa.  Per ulteriori informazioni, vedere [\/MD, \/MT, \/LD \(Utilizza la libreria di runtime\)](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
     `_PPLTASKS_WITH_WINRT`  
     Indica che il codice che utilizza [Parallel Patterns Library \(PPL\)](../../parallel/concrt/parallel-patterns-library-ppl.md) è collegato agli oggetti compilati utilizzando un'impostazione diversa per l'opzione del compilatore [\/ZW](../../build/reference/zw-windows-runtime-compilation.md). \(**\/ZW** supporta C\+\+\/CX.\) Il codice che utilizza o dipende dalla libreria PPL deve essere compilato utilizzando le stesse impostazioni **\/ZW** utilizzate nel resto dell'applicazione.  
  
     Assicurarsi che i valori di questi simboli siano coerenti in tutti i progetti nella soluzione di Visual Studio e anche coerenti con il codice e le librerie a cui l'applicazione fa riferimento.  
  
## Vedere anche  
 [Errori e avvisi degli strumenti del linker](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)