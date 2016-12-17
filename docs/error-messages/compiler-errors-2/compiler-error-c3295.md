---
title: "Errore del compilatore C3295 | Microsoft Docs"
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
  - "C3295"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3295"
ms.assetid: 83f0aa4d-0e0a-4905-9f66-fcf9991fc07a
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3295
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'\#pragma pragma' può essere usato solo nell'ambito globale o dello spazio dei nomi  
  
 Alcuni pragma non possono essere usati in una funzione.  Per altre informazioni, vedere [Direttive pragma e parola chiave \_\_Pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3295.  
  
```  
// C3295.cpp int main() { #pragma managed   // C3295 }  
```