---
title: "Errore del compilatore C2181 | Microsoft Docs"
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
  - "C2181"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2181"
ms.assetid: d52b2fe4-566a-40a9-b8e2-8dce1f287668
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2181
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

else non valido senza if corrispondente  
  
 Ogni `else` deve avere un oggetto `if` corrispondente.  
  
 L'esempio seguente genera l'errore C2181:  
  
```  
// C2181.cpp int main() { int i = 0; else   // C2181 i = 1; }  
```  
  
 Possibile soluzione:  
  
```  
// C2181b.cpp int main() { int i = 0; if(i) i = 0; else i = 1; }  
```