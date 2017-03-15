---
title: "Avviso del compilatore (livello 1) C4650 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4650"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4650"
ms.assetid: 3190b3e3-dcd6-4846-939b-f900ab652b2a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4650
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

informazioni di debug non presenti nell'intestazione precompilata. Saranno disponibili solo i simboli globali presenti nell'intestazione  
  
 Il file di intestazione precompilato non è stato compilato con le informazioni di debug sui simboli Microsoft.  
  
 Al momento del collegamento, il file DLL o eseguibile risultante non includerà le informazioni di debug per i simboli locali contenuti nell'intestazione precompilata.  
  
 Per evitare la visualizzazione dell'avviso, ricompilare il file di intestazione precompilato con l'opzione della riga di comando [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).