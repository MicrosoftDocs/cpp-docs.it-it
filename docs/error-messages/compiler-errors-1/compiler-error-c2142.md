---
title: "Errore del compilatore C2142 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2142"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2142"
ms.assetid: d0dbe10e-0952-49a4-8b33-e82fb7558b19
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2142
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dichiarazioni di funzione non corrispondenti. Parametri variabili specificati solo in una delle dichiarazioni  
  
 Una dichiarazione della funzione contiene un elenco di parametri variabili,  mentre l'altra no.  Solo ANSI C \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).  
  
 Il seguente codice di esempio genera l'errore C2142:  
  
```  
// C2142.c  
// compile with: /Za /c  
void func();  
void func( int, ... );   // C2142  
void func2( int, ... );   // OK  
```