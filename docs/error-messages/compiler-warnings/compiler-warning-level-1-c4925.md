---
title: "Avviso del compilatore (livello 1) C4925 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4925"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4925"
ms.assetid: a4b206c0-016a-4f28-873a-bb8bb41bad50
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4925
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'method': impossibile chiamare il metodo dell'interfaccia dispatch tramite script  
  
 I linguaggi di script non possono creare un parametro 'in' VT\_BYREF, possono creare solo parametri 'out' VT\_BYREF.  
  
 Per risolvere il problema è anche possibile non rendere il parametro \(nella definizione e nell'implementazione\) un tipo di puntatore.  
  
 L'esempio seguente genera l'avviso C4925:  
  
```  
// C4925.cpp // compile with: /LD /W1 #define _ATL_ATTRIBUTES 1 #include <atlbase.h> #include <atlcom.h> [ module(name="Test")]; [ dispinterface, uuid("00000000-0000-0000-0000-000000000001") ] __interface IDisp { [id(9)] void f([in] int*); }; [ coclass, uuid("00000000-0000-0000-0000-000000000002")  ] struct CDisp : IDisp {   // C4925 void f(int*) {} };  
```