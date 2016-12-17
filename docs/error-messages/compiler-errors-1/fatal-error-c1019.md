---
title: "Errore irreversibile C1019 | Microsoft Docs"
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
  - "C1019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1019"
ms.assetid: c4f8968b-bc62-4200-b3ca-69d06c163236
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1019
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#else imprevisto  
  
 La direttiva `#else` viene visualizzata all'esterno di un costrutto `#if`, `#ifdef` o `#ifndef`. Usare `#else` solo all'interno di uno di questi costrutti.  
  
 L'esempio seguente genera l'errore C1019:  
  
```  
// C1019.cpp #else   // C1019 #endif int main() {}  
```  
  
 Possibile soluzione:  
  
```  
// C1019b.cpp #if 1 #else #endif int main() {}  
```