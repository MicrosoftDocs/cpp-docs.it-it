---
title: "Errore dell‘analizzatore di espressioni CXX0064 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0064"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0064"
  - "CXX0064"
ms.assetid: aa509e71-0616-41ca-a94e-6c376b041e57
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0064
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile impostare il punto di interruzione su una funzione membro virtuale associata  
  
 Un punto di interruzione è stato impostato su una funzione membro virtuale mediante un puntatore a un oggetto, come nell'esempio seguente:  
  
```  
pClass->vfunc( int );  
```  
  
 È possibile impostare un punto di interruzione su una funzione virtuale immettendo la classe, come nell'esempio seguente:  
  
```  
Class::vfunc( int );  
```  
  
 Questo errore è identico all'errore CAN0064.