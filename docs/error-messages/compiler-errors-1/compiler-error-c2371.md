---
title: "Errore del compilatore C2371 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2371"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2371"
ms.assetid: d383993d-05ef-4e35-8129-3b58a6f7b7b7
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2371
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': ridefinizione. Tipi di base differenti  
  
 L'identificatore è già dichiarato.  
  
 L'esempio seguente genera l'errore C2371:  
  
```  
// C2371.cpp int main() { int i; float i;   // C2371, redefinition float f;   // OK }  
```