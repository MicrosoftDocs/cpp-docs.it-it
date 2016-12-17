---
title: "Errore del compilatore C3320 | Microsoft Docs"
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
  - "C3320"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3320"
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3320
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': il nome del tipo non può essere uguale alla proprietà 'name' del modulo  
  
 Un tipo definito dall'utente \(UDT\) esportato, che può essere uno struct, una classe, un enum, un'unione o [\_\_value](../../misc/value.md), non può avere lo stesso nome del parametro passato alla proprietà Name dell'attributo [module](../../windows/module-cpp.md).  
  
 L'esempio seguente genera l'errore C3320:  
  
```  
// C3320.cpp #include "unknwn.h" [module(name="xx")]; [export] struct xx {   // C3320 // Try the following line instead // [export] struct yy { int i; };  
```