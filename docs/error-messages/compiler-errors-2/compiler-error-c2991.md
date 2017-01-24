---
title: "Errore del compilatore C2991 | Microsoft Docs"
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
  - "C2991"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2991"
ms.assetid: a87e4404-26e8-4927-b3ee-5d02b3b8bee1
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2991
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

ridefinizione del parametro di tipo 'parameter'  
  
 Si è verificato un conflitto di tipo tra due definizioni generiche o di modello di `parameter`. Quando si definiscono più parametri generici o di modello, è necessario usare tipi equivalenti.  
  
 L'esempio seguente genera l'errore C2991:  
  
```  
// C2991.cpp // compile with: /c template<class T, class T> struct TC {};   // C2991 // try the following line instead // template<class T, class T2> struct TC {};  
```  
  
 L'errore C2991 può verificarsi anche quando si usano i generics:  
  
```  
// C2991b.cpp // compile with: /clr /c generic<class T,class T> ref struct GC {};   // C2991 // try the following line instead // generic<class T,class T2> ref struct GC {};  
```