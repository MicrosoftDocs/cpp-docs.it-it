---
title: "Errore del compilatore C3286 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3286"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3286"
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3286
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'specifier': una variabile di iterazione non può avere identificatori di classe di archiviazione  
  
 Vedere [\(NOTINBUILD\)Identificatori della classe di archiviazione](http://msdn.microsoft.com/it-it/10b3d22d-cb40-450b-994b-08cf9a211b6c) per altre informazioni.  
  
 Per altre informazioni, vedere [for each, in](../../dotnet/for-each-in.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3286.  
  
```  
// C3286.cpp // compile with: /clr int main() { array<int> ^p = { 1, 2, 3 }; for each (static int i in p) {}   // C3286 for each (int j in p) {}   // OK }  
```