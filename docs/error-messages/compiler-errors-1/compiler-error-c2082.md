---
title: "Errore del compilatore C2082 | Microsoft Docs"
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
  - "C2082"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2082"
ms.assetid: 87a6d442-157c-46e8-9bff-8388f8338ae0
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2082
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

ridefinizione del parametro formale 'identifier'  
  
 Un parametro formale in una funzione è dichiarato di nuovo all'interno del corpo della funzione. Per risolvere l'errore, rimuovere la ridefinizione.  
  
 L'esempio seguente genera l'errore C2082:  
  
```  
// C2082.cpp void func(int i) { int i;   // C2082 int ii;   // OK }  
```