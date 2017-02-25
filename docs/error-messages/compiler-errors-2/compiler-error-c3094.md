---
title: "Errore del compilatore C3094 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3094"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3094"
ms.assetid: 10da9b7c-e72d-4013-9925-c83e1bb142db
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3094
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'attribute': uso anonimo non consentito  
  
 Un ambito dell'attributo non è stato specificato correttamente.  Per altre informazioni, vedere [User\-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3094.  
  
```  
// C3094.cpp // compile with: /clr /c using namespace System; [AttributeUsage(AttributeTargets::Class)] public ref class AAttribute : Attribute {}; [A];   // C3094 // OK [A] ref class x{};  
```