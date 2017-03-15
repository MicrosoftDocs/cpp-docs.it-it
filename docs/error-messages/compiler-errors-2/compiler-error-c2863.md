---
title: "Errore del compilatore C2863 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2863"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2863"
ms.assetid: 32561d67-a795-486b-b3b6-4b90a1acb176
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2863
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interfaccia': un'interfaccia non può avere elementi friend  
  
 Non è consentito dichiarare elementi friend su un'interfaccia.  
  
 Il seguente codice di esempio genera l'errore C2863:  
  
```  
// C2863.cpp  
// compile with: /c  
#include <unknwn.h>  
  
class CMyClass {  
   void *f();  
};   
  
__interface IMyInterface {  
   void g();  
  
   friend int h();   // 2863  
   friend interface IMyInterface1;  // C2863  
   friend void *CMyClass::f();  // C2863  
};  
```