---
title: "File exp come input del linker | Microsoft Docs"
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
  - ".file exp [C++]"
  - "EXP (file)"
  - "esportazione di dati, file di esportazione (EXP)"
  - "esportazione di funzioni"
  - "esportazione di funzioni, informazioni"
  - "funzioni [C++], esportazione"
  - "librerie di importazione, file del linker"
  - "collegamento [C++], esportazioni"
ms.assetid: 399f5636-0a4d-462e-b500-5f5b9ae5ad22
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File exp come input del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I file di esportazione \(EXP\) contengono informazioni sulle funzioni esportate e sugli elementi di dati.  Quando in LIB viene creata una libreria di importazione, viene creato anche un file EXP,  che viene utilizzato quando si esegue il collegamento a un programma in cui vengono eseguite esportazioni e importazioni da un altro programma, direttamente o indirettamente.  Se si esegue il collegamento a un file EXP, in LINK non verrà prodotta una libreria di importazione, in quanto presumibilmente ne sarà già stata creata una in LIB.  Per informazioni dettagliate sui file EXP e sulle librerie di importazione, vedere [Operazioni con librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md).  
  
## Vedere anche  
 [File di input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)