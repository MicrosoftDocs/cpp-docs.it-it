---
title: C + + /CLI Migration Primer | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- C++/CLI Version 2
- upgrading Visual C++ applications, Managed Extensions for C++ to Visual C++ 2005 syntax
- migration [C++], C++/CLI Version 2
- Managed Extensions for C++, upgrading syntax
- C++/CLI Version 2, managed extensions
ms.assetid: 8ec926b5-73f6-4f0c-bcdf-5203d293849a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: add55156b23dd2f9eb746f032d8406bad3b9db56
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ccli-migration-primer"></a>Nozioni di base della migrazione in C++/CLI
Si tratta di una Guida alla migrazione dei programmi Visual C++ dalle estensioni gestite per C++ a Visual C++. 
  
 C + + CLI estende un paradigma di programmazione dei componenti dinamici per il linguaggio standard ISO C++. Il nuovo linguaggio offre una serie di miglioramenti significativi rispetto alle estensioni gestite. In questa sezione fornisce un elenco enumerato di estensioni gestite per le funzionalità del linguaggio C++ e il relativo mapping a Visual C++ in cui tale mapping esistente e vengono illustrate tali costrutti per la quale non esiste alcun mapping.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Struttura delle modifiche (C++/CLI)](../dotnet/outline-of-changes-cpp-cli.md)  
 Una struttura di alto livello di riferimento rapido, che fornisce un elenco delle modifiche in cinque categorie generali.  
  
 [Parole chiave del linguaggio (C++/CLI)](../dotnet/language-keywords-cpp-cli.md)  
 Illustra le modifiche in parole chiave del linguaggio, inclusa la rimozione del doppio carattere di sottolineatura e l'introduzione delle parole chiave contestuali e con spaziatura.  
  
 [Tipi gestiti (C + + CL)](../dotnet/managed-types-cpp-cl.md)  
 Le modifiche sintattiche relative nella dichiarazione di Common Type System (CTS) - questo include modifiche nella dichiarazione di classi, matrici (inclusa la matrice di parametri), le enumerazioni e così via.  
  
 [Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)  
 Visualizza le modifiche che riguardano i membri di classe, ad esempio le proprietà di indice, operatori, delegati, eventi e proprietà scalari.  
  
 [Tipi di valore e relativi comportamenti (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)  
 Si concentra su tipi di valore e la nuova famiglia di puntatori interni e di blocco. Illustra anche un numero di modifiche di semantica significativi, ad esempio l'introduzione di conversione boxing implicita immutabilità dei tipi di valore boxed e la rimozione del supporto per i costruttori predefiniti all'interno di classi di valore.  
  
 [Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)  
 Modifiche nella semantica dettagli quali il supporto per la notazione cast, stringa letterale comportamento e le modifiche nella semantica tra ISO C++ e C + + CLI.  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)   
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)