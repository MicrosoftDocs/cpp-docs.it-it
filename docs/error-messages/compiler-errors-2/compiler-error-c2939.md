---
title: "Errore del compilatore C2939 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2939"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2939"
ms.assetid: 455b050b-f2dc-4b5b-bd6a-e1f81d3d1644
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2939
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': id\-classe\-tipo ridefinito come variabile dati locale  
  
 Non è possibile usare una classe generica o modello come variabile dati locale.  
  
 Questo errore può verificarsi quando le parentesi graffe non corrispondono.  
  
 L'esempio seguente genera l'errore C2939:  
  
```  
// C2939.cpp template<class T> struct TC { }; int main() { int TC<int>;   // C2939 int TC;   // OK }  
```  
  
 L'errore C2939 può verificarsi anche quando si usano i generics:  
  
```  
// C2939b.cpp // compile with: /clr generic<class T> ref struct GC { }; int main() { int GC<int>;   // C2939 int GC;   // OK }  
```