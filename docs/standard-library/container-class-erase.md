---
title: "Container Class::erase | Microsoft Docs"
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
  - "erase (metodo)"
ms.assetid: abc091c5-5a80-4bd8-93a8-a2d9bde2efec
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Container Class::erase
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo argomento è nella documentazione di Visual C\+\+ come esempio non funzionale di contenitori utilizzati nella libreria C\+\+ standard.  Per ulteriori informazioni, vedere [I contenitori STL](../standard-library/stl-containers.md).  
  
 Cancella un elemento.  
  
## Sintassi  
  
```  
  
      iterator erase(  
   iterator _Where   
);  
iterator erase(  
   iterator _First,  
   iterator _Last   
);  
```  
  
## Note  
 La prima funzione membro rimuovi elemento della sequenza selezionata indicata da \_*Where***.** La seconda funzione membro rimuove gli elementi della sequenza selezionata nell'intervallo \[`_First`, `_Last`\).  Entrambe restituiscono un iteratore che definisce il primo elemento che rimane oltre tutti gli elementi eliminati, o [fine](../standard-library/container-class-end.md) se tale elemento non esiste.  
  
 Le funzioni membro generano un'eccezione solo se un'operazione di copia genera un'eccezione.  
  
## Vedere anche  
 [Classe contenitore di esempio](../standard-library/sample-container-class.md)