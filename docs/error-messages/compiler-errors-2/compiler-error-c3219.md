---
title: "Errore del compilatore C3219 | Microsoft Docs"
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
  - "C3219"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3219"
ms.assetid: 9c9757b0-1256-4cdf-9d8c-a3a72f300ce5
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3219
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'param': un parametro generico non può essere vincolato da non interfacce multiple: 'class'  
  
 Vincolare un parametro generico per due o più classi gestite non è consentito.  
  
 L'esempio seguente genera l'errore C3219:  
  
```  
// C3219.cpp // compile with: /clr ref class A {}; ref class B {}; generic <class T> where T : A, B ref class E {};   // C3219  
```  
  
 L'esempio seguente illustra una possibile soluzione:  
  
```  
// C3219b.cpp // compile with: /clr /c ref class A {}; interface struct C {}; generic <class T> where T : A ref class E {};  
```