---
title: "Errore del compilatore C2936 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2936"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2936"
ms.assetid: 5d1ba0fc-0c78-4a37-a83b-1ef8527763be
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2936
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': type\-class\-id ridefinito coma variabile dati globale  
  
 Non è possibile usare una classe generica o modello come variabile dati globale.  
  
 Questo errore può verificarsi quando le parentesi graffe non corrispondono.  
  
 L'esempio seguente genera l'errore C2936:  
  
```  
// C2936.cpp // compile with: /c template<class T> struct TC { }; int TC<int>;   // C2936 // OK struct TC2 { }; int TC2;  
```  
  
 C2936 può verificarsi anche quando si usano i generics:  
  
```  
// C2936b.cpp // compile with: /clr /c generic<class T> ref struct GC {}; int GC<int>;   // C2936 // OK ref struct GC2 {}; int GC2;  
```