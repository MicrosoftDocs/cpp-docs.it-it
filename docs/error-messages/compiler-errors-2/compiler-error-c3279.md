---
title: "Errore del compilatore C3279 | Microsoft Docs"
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
  - "C3279"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3279"
ms.assetid: 639afc20-984c-4a95-be35-8bf9409f02d5
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3279
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le specializzazioni parziali ed esplicite e le creazioni di istanze esplicite di modelli di classe dichiarati nello spazio dei nomi cli non sono consentite  
  
 Lo spazio dei nomi `cli` è definito da Microsoft e contiene pseudo\-modelli. Il compilatore Visual C\+\+ non consente specializzazioni parziali ed esplicite definite dall'utente e le creazioni di istanze esplicite di modelli di classe in questo spazio dei nomi.  
  
 L'esempio seguente genera l'errore C3279:  
  
```  
// C3279.cpp // compile with: /clr namespace cli { template <> ref class array<int> {};   // C3279 template <typename T> ref class array<T, 2> {};   // C3279 }  
```