---
title: "Errore del compilatore C2923 | Microsoft Docs"
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
  - "C2923"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2923"
ms.assetid: 6b92933b-13ef-4124-99d9-b89f9fdae030
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2923
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': 'identifier' non è un argomento di tipo modello valido per il parametro 'param'  
  
 Nell'elenco di argomenti manca un tipo necessario per creare un'istanza di modello o generica. Controllare la dichiarazione di modello o generica.  
  
 L'esempio seguente genera l'errore C2923:  
  
```  
// C2923.cpp template <class T> struct TC {}; int x; int main() { TC<x>* tc2;   // C2923 TC<int>* tc2;   // OK }  
```  
  
 L'errore C2923 può verificarsi anche quando si usano i generics:  
  
```  
// C2923b.cpp // compile with: /clr /c generic <class T> ref struct GC {}; int x; int main() { GC<x>^ gc2;   // C2923 GC<int>^ gc2;   // OK }  
```