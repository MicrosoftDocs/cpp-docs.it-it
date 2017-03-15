---
title: "Avviso del compilatore (livello 4) C4343 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4343"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4343"
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 4) C4343
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#pragma optimize\("g",off\) esegue l'override dell'opzione \/Og  
  
 Questo avviso, valido solo nel compilatore IPF \(Itanium Processor Family\), segnala che un pragma [optimize](../../preprocessor/optimize.md) ha eseguito l'override dell'opzione del compilatore [\/Og](../../build/reference/og-global-optimizations.md).  
  
 L'esempio seguente genera l'errore C4343:  
  
```  
// C4343.cpp // compile with: /Og /W4 /LD // processor: IPF #pragma optimize ("g", off)   // C4343  
```