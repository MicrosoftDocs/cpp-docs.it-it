---
title: "Avviso del compilatore (livello 3) C4646 | Microsoft Docs"
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
  - "C4646"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4646"
ms.assetid: 23677e8e-603e-40e0-b99a-2e4894a1278e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4646
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la funzione dichiarata con \_\_declspec\(noreturn\) deve restituire un tipo non void  
  
 Una funzione contrassegnata con il modificatore [noreturn](../../cpp/noreturn.md) `__declspec` deve avere un tipo restituito [void](../../cpp/void-cpp.md).  
  
 L'esempio seguente genera l'errore C4646:  
  
```  
// C4646.cpp // compile with: /W3 /WX int __declspec(noreturn) TestFunction() {   // C4646  make return type void }  
```