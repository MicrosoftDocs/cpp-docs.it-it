---
title: "Avviso del compilatore (livello 4) C4057 | Microsoft Docs"
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
  - "C4057"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4057"
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4057
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': 'identifier1' differisce da 'identifier2' nel riferimento indiretto a tipi di base leggermente diversi  
  
 Due espressioni puntatore fanno riferimento a tipi di base diversi. Le espressioni vengono usate senza conversione.  
  
### Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Combinazione di tipi con segno e senza segno.  
  
2.  Combinazione di tipi **short** e **long**.