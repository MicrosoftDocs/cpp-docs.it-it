---
title: "Avviso del compilatore (livello 1) C4182 | Microsoft Docs"
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
  - "C4182"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4182"
ms.assetid: 8970f3c6-e2dd-407e-b2ec-964360eb8b43
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4182
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

profondità di annidamento di \#include: 'number'. Possibile ricorsione infinita  
  
 Il compilatore ha esaurito lo spazio nell'heap a causa del numero di file di inclusione annidati. Un file di inclusione è annidato quando viene incluso da un altro file di inclusione.  
  
 Questo messaggio è puramente informativo e precede l'errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).