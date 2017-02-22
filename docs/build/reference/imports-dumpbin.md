---
title: "/IMPORTS (DUMPBIN) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/imports"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/IMPORTS (opzione dumpbin)"
  - "IMPORTS (opzione dumpbin)"
  - "-IMPORTS (opzione di dumpbin)"
ms.assetid: 6a296216-2b1b-40f8-8736-cd4553a22456
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /IMPORTS (DUMPBIN)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/IMPORTS[:file]  
```  
  
 Questa opzione consente di visualizzare l'elenco delle DLL \(sia collegate staticamente che [a caricamento ritardato](../../build/reference/linker-support-for-delay-loaded-dlls.md)\) importate in un file eseguibile o in una DLL, nonché tutte le singole importazioni effettuate da ciascuna di queste DLL.  
  
 Mediante la specifica facoltativa `file` è possibile indicare che verranno visualizzate solo le importazioni relative al file DLL specificato.  Di seguito è riportato un esempio.  
  
```  
dumpbin /IMPORTS:msvcrt.dll  
```  
  
## Note  
 L'output restituito da questa opzione è simile a quello restituito dall'opzione [\/EXPORTS](../../build/reference/dash-exports.md).  
  
 L'unica opzione di DUMPBIN utilizzabile sui file generati con l'opzione del compilatore [\/GL](../../build/reference/gl-whole-program-optimization.md) è [\/HEADERS](../../build/reference/headers.md).  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)