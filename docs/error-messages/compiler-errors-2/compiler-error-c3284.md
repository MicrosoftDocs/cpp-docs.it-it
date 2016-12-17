---
title: "Errore del compilatore C3284 | Microsoft Docs"
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
  - "C3824"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3284"
ms.assetid: e582f316-e9db-4d27-9c70-fdfa737a9d5f
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3284
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

i vincoli per il parametro generico 'parameter' della funzione 'function' devono corrispondere ai vincoli per il parametro generico 'parameter' della funzione 'function'  
  
 Una funzione generica virtuale deve usare gli stessi vincoli di una funzione virtuale con lo stesso nome e lo stesso set di argomenti nella classe base.  
  
 L'esempio seguente genera l'errore C3284:  
  
```  
// C3284.cpp // compile with: /clr /c // C3284 expected public interface class IGettable { int Get(); }; public interface class B { generic<typename T> where T : IGettable virtual int mf(T t); }; public ref class D : public B { public: generic<typename T> // Uncomment the following line to resolve. // where T : IGettable virtual int mf(T t) { return 4; } };  
```