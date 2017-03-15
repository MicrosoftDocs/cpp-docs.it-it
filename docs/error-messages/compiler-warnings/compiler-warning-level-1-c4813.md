---
title: "Avviso del compilatore (livello 1) C4813 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4813"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4813"
ms.assetid: c30bf877-ab04-4fe4-897e-8162092426f0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4813
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': le funzioni Friend delle classi locali devono essere dichiarate in precedenza  
  
 Una funzione friend in una classe interna non è stata dichiarata nella classe esterna.  
  
 L'esempio seguente genera l'errore C4813:  
  
```  
// C4813.cpp // compile with: /W1 /LD void MyClass() { // void func(); class InnerClass { friend void func();   // C4813 uncomment declaration above }; }  
```