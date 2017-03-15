---
title: "Avviso del compilatore (livello 4) C4131 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4131"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4131"
ms.assetid: 7903b3e1-454f-4be2-aa9b-230992f96a2d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4131
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': utilizza un dichiaratore obsoleto  
  
 La dichiarazione di funzione specificata non è nella forma prototipo.  
  
 Le dichiarazioni di funzione obsolete devono essere convertite nella forma prototipo.  
  
 L'esempio seguente illustra una dichiarazione di funzione obsoleta:  
  
```  
// C4131.c // compile with: /W4 /c void addrec( name, id ) // C4131 expected char *name; int id; { }  
```  
  
 L'esempio seguente illustra un formato prototipo:  
  
```  
void addrec( char *name, int id ) { }  
```