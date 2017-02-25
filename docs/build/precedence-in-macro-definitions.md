---
title: "Precedenza nelle definizioni delle macro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro, precedenza"
  - "NMAKE (programma), precedenza nelle definizioni di macro"
ms.assetid: 0c13182d-83cb-4cbd-af2d-f4c916b62aeb
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Precedenza nelle definizioni delle macro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se a una macro sono associate più definizioni, in NMAKE viene utilizzata la definizione con precedenza più alta.  Nell'elenco che segue è indicato l'ordine di precedenza delle definizioni, dalla più alta alla più bassa:  
  
1.  Una macro definita nella riga di comando  
  
2.  Una macro definita in un makefile o in un file di inclusione  
  
3.  Una macro di variabile di ambiente ereditata  
  
4.  Una macro definita nel file Tools.ini  
  
5.  Una macro già definita, quale [CC](../build/command-macros-and-options-macros.md) e [AS](../build/command-macros-and-options-macros.md)  
  
 Utilizzare l'opzione \/E per fare in modo che le macro ereditate dalle variabili di ambiente eseguano l'override delle macro di makefile con lo stesso nome.  Utilizzare **\!UNDEF** per eseguire l'override di una riga di comando.  
  
## Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)