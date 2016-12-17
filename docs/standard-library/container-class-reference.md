---
title: "Container Class::reference | Microsoft Docs"
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
  - "reference (metodo)"
ms.assetid: ab85a9fb-c628-4761-9a5f-a0231fad7690
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Container Class::reference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo argomento è nella documentazione di Visual C\+\+ come esempio non funzionale di contenitori utilizzati nella libreria C\+\+ standard.  Per ulteriori informazioni, vedere [I contenitori STL](../standard-library/stl-containers.md).  
  
 Viene descritto un oggetto che può essere utilizzata come riferimento a un elemento della sequenza selezionata.  
  
## Sintassi  
  
```  
  
typedef T2 reference;  
  
```  
  
## Note  
 Viene descritto qui come sinonimo del tipo specificato non **T2** \(in genere **Alloc::reference**\).  Un oggetto di tipo **riferimento** è possibile eseguire il cast su un oggetto di tipo [const\_reference](../standard-library/container-class-const-reference.md).  
  
## Vedere anche  
 [Classe contenitore di esempio](../standard-library/sample-container-class.md)