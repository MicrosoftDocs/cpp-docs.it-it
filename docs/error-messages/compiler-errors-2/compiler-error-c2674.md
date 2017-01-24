---
title: "Errore del compilatore C2674 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2674"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2674"
ms.assetid: 7cbd70d8-d992-44d7-a5cb-dd8cf9c759d2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2674
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dichiarazione generica non consentita in questo contesto  
  
 Un elemento generico è stato dichiarato in modo non corretto.  Per ulteriori informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2674:  
  
```  
// C2674.cpp  
// compile with: /clr /c  
void F(generic <class T> ref class R1);   // C2674  
generic <class T> ref class R2 {};   // OK  
```