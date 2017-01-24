---
title: "operator&lt;= (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<="
  - "std.operator<="
  - "operator<="
  - "std.<="
  - "std::operator<="
  - "<="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<= (operatore)"
  - "<= (operatore), oggetti specifici"
  - "operatore <="
  - "operator<="
ms.assetid: 338577dd-dc88-4a2b-9e12-0379c54fc8a2
caps.latest.revision: 9
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator&lt;= (&lt;sample container&gt;)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo argomento è nella documentazione di Visual C\+\+ come esempio non funzionale di contenitori utilizzati nella libreria C\+\+ standard.  Per ulteriori informazioni, vedere [I contenitori STL](../standard-library/stl-containers.md).  
  
 Esegue l'overload di **operator\<\=** per confrontare due oggetti della classe modello [Contenitore](../standard-library/sample-container-class.md).  
  
## Sintassi  
  
```  
  
   template<class Ty>  
bool operator<=(  
   const Container <Ty>& _Left,  
   const Container <Ty>& _Right  
);  
```  
  
## Valore restituito  
 Restituisce **\!**\(\_*Right*\< \_*Left*\).  
  
## Vedere anche  
 [\<sample container\>](../standard-library/sample-container.md)