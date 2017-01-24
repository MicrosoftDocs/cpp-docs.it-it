---
title: "Avviso del compilatore (livello 1) C4812 | Microsoft Docs"
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
  - "C4812"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4812"
ms.assetid: a7f5721f-2019-44de-ad62-ed30bac8b1f3
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4812
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

tipo di dichiarazione obsoleto: usare 'new\_syntax'  
  
 Nella versione corrente di Visual C\+\+, la specializzazione esplicita del costruttore è ancora supportata, ma potrebbe non essere più supportata in una versione futura.  
  
 L'esempio seguente genera l'errore C4812:  
  
```  
// C4812.cpp // compile with: /W1 /c template <class T> class MyClass; template<class T> class MyClass<T*> { MyClass(); }; template<class T> MyClass<T*>::MyClass<T*>() {}   // C4812 // try the following line instead // MyClass<T*>::MyClass() {}  
```