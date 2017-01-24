---
title: "Errore del compilatore C3065 | Microsoft Docs"
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
  - "C3065"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3065"
ms.assetid: e7a0bc69-1c68-459e-a7c4-93c65609ff7c
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3065
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la dichiarazione di proprietà in ambito non di classe non è consentita  
  
 Il modificatore \_\_declspec della [proprietà](../../cpp/property-cpp.md) è stato usato al di fuori di una classe.  Una proprietà può essere dichiarata solo all'interno di una classe.  
  
 L'esempio seguente genera l'errore C3065:  
  
```  
// C3065.cpp // compile with: /c __declspec(property(get=get_i)) int i;   // C3065 class x { public: __declspec(property(get=get_i)) int i;   // OK };  
```