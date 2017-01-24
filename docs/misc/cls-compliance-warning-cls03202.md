---
title: "Avviso di conformit&#224; a CLS CLS03202 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS03202"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03202"
ms.assetid: 2219c86c-9276-4244-a2ff-bce578c4d65f
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS03202
I metodi di aggiunta e rimozione per un evento devono entrambi accettare un parametro il cui tipo definisce il tipo dell'evento, che deve essere derivato da System.Delegate  
  
 I metodi di aggiunta e rimozione per un evento devono entrambi accettare un parametro il cui tipo definisce il tipo dell'evento, che deve essere derivato da System.Delegate.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione di funzione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS03202:  
  
```  
// bad .method public specialname instance void add_MyEvent(class MyDelegate __unnamed000, int32 __extra) cil managed {}  
```  
  
 È possibile risolvere il problema se la funzione di accesso eventi accetta solo un parametro:  
  
```  
.method public specialname instance void add_MyEvent(class MyDelegate __unnamed000) cil managed {}  
```