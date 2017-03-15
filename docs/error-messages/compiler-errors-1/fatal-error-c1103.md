---
title: "Errore irreversibile C1103 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1103"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1103"
ms.assetid: 9d276939-9c47-4235-9d20-76b8434f9731
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile C1103
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore irreversibile durante l'importazione del progid: 'message'  
  
 Il compilatore ha rilevato un problema durante l'importazione di una libreria dei tipi.  Non è possibile, ad esempio, specificare una libreria dei tipi con progid e specificare anche `no_registry`.  
  
 Per altre informazioni, vedere [Direttiva \#import](../../preprocessor/hash-import-directive-cpp.md).  
  
 L'esempio seguente genera l'errore C1103:  
  
```  
// C1103.cpp #import "progid:a.b.id.1.5" no_registry auto_search   // C1103  
```