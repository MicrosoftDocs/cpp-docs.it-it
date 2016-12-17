---
title: "Espressioni nella pre-elaborazione di makefile | Microsoft Docs"
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
  - "espressioni [C++], pre-elaborazione di makefile"
  - "makefile, pre-elaborazione"
  - "pre-elaborazione di makefile"
ms.assetid: 37f0f413-97e0-452c-a83f-3c9002c44c92
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Espressioni nella pre-elaborazione di makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'espressione **\!IF** o **\!ELSE IF** `constantexpression` è composta da costanti integer \(in notazione decimale o in linguaggio C\), costanti stringa o comandi.  Per raggruppare espressioni, utilizzare le parentesi.  Nelle espressioni viene utilizzata l'aritmetica basata su valori signed long integer tipica del linguaggio C. I numeri, rappresentati in complemento a due a 32 bit, sono compresi tra – 2147483648 e 2147483647.  
  
 Nelle espressioni è possibile utilizzare operatori che agiscono sui valori delle costanti, sui codici di uscita dei comandi, su stringhe, macro e percorsi del file system.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Operatori di pre\-elaborazione di makefile](../build/makefile-preprocessing-operators.md)  
  
 [Esecuzione di un programma durante la pre\-elaborazione](../build/executing-a-program-in-preprocessing.md)  
  
## Vedere anche  
 [Pre\-elaborazione di makefile](../build/makefile-preprocessing.md)