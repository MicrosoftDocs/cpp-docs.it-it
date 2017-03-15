---
title: "Errore del compilatore C3211 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3211"
ms.assetid: 85e33fed-3b59-4315-97e6-20d31c6a985a
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3211
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'explicit specialization': la specializzazione esplicita utilizza una sintassi di specializzazione parziale. Utilizzare invece il modello \<\>  
  
 Una specializzazione esplicita non è stata creata nel formato corretto.  
  
 L'esempio seguente genera l'errore C3211:  
  
```  
// C3211.cpp // compile with: /LD template<class T> struct s; template<class T> // use the following line instead // template<> struct s<int>{};   // C3211  
```