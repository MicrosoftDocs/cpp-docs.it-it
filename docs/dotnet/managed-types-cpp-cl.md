---
title: "Tipi gestiti (C++/CL) | Microsoft Docs"
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
  - "tipi __gc"
  - "tipi [C++], CLR"
ms.assetid: 1ddd114e-be02-4de7-a4dd-a2d72ad8ff81
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi gestiti (C++/CL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi per la dichiarazione di tipi gestiti e per la creazione e l'utilizzo di oggetti di questi tipi è stata modificata in modo significativo in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+,  allo scopo di promuovere l'integrazione nel sistema di tipi ISO\-C\+\+.  Queste modifiche sono illustrate in dettaglio nelle sottosezioni riportate di seguito.  
  
## Argomenti della sezione  
 [Dichiarazione di un tipo classe gestito](../dotnet/declaration-of-a-managed-class-type.md)  
 Illustra come dichiarare un tipo `class`, `struct` o `interface` gestito.  
  
 [Dichiarazione di un oggetto classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md)  
 Illustra come dichiarare un oggetto di tipo classe di riferimento utilizzando un handle di rilevamento.  
  
 [Dichiarazione di una matrice CLR](../dotnet/declaration-of-a-clr-array.md)  
 Descrive come dichiarare e inizializzare una matrice.  
  
 [Modifiche nell'ordine di inizializzazione del costruttore](../dotnet/changes-in-constructor-initialization-order.md)  
 Illustra modifiche fondamentali nell'ordine di inizializzazione del costruttore della classe.  
  
 [Modifiche nella semantica del distruttore](../dotnet/changes-in-destructor-semantics.md)  
 Illustra la finalizzazione non deterministica, il confronto tra `Finalize` e `Dispose`, le ramificazioni per gli oggetti di riferimento e l'utilizzo esplicito di `Finalize`.  
  
 **Nota:** la descrizione dei delegati è rinviata a [Delegati ed eventi](../dotnet/delegates-and-events.md) allo scopo di presentarli con i membri di evento in una classe, che costituiscono l'argomento generale di [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md).  
  
## Vedere anche  
 [Nozioni di base della migrazione in C\+\+\/CLI](../dotnet/cpp-cli-migration-primer.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)   
 [Arrays](../windows/arrays-cpp-component-extensions.md)