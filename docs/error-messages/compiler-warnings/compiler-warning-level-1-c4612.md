---
title: "Avviso del compilatore (livello 1) C4612 | Microsoft Docs"
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
  - "C4612"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4612"
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4612
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore nel nome del file di inclusione  
  
 Questo avviso si verifica con **\#pragma include\_alias** quando manca un nome file o non è corretto.  
  
 Gli argomenti dell'istruzione **\#pragma include\_alias** possono usare il formato con virgolette \(**"***filename***"**\) o il formato con parentesi angolari \(**\<***filename***\>**\), ma è necessario che entrambi usino lo stesso formato.  
  
## Esempio  
  
```  
// C4612.cpp // compile with: /W1 /LD #pragma include_alias("StandardIO", <stdio.h>) // C4612  
```