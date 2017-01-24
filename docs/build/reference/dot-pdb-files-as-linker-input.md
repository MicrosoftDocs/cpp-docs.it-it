---
title: "File PDB come input del linker | Microsoft Docs"
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
helpviewer_keywords: 
  - "pdb (file), come input del linker"
  - "PDB (file), come input del linker"
ms.assetid: c1071478-2369-4b03-9df8-71761cf82f3b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File PDB come input del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I file oggetto \(obj\) compilati utilizzando l'opzione \/Zi contengono il nome di un database di programma \(PDB\).  Non è necessario specificare il nome file PDB dell'oggetto, poiché, se si rende necessario cercare il file PDB, in LINK viene utilizzato il nome incorporato.  Lo stesso concetto è valido per gli oggetti di cui è possibile eseguire il debug contenuti in una libreria. Il file PDB per una libreria di cui è possibile eseguire il debug deve essere disponibile al linker insieme alla libreria.  
  
 In LINK viene utilizzato un file PDB anche per memorizzare le informazioni di debug per il file exe o dll.  Il file PDB del programma è un file sia di output che di input in quanto viene automaticamente aggiornato quando viene nuovamente generato il programma.  
  
## Vedere anche  
 [File di input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)