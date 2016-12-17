---
title: "Macro null e non definite | Microsoft Docs"
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
  - "macro, null e non definite"
  - "NMAKE (programma), macro null"
  - "NMAKE (programma), macro non definite"
  - "macro null in NMAKE"
  - "macro non definite e NMAKE"
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro null e non definite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sia le macro null che quelle non definite vengono espanse a stringhe null. Le macro definite come stringa null vengono tuttavia considerate definite nelle espressioni di pre\-elaborazione.  Per definire una macro come stringa null, non specificare alcun carattere oltre a spazi o tabulazioni dopo il segno di uguale \(\=\) in una riga di comando o in un file di comando e racchiudere la definizione o la stringa null tra virgolette doppie \(" "\).  Per annullare la definizione di una macro, utilizzare **\!UNDEF**. Per ulteriori informazioni, vedere [Direttive di pre\-elaborazione di makefile](../build/makefile-preprocessing-directives.md).  
  
## Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)