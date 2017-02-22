---
title: "Errore del compilatore C2071 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2071"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2071"
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2071
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': classe di archiviazione non valida  
  
 `identifier` è stato dichiarato con una [classe di archiviazione](../../c-language/c-storage-classes.md) non valida.  Questo errore può essere causato quando viene specificata più di una classe di archiviazione per un identificatore o quando la definizione non è compatibile con la dichiarazione di classe di archiviazione.  
  
 Per risolvere questo problema, comprendere quale classe di archiviazione è prevista dell'identificatore, ad esempio `static` o  `extern`, quindi correggere la dichiarazione corrispondente.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2071.  
  
```  
// C2071.cpp  
// compile with: /c  
struct C {  
   extern int i;   // C2071  
};  
struct D {  
   int i;   // OK, no extern on an automatic  
};  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2071.  
  
```  
// C2071_b.cpp  
// compile with: /c  
typedef int x(int i) { return i; }   // C2071  
typedef int (x)(int);   // OK, no local definition in typedef  
```