---
title: "Nozioni di base della migrazione in C++/CLI | Microsoft Docs"
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
  - "C++/CLI Version 2"
  - "C++/CLI Version 2, estensioni gestite"
  - "estensioni gestite per C++, aggiornamento sintassi"
  - "migrazione [C++], C++/CLI Version 2"
  - "Visual C++ (aggiornamento di applicazioni), da estensioni gestite di C++ a sintassi Visual C++ 2005"
ms.assetid: 8ec926b5-73f6-4f0c-bcdf-5203d293849a
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Nozioni di base della migrazione in C++/CLI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito viene fornita una guida alla migrazione dei programmi Visual C\+\+ dalle estensioni gestite di C\+\+ a [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  Per un elenco di controllo riepilogativo delle modifiche sintattiche, vedere [\(NOTINBUILD\)Managed Extensions for C\+\+ Syntax Upgrade Checklist](http://msdn.microsoft.com/it-it/edbded88-7ef3-4757-bd9d-b8f48ac2aada).  
  
 Rispetto al linguaggio standard ISO\-C\+\+, C\+\+\/CLI rappresenta un'estensione del paradigma di programmazione dei componenti dinamici.  Il nuovo linguaggio offre una serie di miglioramenti significativi rispetto alle estensioni gestite.  In questa sezione vengono elencate le funzionalità del linguaggio disponibili nelle estensioni gestite di C\+\+ e, se esistenti, i relativi mapping a [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)]. Vengono inoltre indicati i costrutti per cui non è presente alcun mapping.  
  
## Argomenti della sezione  
 [Struttura delle modifiche \(C\+\+\/CLI\)](../dotnet/outline-of-changes-cpp-cli.md)  
 Presenta una struttura dettagliata, da utilizzare come guida di riferimento rapida, contenente un elenco delle modifiche suddivise in cinque categorie generali.  
  
 [Parole chiave del linguaggio \(C\+\+\/CLI\)](../dotnet/language-keywords-cpp-cli.md)  
 Illustra le modifiche nelle parole chiave del linguaggio, inclusa l'eliminazione del doppio carattere di sottolineatura e l'introduzione delle parole chiave contestuali e con spaziatura.  
  
 [Tipi gestiti \(C\+\+\/CL\)](../dotnet/managed-types-cpp-cl.md)  
 Descrive le modifiche sintattiche relative alla dichiarazione del sistema di tipi comuni \(CTS, Common Type System\), tra cui le modifiche apportate alla dichiarazione di classi, matrici \(inclusa la matrice di parametri\), enum e così via.  
  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)  
 Illustra le modifiche che riguardano i membri delle classi, ad esempio proprietà scalari e indicizzate, operatori, delegati ed eventi.  
  
 [Tipi di valore e relativi comportamenti \(C\+\+\/CLI\)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)  
 Illustra non solo i tipi di valore e la nuova famiglia di puntatori interni e di blocco,  ma anche numerose e significative modifiche semantiche, quali l'introduzione del boxing implicito, l'immutabilità dei tipi di valore boxed e l'eliminazione del supporto per i costruttori predefiniti all'interno delle classi di valori.  
  
 [Modifica generale del linguaggio](../dotnet/general-language-changes-cpp-cli.md)  
 Descrive dettagliatamente modifiche quali il supporto per la notazione cast, il comportamento della stringa letterale e modifiche apportate alla semantica tra ISO\-C\+\+ e C\+\+\/CLI.  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)