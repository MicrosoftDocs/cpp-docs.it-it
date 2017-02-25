---
title: "Errore del compilatore C3721 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3721"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3721"
ms.assetid: c696ca38-3e00-4875-abbe-7bce0f46930e
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C3721
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'firma': firma non compatibile per un evento  
  
 Un evento non è stato dichiarato correttamente.  Per ulteriori informazioni, vedere [\_\_event](../../cpp/event.md).  
  
 L'errore C3721 può essere generato solo utilizzando **\/clr:oldSyntax**.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3721:  
  
```  
// C3721.cpp  
// compile with: /clr:oldSyntax /c  
using namespace System;  
  
public __delegate void MyDel();  
  
public __gc class X {  
   __event void add_E1();      // C3721  
   // try the following line instead  
   // __event void add_E1(MyDel * p);  
  
   __event void remove_E1();   // C3721  
   // __event void remove_E1(MyDel * p);  
   // try the following line instead  
  
   __event void raise_E1();  
};  
```