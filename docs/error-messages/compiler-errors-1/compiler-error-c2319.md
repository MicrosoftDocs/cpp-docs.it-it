---
title: "Errore del compilatore C2319 | Microsoft Docs"
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
  - "C2319"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2319"
ms.assetid: 25263e6e-f5ba-4d2c-8727-8c2d8ca2e5ce
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2319
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'try\/catch' deve essere seguito da un'istruzione composta. '{' mancante  
  
 Non è stato trovato un blocco `try` o `catch` dopo l'istruzione `try` o `catch`. Il blocco deve essere racchiuso tra parentesi graffe.  
  
 L'esempio seguente genera l'errore C2319:  
  
```  
// C2319.cpp // compile with: /EHsc #include <eh.h> class C {}; int main() { try { throw "ooops!"; } catch( C ) ;    // C2319 // try the following line instead // catch( C ) {} }  
```