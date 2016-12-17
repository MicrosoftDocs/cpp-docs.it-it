---
title: "Macro di comando e di opzione | Microsoft Docs"
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
  - "macro di comandi in NMAKE"
  - "macro, macro di comandi"
  - "macro, macro di opzioni"
  - "macro di opzioni"
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro di comando e di opzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le macro di comando sono già definite per i prodotti Microsoft.  Le macro di opzione rappresentano le opzioni di tali prodotti e, per impostazione predefinita, non sono definite.  Entrambi i tipi di macro, oltre a essere utilizzati in regole di inferenza già definite, possono essere utilizzati in blocchi di descrizione o in regole di inferenza definite dall'utente.  Le macro di comando possono essere ridefinite per rappresentare una parte o tutta una riga di comando, incluse le opzioni.  Le macro di opzione generano una stringa null se non vengono definite.  
  
|Prodotto Microsoft|Macro di comando|Definita come|Macro di opzione|  
|------------------------|----------------------|-------------------|----------------------|  
|Macro Assembler|**AS**|ml|**AFLAGS**|  
|Compilatore Basic|**BC**|bc|**BFLAGS**|  
|Compilatore C|**CC**|cl|**CFLAGS**|  
|Compilatore C\+\+|**CPP**|cl|**CPPFLAGS**|  
|Compilatore C\+\+|**CXX**|cl|**CXXFLAGS**|  
|Compilatore di risorse|**RC**|rc|**RFLAGS**|  
  
## Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)