---
title: "Avviso del compilatore C4430 | Microsoft Docs"
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
  - "C4430"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4430"
ms.assetid: 12efbfff-aa58-4a86-a7d6-2c6a12d01dd3
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4430
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

identificatore di tipo mancante, verrà utilizzato int.Nota: default\-int non è più supportato in C\+\+  
  
 Questo errore può essere generato come risultato delle operazioni di conformità eseguite per Visual C\+\+ 2005: in tutte le dichiarazioni deve essere specificato esplicitamente il tipo, perché non viene più utilizzato int.  
  
 L'avviso C4430 viene sempre generato come errore.  È possibile disattivarlo utilizzando `#pragma warning` o **\/wd**. Per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../../build/reference/compiler-option-warning-level.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4430:  
  
```  
// C4430.cpp  
// compile with: /c  
struct CMyClass {  
   CUndeclared m_myClass;  // C4430  
   int m_myClass;  // OK  
};  
  
typedef struct {  
   POINT();   // C4430  
   // try the following line instead  
   // int POINT();  
   unsigned x;  
   unsigned y;  
} POINT;  
```