---
title: "1.4 Conformit&#224; | Microsoft Docs"
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
ms.assetid: 662ad260-b9a1-43b7-b269-ef6ff0714e05
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 1.4 Conformit&#224;
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È un'implementazione dell'API C/C++ OpenMP *OpenMP conforme* se che riconosce e mantiene la semantica di tutti gli elementi di questa specifica, come illustrato nei capitoli 1, 2, 3, 4, e appendici C. appendice A, B, D, E e F sono solo a scopo informativo e non fanno parte della specifica. Le implementazioni che includono solo un subset dell'API non sono compatibili con OpenMP.  
  
 OpenMP C e C++ API è un'estensione del linguaggio di base che è supportata da un'implementazione. Se la lingua di base non supporta un costrutto di linguaggio o un'estensione che viene visualizzato in questo documento, l'implementazione di OpenMP non è necessario per il supporto.  
  
 Tutte le funzioni della libreria standard C e C++ e le funzioni incorporate (ovvero, funzioni di cui il compilatore dispone di una conoscenza specifica) deve essere thread-safe. Non sincronizzato utilizzo delle funzioni thread-safe da thread diversi all'interno di un'area parallela non produce un comportamento non definito. Tuttavia, il comportamento potrebbe non essere uguale a quello in un'area seriale. (Una funzione di generazione di numeri casuali è riportato un esempio).  
  
 L'API C/C++ OpenMP specifica che determinati comportamenti *definito dall'implementazione.* Un'implementazione conforme OpenMP è necessaria definire e documentare il comportamento in questi casi. Vedere [Appendice](../../parallel/openmp/e-implementation-defined-behaviors-in-openmp-c-cpp.md), pagina 97, per un elenco di comportamenti definiti dall'implementazione.