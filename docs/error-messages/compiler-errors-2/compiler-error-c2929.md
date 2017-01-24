---
title: "Errore del compilatore C2929 | Microsoft Docs"
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
  - "C2929"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2929"
ms.assetid: 11134027-6adc-4733-b6bd-b94486bd1933
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2929
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': creazione esplicita di un'istanza. Impossibile forzare e inibire in modo esplicito la creazione di un'istanza di un membro di classe modello  
  
 Non è possibile creare un'istanza esplicita di un identificatore ed evitare che ne venga creata un'istanza.  
  
 L'esempio seguente genera l'errore C2929:  
  
```  
// C2929.cpp // compile with: /c template<typename T> class A { public: A() {} }; template A<int>::A(); extern template A<int>::A();   // C2929  
```