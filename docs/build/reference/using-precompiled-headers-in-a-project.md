---
title: "Utilizzo di intestazioni precompilate in un progetto | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "intestazioni precompilate"
ms.assetid: 95010260-a035-4327-9d61-222016ac146c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di intestazioni precompilate in un progetto
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nelle sezioni precedenti è stata esposta una panoramica delle intestazioni precompilate: \/Yc e \/Yu, l'opzione \/Fp e il pragma [hdrstop](../../preprocessor/hdrstop.md).  In questa sezione viene descritto un metodo per l'utilizzo delle opzioni di precompilazione manuale delle intestazioni in un progetto. La sezione si conclude con un makefile di esempio e con il codice gestito da questo.  
  
 Per un altro metodo di utilizzo delle opzioni di precompilazione manuale delle intestazioni in un progetto, fare riferimento a uno dei makefile presenti nella directory MFC\\SRC creata durante l'installazione predefinita di Visual C\+\+.  L'approccio di questi makefile è simile a quello del makefile presentato in questa sezione, con la differenza che sfruttano maggiormente le macro dell'utilità NMAKE \(Microsoft Program Maintenance Utility\) e offrono un maggior controllo del processo di compilazione.  
  
 In questa sezione sono disponibili gli argomenti seguenti:  
  
-   [File PCH nel processo di compilazione](../../build/reference/pch-files-in-the-build-process.md)  
  
-   [Makefile di esempio per PCH](../../build/reference/sample-makefile-for-pch.md)  
  
-   [Codice di esempio per PCH](../../build/reference/example-code-for-pch.md)  
  
## Vedere anche  
 [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)