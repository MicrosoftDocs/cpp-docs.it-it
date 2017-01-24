---
title: "Errore del compilatore C2909 | Microsoft Docs"
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
  - "C2909"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2909"
ms.assetid: 1c9df8ae-925d-4002-a5f8-a71413c45f9e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2909
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': la creazione esplicita di un'istanza di un modello di funzione richiede un tipo restituito  
  
 La creazione esplicita di un'istanza di un modello di funzione richiede la specifica esplicita del tipo restituito. La specifica implicita del tipo restituito non funziona.  
  
 L'esempio seguente genera l'errore C2909:  
  
```  
// C2909.cpp // compile with: /c template<class T> int f(T); template f<int>(int);         // C2909 template int f<int>(int);   // OK  
```