---
title: "Errore del compilatore C2930 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2930"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2930"
ms.assetid: f07eecd1-e5d1-4518-bd89-b1fd2a003a17
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2930
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': id\-classe\-tipo ridefinito come enumeratore di 'enum identifier'  
  
 Non è possibile usare una classe modello o generica come membro di un'enumerazione.  
  
 Questo errore può verificarsi quando le parentesi graffe non corrispondono.  
  
 L'esempio seguente genera l'errore C2930:  
  
```  
// C2930.cpp // compile with: /c template<class T> class x{}; enum SomeEnum { x };   // C2930 class y{}; enum SomeEnum { y };  
```  
  
 L'errore C2930 può verificarsi anche quando si usano i generics:  
  
```  
// C2930c.cpp // compile with: /clr /c generic<class T> ref struct GC {}; enum SomeEnum { GC };   // C2930 ref struct GC2 {}; enum SomeEnum2 { GC2 };  
```