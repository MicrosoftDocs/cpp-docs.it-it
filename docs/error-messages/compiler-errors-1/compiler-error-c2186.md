---
title: "Errore del compilatore C2186 | Microsoft Docs"
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
  - "C2186"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2186"
ms.assetid: 284bfb7e-ab85-4fcb-9864-1ddf7f6c94ae
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2186
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': operando di tipo 'void' non valido  
  
 L'operatore ha un operando `void`.  
  
 L'esempio seguente genera l'errore C2186:  
  
```  
// C2186.cpp  
// compile with: /c  
void func1( void );  
int  func2( void );  
int i = 2 + func1();   // C2186 func1() is type void  
int j = 2 + func2();   // OK both operands are type int  
```