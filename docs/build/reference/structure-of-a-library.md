---
title: "Struttura di una libreria | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "librerie, struttura"
ms.assetid: a5fda8e8-4a1b-4499-9095-0df935262ce4
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struttura di una libreria
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In una libreria sono presenti oggetti COFF.  Gli oggetti di una libreria contengono funzioni e dati a cui altri oggetti di un programma possono fare riferimento dall'esterno.  Tali oggetti vengono anche definiti membri della libreria.  
  
 È possibile visualizzare ulteriori informazioni sul contenuto di una libreria eseguendo lo strumento DUMPBIN con l'opzione \/LINKERMEMBER.  Per ulteriori informazioni su questa opzione, vedere [Riferimenti a DUMPBIN](../../build/reference/dumpbin-reference.md).  
  
## Vedere anche  
 [Cenni preliminari su LIB](../../build/reference/overview-of-lib.md)