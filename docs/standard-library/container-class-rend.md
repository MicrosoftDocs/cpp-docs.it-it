---
title: "Container Class::rend | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rend (metodo)"
ms.assetid: 80f3dd04-dd2c-4b52-b0ed-d567ec5d186c
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Container Class::rend
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo argomento è nella documentazione di Visual C\+\+ come esempio non funzionale di contenitori utilizzati nella libreria C\+\+ standard.  Per ulteriori informazioni, vedere [I contenitori STL](../standard-library/stl-containers.md).  
  
 La funzione membro restituirà un iteratore inverso che punta al primo elemento della sequenza \(o semplicemente oltre la fine di una sequenza vuota\), definendo la fine della sequenza inversa.  
  
## Sintassi  
  
```  
  
      const_reverse_iterator rend( ) const;   
reverse_iterator rend( );  
```  
  
## Vedere anche  
 [Classe contenitore di esempio](../standard-library/sample-container-class.md)