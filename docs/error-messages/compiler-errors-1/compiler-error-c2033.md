---
title: "Errore del compilatore C2033 | Microsoft Docs"
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
  - "C2033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2033"
ms.assetid: fd5a1637-9db2-4c98-a7cc-b63b39737cd9
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2033
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': il campo di bit non può avere riferimenti indiretti  
  
 Il campo di bit è stato dichiarato come puntatore, ma non è consentito.  
  
 L'esempio seguente genera l'errore C2033:  
  
```  
// C2033.cpp struct S { int *b : 1;  // C2033 };  
```  
  
 Possibile soluzione:  
  
```  
// C2033b.cpp // compile with: /c struct S { int b : 1; };  
```