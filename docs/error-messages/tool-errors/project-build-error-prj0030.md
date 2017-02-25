---
title: "Errore di compilazione progetto PRJ0030 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0030"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0030"
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore di compilazione progetto PRJ0030
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore di espansione di una macro.La valutazione della ricorsione supera i 32 livelli per $\(macro\).  
  
 Questo errore viene generato dalla ricorsione nelle macro.  Se, ad esempio, si imposta la proprietà **Directory intermedia** \(vedere [Pagina delle proprietà Generale \(Progetto\)](../../ide/general-property-page-project.md)\) su $\(IntDir\), si otterrà una ricorsione.  
  
 Per risolvere questo errore è necessario evitare di definire, nei termini delle macro, macro e proprietà utilizzate per definirle.