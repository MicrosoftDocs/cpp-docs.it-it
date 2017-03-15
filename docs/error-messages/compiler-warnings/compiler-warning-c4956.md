---
title: "Avviso del compilatore C4956 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4956"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4956"
ms.assetid: 9154f2d1-d49f-4e07-90d2-0e9bc028011a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore C4956
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': tipo non verificabile  
  
 Questo avviso viene generato quando viene specificato [\/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) e il codice contiene un tipo che non è verificabile.  
  
 Per altre informazioni, vedere [Codice pure e verificabile](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [\/wd](../../build/reference/compiler-option-warning-level.md).  
  
 L'esempio seguente genera l'errore C4956:  
  
```  
// C4956.cpp // compile with: /clr:safe int* p;   // C4956  
```