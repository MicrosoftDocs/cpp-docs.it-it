---
title: "Avviso del compilatore (livello 1) C4325 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4325"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4325"
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4325
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**attributi per la sezione standard '**   
 ***sezione* ' ignorati**  
  
 Non è possibile modificare gli attributi di una sezione standard,  Di seguito è riportato un esempio.  
  
```  
#pragma section(".sdata", long)  
```  
  
 In base al codice specificato, la sezione standard `.sdata` che utilizza il tipo di dati **short** viene sovrascritta con il tipo di dati **long**.  
  
 Le sezioni standard di cui non è possibile modificare gli attributi includono:  
  
-   .data  
  
-   .sdata  
  
-   .bss  
  
-   .sbss  
  
-   .text  
  
-   .const  
  
-   .sconst  
  
-   .rdata  
  
-   .srdata  
  
 È possibile che vengano aggiunte altre sezioni in futuro.  
  
## Vedere anche  
 [section](../../preprocessor/section.md)