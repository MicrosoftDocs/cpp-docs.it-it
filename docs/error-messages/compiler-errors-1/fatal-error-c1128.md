---
title: "Errore irreversibile C1128 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1128"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1128"
ms.assetid: 6f9580fd-ecef-48be-9780-dcf666704279
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1128
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il numero di sezioni ha superato il limite di formato del file oggetto: compilare con \/bigobj  
  
 Un file obj ha superato il numero di sezioni consentite, un limite del formato di file oggetto COFF.  
  
 È possibile che il limite di sezioni sia stato raggiunto a causa dell'utilizzo di [\/Gy](../../build/reference/gy-enable-function-level-linking.md) e di una build di debug. L'opzione **\/Gy** fa sì che le funzioni passino nelle rispettive sezioni COMDAT.  In una build di debug è presente una sezione di informazioni di debug per ogni funzione COMDAT.  
  
 È anche possibile che l'errore C1128 venga generato quando sono presenti troppe funzioni inline.  
  
 Per correggere questo errore, suddividere il file di origine in più file di codice sorgente, compilare senza **\/Gy**, o compilare con [\/bigobj \(Aumenta il numero di sezioni nel file obj\)](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md).  Se non si esegue la compilazione con **\/Gy**, sarà necessario specificare le ottimizzazioni singolarmente, poiché sia **\/O2** che **\/O1** implicano **\/Gy**.  
  
 Se possibile, compilare senza informazioni di debug.  
  
 È inoltre possibile che istanze specifiche di modelli debbano trovarsi in file di codice sorgente separati anziché essere generate dal compilatore.  
  
 Nel porting del codice, è probabile che l'errore C1128 venga visualizzato prima se si utilizza il compilatore x64 e molto più tardi con il compilatore x86. x64 avrà almeno 4 sezioni associate con ciascun compilato di funzione **\/Gy** o inline da modelli o classi inline: codice, pdata e informazioni di debug e possibilmente xdata.  X86 non avrà pdata.