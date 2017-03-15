---
title: "Avviso del compilatore (livello 4) C4634 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4634"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4634"
ms.assetid: 3e3496ce-2ac7-43d0-a48a-f514c950e81d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Avviso del compilatore (livello 4) C4634
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

commento al documento XML: impossibile applicare: motivo  
  
 Non è possibile applicare i tag della documentazione XML a tutti i costrutti C\+\+.  Ad esempio, non è possibile aggiungere un commento relativo alla documentazione a uno spazio dei nomi o a un modello.  
  
 Per altre informazioni, vedere [Documentazione di XML](../../ide/xml-documentation-visual-cpp.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C4634.  
  
```  
// C4634.cpp // compile with: /W4 /doc /c /// This is a namespace.   // C4634 namespace hello { class MyClass  {}; };  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C4634.  
  
```  
// C4634_b.cpp // compile with: /W4 /doc /c /// This is a template.   // C4634 template <class T> class MyClass  {};  
```