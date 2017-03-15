---
title: "Commenti in un makefile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "makefile, commenti"
ms.assetid: 76fd9e3d-5966-47f4-a091-c9e80b232b49
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Commenti in un makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Anteporre un simbolo di cancelletto \(\#\) al commento.  Tutto il testo a partire dal cancelletto fino al successivo carattere di nuova riga verrà ignorato.  Esempi:  
  
```  
# Comment on line by itself  
OPTIONS = /MAP  # Comment on macro definition line  
  
all.exe : one.obj two.obj  # Comment on dependency line  
    link one.obj two.obj  
# Comment in commands block  
#   copy *.obj \objects  # Command turned into comment  
    copy one.exe \release  
  
.obj.exe:  # Comment on inference rule line  
    link $<  
  
my.exe : my.obj ; link my.obj  # Err: cannot comment this  
 # Error: # must be the first character  
.obj.exe: ; link $<  # Error: cannot comment this  
```  
  
 Per specificare un simbolo di cancelletto, anteporre un accento circonflesso \(**^**\) come nell'esempio seguente:  
  
```  
DEF = ^#define  #Macro for a C preprocessing directive  
```  
  
## Vedere anche  
 [Contenuto di un makefile](../build/contents-of-a-makefile.md)