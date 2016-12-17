---
title: "operator&lt; (&lt;sample container&gt;) | Microsoft Docs"
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
  - "std::operator<"
  - "operator<"
  - "std.<"
  - "<"
  - "std.operator<"
  - "std::<"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "< (operatore)"
  - "< (operatore), confronto tra oggetti specifici"
  - "operatore <, valarray"
  - "operator<, valarray"
ms.assetid: 31027dd6-53be-428b-b950-1dcb25393597
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator&lt; (&lt;sample container&gt;)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo argomento è nella documentazione di Visual C\+\+ come esempio non funzionale di contenitori utilizzati nella libreria C\+\+ standard.  Per ulteriori informazioni, vedere [I contenitori STL](../standard-library/stl-containers.md).  
  
 Esegue l'overload di **operatore\<** per confrontare due oggetti della classe modello [Contenitore](../standard-library/sample-container-class.md).  
  
## Sintassi  
  
```  
  
   template<class Ty>  
bool operator<(  
   const Container <Ty>& _Left,  
   const Container <Ty>& _Right  
);  
```  
  
## Valore restituito  
 Restituisce `lexicographical_compare`\(\_*Left*.  [begin](../standard-library/container-class-begin.md), \_*Left*.  [end](../standard-library/container-class-end.md), \_*Right***.begin**, \_*Right*.**end**\).  
  
## Vedere anche  
 [\<sample container\>](../standard-library/sample-container.md)