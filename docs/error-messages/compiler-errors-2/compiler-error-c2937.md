---
title: "Errore del compilatore C2937 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2937"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2937"
ms.assetid: 95671ca3-79f7-4b56-a5f2-a92296da1629
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2937
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': type\-class\-id ridefinito come typedef globale  
  
 Non è possibile usare una classe generica o modello come `typedef` globale.  
  
 L'esempio seguente genera l'errore C2937:  
  
```  
// C2937.cpp // compile with: /c template<class T> struct TC { }; typedef int TC<int>;   // C2937 typedef TC<int> c;   // OK  
```  
  
 C2937 può verificarsi anche quando si usano i generics:  
  
```  
// C2937b.cpp // compile with: /clr generic<class T> ref struct GC { }; typedef int GC<int>;   // C2937 typedef GC<int> xx;   // OK  
```