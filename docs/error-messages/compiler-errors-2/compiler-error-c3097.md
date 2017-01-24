---
title: "Errore del compilatore C3097 | Microsoft Docs"
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
  - "C3097"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3097"
ms.assetid: b24bd8f8-e04f-4fbb-be57-4feb9165572e
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3097
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'attribute': l'attributo deve avere ambito 'assembly:' o 'module:'  
  
 Un attributo globale è stato usato in modo errato.  
  
 Per altre informazioni, vedere [User\-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3097.  
  
```  
// C3097.cpp // compile with: /clr /c using namespace System; [AttributeUsage(AttributeTargets::All, AllowMultiple = true)] public ref class Attr : public Attribute { public: Attr(int t) : m_t(t) {} int m_t; }; [Attr(10)];   // C3097 [assembly:Attr(10)];   // OK [Attr(10)]   // OK public ref class MyClass {};  
```