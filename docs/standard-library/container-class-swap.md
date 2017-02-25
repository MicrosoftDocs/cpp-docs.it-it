---
title: "Container Class::swap | Microsoft Docs"
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
  - "swap (metodo)"
ms.assetid: 898c219c-bc8e-4d14-a149-6240426c693f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Container Class::swap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo argomento è nella documentazione di Visual C\+\+ come esempio non funzionale di contenitori utilizzati nella libreria C\+\+ standard.  Per ulteriori informazioni, vedere [I contenitori STL](../standard-library/stl-containers.md).  
  
 Scambia le sequenze controllate tra **\*this** e `_Right`.  
  
## Sintassi  
  
```  
  
      void swap(  
   Container& _Right  
);  
```  
  
## Note  
 Se **get\_allocator \=\=** `_Right`**.get\_allocator**, agisce nel tempo costante.  In caso contrario, viene eseguita una serie di assegnazioni dell'elemento e il costruttore chiama proporzionale al numero di elementi delle due sequenze archiviate.  
  
## Vedere anche  
 [Classe contenitore di esempio](../standard-library/sample-container-class.md)