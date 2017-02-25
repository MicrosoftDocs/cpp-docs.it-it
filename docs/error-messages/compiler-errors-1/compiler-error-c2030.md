---
title: "Errore del compilatore C2030 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2030"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2030"
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2030
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'  
  
 Una classe di Windows Runtime dichiarata `sealed` non può avere un distruttore privato protetto.  Nei tipi sealed sono consentiti solo distruttori pubblici virtuali e privati non virtuali.  Per altre informazioni, vedere [Classi e struct di riferimento](../Topic/Ref%20classes%20and%20structs%20\(C++-CX\).md).  
  
 Per correggere l'errore, modificare l'accessibilità del distruttore.