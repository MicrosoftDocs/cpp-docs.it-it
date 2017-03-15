---
title: "Errore del compilatore C3454 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3454"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3454"
ms.assetid: dc4e6d57-5b4d-4114-8d6f-22f9ae62925b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3454
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\[attribute\] non consentito in una dichiarazione di classe  
  
 Per poter essere un attributo è necessario che una classe sia definita.  
  
 Per altre informazioni, vedere [attribute](../../windows/attribute.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3454.  
  
```  
// C3454.cpp // compile with: /clr /c using namespace System; [attribute]   // C3454 ref class Attr1; [attribute]   // OK ref class Attr2 {};  
```