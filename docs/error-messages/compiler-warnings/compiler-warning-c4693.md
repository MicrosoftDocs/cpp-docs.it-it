---
title: "Avviso del compilatore C4693 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4693"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4693"
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore C4693
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': una classe astratta sealed non può avere membri di istanza 'Test'  
  
 Se un tipo è contrassegnato con [sealed](../../windows/sealed-cpp-component-extensions.md) e [abstract](../../windows/abstract-cpp-component-extensions.md) può avere solo membri statici.  
  
## Esempio  
 L'esempio seguente genera l'errore C4693.  
  
```  
// C4693.cpp // compile with: /clr /c public ref class Public_Ref_Class sealed abstract { public: void Test() {}   // C4693 static void Test2() {}   // OK };  
```