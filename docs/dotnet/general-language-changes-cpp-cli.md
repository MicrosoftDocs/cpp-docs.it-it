---
title: "Modifiche generali del linguaggio (C++/CLI) | Microsoft Docs"
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
ms.assetid: 79a70768-225c-4ae2-84d1-178b20a9b042
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifiche generali del linguaggio (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una serie di funzionalità di linguaggio CLR sono state modificate in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Le modifiche descritte in questa sezione sono di vario tipo  e comprendono una modifica nella gestione delle stringhe letterali, una modifica nella risoluzione dell'overload tra i puntini di sospensione e l'attributo `Param`, la modifica di `typeof` in `typeid`, una modifica negli elenchi di inizializzatori di un costruttore e l'introduzione della nuova notazione di cast `safe_cast`.  
  
 [Stringhe letterali](../dotnet/string-literal.md)  
 Vengono illustrate le modifiche apportate alla gestione delle stringhe letterali.  
  
 [Matrice di parametri e puntini di sospensione](../dotnet/param-array-and-ellipsis.md)  
 Viene illustrato come per la risoluzione di chiamate di funzione con numeri variabili di argomenti venga ora assegnata la precedenza a `ParamArray` rispetto ai puntini di sospensione \(`…`\).  
  
 [typeof passa a T::typeid](../dotnet/typeof-goes-to-t-typeid.md)  
 Viene illustrato come l'operatore `typeof` è stato sostituito da `typeid`.  
  
 [Elenchi di inizializzatori](../dotnet/initializer-lists.md)  
 Vengono illustrate le modifiche nell'ordine di chiamata degli elenchi di inizializzatori.  
  
 [Notazione cast e introduzione di safe\_cast\<\>](../dotnet/cast-notation-and-introduction-of-safe-cast-angles.md)  
 Vengono descritte le modifiche apportate alla notazione di cast e in particolare viene illustrata l'introduzione di `safe_cast`.  
  
## Vedere anche  
 [Nozioni di base della migrazione in C\+\+\/CLI](../dotnet/cpp-cli-migration-primer.md)