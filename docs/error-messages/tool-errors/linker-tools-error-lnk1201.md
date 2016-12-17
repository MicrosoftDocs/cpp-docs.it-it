---
title: "Errore degli strumenti del linker LNK1201 | Microsoft Docs"
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
  - "LNK1201"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1201"
ms.assetid: 64c3f496-a428-4b54-981e-faa82ef9c8a1
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1201
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di scrittura nel database di programma 'nomefile'; verificare che lo spazio su disco sia sufficiente, il percorso sia valido o il privilegio sia sufficiente  
  
 Non è stato possibile scrivere nel database di programma \(PDB\) con LINK per il file di output.  
  
### Possibili cause  
  
1.  Il file è danneggiato.  Eliminare il file PDB e ripetere il collegamento.  
  
2.  Lo spazio su disco non è sufficiente per scrivere il file.  
  
3.  L'unità non è disponibile, probabilmente a causa di un problema di rete.  
  
4.  Il debugger è attivo sul programma a cui si tenta di effettuare il collegamento.  
  
5.  Spazio dell'heap insufficiente.  Per ulteriori informazioni, vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md).