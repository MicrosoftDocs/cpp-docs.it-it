---
title: "Errore dell‘analizzatore di espressioni CXX0019 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0019"
  - "CXX0019"
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore dell‘analizzatore di espressioni CXX0019
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

cast di tipo non valido  
  
 L'analizzatore di espressioni di C non è in grado di eseguire il cast di tipo secondo le istruzioni specificate.  
  
 Questo errore è identico all'errore CAN0019.  
  
### Possibili cause  
  
1.  Il tipo specificato è sconosciuto.  
  
2.  Vi sono troppi livelli di tipi puntatore.  Ad esempio, il cast di tipo  
  
    ```  
    (char **)h_message  
    ```  
  
     non può essere valutato dall'analizzatore di espressioni di C.