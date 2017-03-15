---
title: "Errore del compilatore C3236 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3236"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3236"
ms.assetid: 4ef1871f-a348-44ae-922b-1e2081de20d0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3236
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

creazione di istanza esplicita di un elemento CLR generico non consentita  
  
 Il compilatore non consente la creazione di un'istanza esplicita per le classi generiche.  
  
 L'esempio seguente genera l'errore C3236:  
  
```  
// C3236.cpp // compile with: /clr generic<class T> public ref class X {}; generic ref class X<int>;   // C3236  
```  
  
 L'esempio seguente illustra una possibile soluzione:  
  
```  
// C3236b.cpp // compile with: /clr /c generic<class T> public ref class X {};  
```