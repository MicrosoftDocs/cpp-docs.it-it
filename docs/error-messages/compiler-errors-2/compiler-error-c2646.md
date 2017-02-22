---
title: "Errore del compilatore C2646 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2646"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2646"
ms.assetid: 92ff1f02-5eaf-40a5-8b7a-a682f149e967
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2646
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nell'ambito globale o dello spazio dei nomi una struct o unione anonima deve essere dichiarata come statica  
  
 Una struct o unione anonima dispone dell'ambito globale o dello spazio dei nomi, ma non è dichiarata come `static`.  
  
 L'esempio seguente genera l'errore C2646 e mostra come risolverlo:  
  
```  
// C2646.cpp  
// compile with: /c  
union { int i; };   // C2646 not static  
  
// OK  
static union { int j; };  
union U { int i; };  
```