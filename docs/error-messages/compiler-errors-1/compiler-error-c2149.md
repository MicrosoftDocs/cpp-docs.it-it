---
title: "Errore del compilatore C2149 | Microsoft Docs"
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
  - "C2149"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2149"
ms.assetid: 7a106dab-d79f-41b9-85be-f36e86e4d2ab
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2149
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': un campo di bit denominato non può avere larghezza zero  
  
 I campi di bit possono avere larghezza zero solo se non sono denominati.  
  
 L'esempio seguente genera l'errore C2149:  
  
```  
// C2149.cpp // compile with: /c struct C { int i : 0;   // C2149 int j : 2;   // OK };  
```