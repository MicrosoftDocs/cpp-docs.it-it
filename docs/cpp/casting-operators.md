---
title: "Operatori di cast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori di cast"
  - "operatori [C++], cast"
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Operatori di cast
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel linguaggio C\+\+ sono disponibili numerosi operatori di cast specifici.  Tali operatori consentono di rimuovere parte dell'ambiguità e alcuni problemi relativi agli operatori cast obsoleti del linguaggio C.  Gli operatori sono i seguenti:  
  
-   [dynamic\_cast](../cpp/dynamic-cast-operator.md) Utilizzato per la conversione di tipi polimorfici.  
  
-   [static\_cast](../cpp/static-cast-operator.md) Utilizzato per la conversione di tipi non polimorfici.  
  
-   [const\_cast](../cpp/const-cast-operator.md) Utilizzato per rimuovere gli attributi `const`, `volatile` e `__unaligned`.  
  
-   [reinterpret\_cast](../cpp/reinterpret-cast-operator.md) Utilizzato per la reinterpretazione semplice dei bit.  
  
-   [safe\_cast](../windows/safe-cast-cpp-component-extensions.md) Utilizzato per produrre codice MSIL verificabile.  
  
 Utilizzare `const_cast` e `reinterpret_cast` come ultima soluzione, poiché questi operatori possono provocare gli stessi problemi degli operatori cast obsoleti.  Tali operatori sono tuttavia ancora necessari per sostituire completamente gli operatori cast obsoleti.  
  
## Vedere anche  
 [Cast](../cpp/casting.md)