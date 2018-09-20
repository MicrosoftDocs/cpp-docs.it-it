---
title: C + c++ /CLI Migration Primer | Microsoft Docs
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
ms.openlocfilehash: 88b32ea226971c0fa5b6d269a8992629c3c4de77
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385431"
---
# <a name="ccli-migration-primer"></a>Nozioni di base della migrazione in C++/CLI

Si tratta di una Guida alla migrazione dei programmi Visual C++ dalle estensioni gestite per C++ in Visual C++.

C + + CLI estende un paradigma di programmazione dei componenti dinamici per il linguaggio standard ISO C++. Il nuovo linguaggio offre una serie di miglioramenti significativi rispetto alle estensioni gestite. Questa sezione presenta un elenco enumerato di estensioni gestite di funzionalità del linguaggio C++ e i relativi mapping a Visual C++ in cui questo mapping è presente e viene sottolineato questi costrutti per i quali non esiste alcun mapping.

## <a name="in-this-section"></a>In questa sezione

[Struttura delle modifiche (C++/CLI)](../dotnet/outline-of-changes-cpp-cli.md)<br/>
Una struttura di alto livello di riferimento rapido, che fornisce un elenco delle modifiche in cinque categorie generali.

[Parole chiave del linguaggio (C++/CLI)](../dotnet/language-keywords-cpp-cli.md)<br/>
Vengono illustrate le modifiche nelle parole chiave del linguaggio, inclusa la rimozione del doppio carattere di sottolineatura e l'introduzione delle parole chiave contestuali e con spaziatura.

[Tipi gestiti (C + + / CL)](../dotnet/managed-types-cpp-cl.md)<br/>
Le modifiche sintattiche relative nella dichiarazione del Common Type System (CTS) - questo include le modifiche nella dichiarazione di classi, matrici (inclusa la matrice di parametri), le enumerazioni e così via.

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)<br/>
Visualizza le modifiche che riguardano i membri di classe, ad esempio proprietà scalari, le proprietà di indice, operatori, delegati ed eventi.

[Tipi di valore e relativi comportamenti (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)<br/>
È incentrata sui tipi di valore e la nuova famiglia di puntatori interni e di blocco. Viene inoltre illustrato un numero di significative modifiche semantiche, quali l'introduzione del boxing implicito immutabilità dei tipi di valore boxed e la rimozione del supporto per i costruttori predefiniti all'interno di classi di valore.

[Modifiche generali del linguaggio (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)<br/>
Descrive dettagliatamente modifiche quali il supporto per la notazione cast, stringa letterale comportamento e le modifiche apportate alla semantica tra ISO-c e C + + / CLI.

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)<br/>
[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)