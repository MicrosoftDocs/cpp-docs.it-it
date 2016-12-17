---
title: "Avviso del compilatore (livello 2) C4396 | Microsoft Docs"
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
  - "C4396"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4396"
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4396
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"name": impossibile utilizzare l'identificatore inline quando una dichiarazione Friend fa riferimento alla specializzazione di un modello di funzione  
  
 Una specializzazione di un modello di funzione non può specificare uno degli identificatori [inline](../../misc/inline-inline-forceinline.md). Il compilatore genera l'avviso C4396 e ignora l'identificatore inline.  
  
### Per correggere l'errore  
  
-   Rimuovere l'identificatore `inline`, `__inline` o `__forceinline` dalla dichiarazione di funzione Friend.  
  
## Esempio  
 Il codice di esempio seguente mostra una dichiarazione di funzione Friend non valida con un identificatore `inline`.  
  
```  
// C4396.cpp // compile with: /W2 /c class X; template<class T> void Func(T t, int i); class X { friend inline void Func<char>(char t, int i);  //C4396 // try the following line instead //    friend void Func<char>(char t, int i); int i; };  
```