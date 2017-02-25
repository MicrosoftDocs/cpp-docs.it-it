---
title: "Errore degli strumenti del linker LNK1106 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1106"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1106"
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore degli strumenti del linker LNK1106
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file non valido o disco pieno: impossibile spostarsi in percorso  
  
 Non è stato possibile eseguire operazioni di lettura o scrittura in un file mappato in memoria nel `location`.  
  
### Possibili cause  
  
1.  Disco pieno.  
  
     Liberare spazio e ripetere il collegamento.  
  
2.  Tentativo di effettuare il collegamento su una rete.  
  
     Alcune reti non supportano completamente i file mappati in memoria utilizzati dal linker.  Effettuare il collegamento sul disco locale.  
  
3.  Blocco difettoso sul disco.  
  
     Questo errore dovrebbe essere rilevato dal sistema operativo e dall'hardware del disco, ma può essere utile eseguire un programma di verifica del disco.  
  
4.  Spazio dell'heap insufficiente.  
  
     Per ulteriori informazioni, vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md).