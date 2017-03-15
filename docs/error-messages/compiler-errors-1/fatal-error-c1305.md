---
title: "Errore irreversibile C1305 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1305"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1305"
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore irreversibile C1305
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il database profilo 'pgd\_file' è per un'architettura differente  
  
 Un file pgd generato dall'operazione \/LTCG:PGINSTRUMENT per un'altra piattaforma è stato passato a [\/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md).  Le [ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md) sono disponibili per piattaforme x86 e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].  Tuttavia, un file pgd generato con un'operazione \/LTCG:PGINSTRUMENT per una determinata piattaforma non è valido come input per l'operazione \/LTCG:PGOPTIMIZE per un'altra piattaforma.  
  
 Per correggere questo errore, passare a \/LTCG:PGOPTIMIZE solo file pgd creati con \/LTCG:PGINSTRUMENT nella stessa piattaforma.