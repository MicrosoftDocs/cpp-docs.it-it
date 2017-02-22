---
title: "Errore del compilatore C3234 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3234"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3234"
ms.assetid: ebefc15a-e40d-424b-a3dd-d7e185d0ed7b
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C3234
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

una classe generica non può derivare da un parametro di tipo generico  
  
 Una classe generica non può derivare da un parametro di tipo generico.  
  
## Esempio  
 L'esempio seguente genera l'errore C3234.  
  
```  
// C3234.cpp // compile with: /clr /c generic <class T> public ref class C : T {};   // C3234 // try the following line instead // public ref class C {};  
```