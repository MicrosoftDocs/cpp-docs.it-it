---
title: "Errore del compilatore C3268 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3268"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3268"
ms.assetid: d74a630c-daea-4e29-9759-83efef7fb184
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore del compilatore C3268
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': una funzione generica o una funzione membro di una classe generica non può avere un elenco di parametri variabili  
  
 Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3268.  
  
```  
// C3268.cpp // compile with: /clr:pure /c generic <class ItemType> void Test(ItemType item, ...) {}   // C3268 // try the following line instead // void Test(ItemType item) {} generic <class ItemType2> ref struct MyStruct { void Test(...){} };   // C3268 // try the following line instead // ref struct MyStruct { void Test2(){} };   // OK  
```