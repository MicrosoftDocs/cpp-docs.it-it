---
title: "Avviso del compilatore (livello 1) C4627 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4627"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4627"
ms.assetid: 8840f3e6-b496-423a-8635-eb55d5f854a2
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# Avviso del compilatore (livello 1) C4627
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'\<identificatore\>': ignorato durante la ricerca dell'utilizzo di un'intestazione precompilata  
  
 Durante la ricerca del percorso in cui viene usata un'intestazione precompilata, il compilatore ha rilevato una direttiva `#include` per il file di inclusione *\<identificatore\>*. Il compilatore ignora la direttiva `#include`, ma genera l'avviso **C4627** se l'intestazione precompilata non contiene già il file di inclusione di *\<identificatore\>*.  
  
## Vedere anche  
 [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)