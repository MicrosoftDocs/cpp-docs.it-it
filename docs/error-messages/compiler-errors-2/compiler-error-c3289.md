---
title: "Errore del compilatore C3289 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3289"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3289"
ms.assetid: 3c1c623b-7fcf-43ab-a89a-8722532a8d29
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3289
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'property': impossibile indicizzare una proprietà semplice  
  
 Una proprietà è stata dichiarata in modo non corretto. Le funzioni di accesso devono essere definite per una proprietà indicizzata. Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3289.  
  
```  
// C3289.cpp // compile with: /clr public ref struct C { // user-defined simple indexer property int indexer1[int];   // C3289 // user-defined indexer property int indexer2[int] { int get(int i) { return 0; } void set(int i, int j) {} } }; int main() { C ^ MyC = gcnew C(); MyC->indexer2[0] = 1; }  
```