---
title: "Errore del compilatore C3457 | Microsoft Docs"
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
  - "C3457"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3457"
ms.assetid: 5c1e366a-fa75-4cca-b9a3-86d4ebe4090e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3457
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'attribute': l'attributo non supporta argomenti non denominati  
  
 A differenza dell'attributo personalizzato CLR o gli attributi del compilatore, gli attributi di annotazione di origine supportano solo gli argomenti denominati.  
  
## Esempio  
 L'esempio seguente genera l'errore C3457.  
  
```  
#include "SourceAnnotations.h" [vc_attributes::Post( 1 )] int f();   // C3457 [vc_attributes::Post( Valid=vc_attributes::Yes )] int f2();   // OK  
```