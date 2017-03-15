---
title: "Errore degli strumenti del linker LNK2027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2027"
ms.assetid: e2f857a8-8e8a-4697-bbff-12ccb84a35c1
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore degli strumenti del linker LNK2027
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

riferimento a modulo 'modulo' non risolto  
  
 Un file passato al linker presenta una dipendenza da un modulo che non è stato né specificato con **\/ASSEMBLYMODULE** né passato direttamente al linker.  
  
 Per correggere l'errore LNK2027, effettuare una delle seguenti operazioni:  
  
-   Non passare al linker il file che presenta la dipendenza dal modulo.  
  
-   Specificare il modulo con **\/ASSEMBLYMODULE**.  
  
-   Se il modulo è un .netmodule sicuro, passare il modulo direttamente al linker.  
  
 Per ulteriori informazioni, vedere [\/ASSEMBLYMODULE \(Aggiunge un modulo MSIL all'assembly\)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) e [.File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).