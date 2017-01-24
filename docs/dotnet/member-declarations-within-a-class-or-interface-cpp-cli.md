---
title: "Dichiarazioni di membri in una classe o interfaccia (C++/CLI) | Microsoft Docs"
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
  - "membri di classi, sintassi di dichiarazione"
  - "membri, sintassi di dichiarazione"
ms.assetid: 95d312a4-198b-46f0-b8f5-15253807c55e
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dichiarazioni di membri in una classe o interfaccia (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] la dichiarazione di proprietà e operatori è stata ampiamente riprogettata, in modo da nascondere i dettagli di implementazione sottostanti, che nella progettazione con le estensioni gestite di C\+\+ risultavano esposti.  Sono state apportate modifiche anche alle dichiarazioni di eventi.  
  
 Nell'ambito delle modifiche non supportate nelle estensioni gestite, i costruttori statici possono ora essere definiti non inline \(nelle estensioni gestite era infatti necessario definirli inline\) ed è stata introdotta la nozione di costruttore delegante.  
  
## Argomenti della sezione  
 [Dichiarazione di proprietà](../dotnet/property-declaration.md)  
 Illustra le modifiche relative alle dichiarazioni di proprietà.  
  
 [Dichiarazione degli indici di proprietà](../dotnet/property-index-declaration.md)  
 Illustra le modifiche relative alle dichiarazioni di proprietà indicizzate.  
  
 [Delegati ed eventi](../dotnet/delegates-and-events.md)  
 Illustra le modifiche relative alla sintassi per la dichiarazione di delegati ed eventi.  
  
 [Utilizzo di una funzione virtuale sealed](../dotnet/sealing-a-virtual-function.md)  
 Illustra le modifiche relative alla sintassi per impostare una funzione come sealed.  
  
 [Operatori di overload](../dotnet/overloaded-operators.md)  
 Illustra le modifiche relative all'overload degli operatori.  
  
 [Modifiche agli operatori di conversione](../dotnet/changes-to-conversion-operators.md)  
 Illustra le modifiche relative agli operatori di conversione.  
  
 [Override esplicito di un membro di interfaccia](../dotnet/explicit-override-of-an-interface-member.md)  
 Illustra le modifiche relative al metodo che consente di eseguire in modo esplicito l'override di un membro di interfaccia.  
  
 [Funzioni virtuali private](../dotnet/private-virtual-functions.md)  
 Illustra le modifiche relative alla modalità di gestione delle funzioni virtuali private nelle classi derivate.  
  
 [L'attributo di collegamento dei membri integrali di Static Const non è più Literal](../dotnet/static-const-int-linkage-is-no-longer-literal.md)  
 Illustra le modifiche relative alla modalità di collegamento dei membri integrali di `static const` e alla modalità di dichiarazione esplicita di una costante tramite la nuova parola chiave `literal`.  
  
## Vedere anche  
 [Nozioni di base della migrazione in C\+\+\/CLI](../dotnet/cpp-cli-migration-primer.md)