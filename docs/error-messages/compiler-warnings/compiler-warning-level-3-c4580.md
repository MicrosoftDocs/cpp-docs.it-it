---
title: "Avviso del compilatore (livello 3) C4580 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4580"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4580"
ms.assetid: fef6e8e0-0d6a-44fa-b22a-2fe7ba2ef379
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 3) C4580
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\[attribute\] è deprecato; specificare System::Attribute o Platform::Metadata come classe base  
  
 [attribute](../../windows/attribute.md) non è più la sintassi preferita per la creazione di attributi definiti dall'utente.  Per altre informazioni, vedere [User\-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  Per il codice CLR, derivare gli attributi da [System::Attribute](assetId:///System::Attribute?qualifyHint=False&autoUpgrade=True).  Per il codice Windows Runtime, derivare gli attributi da `Platform::Metadata`.  
  
## Esempio  
 L'esempio seguente genera l'errore C3454 e mostra come risolverlo.  
  
```  
// C4580.cpp  
// compile with: /W3 /c /clr  
[attribute]   // C4580  
public ref class Attr {  
public:  
   int m_t;  
};  
  
public ref class Attr2 : System::Attribute {  
public:  
   int m_t;  
};  
```