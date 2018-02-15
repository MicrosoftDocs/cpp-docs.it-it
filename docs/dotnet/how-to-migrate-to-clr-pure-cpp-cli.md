---
title: 'Procedura: eseguire la migrazione a clr-: pure (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- /clr compiler option [C++], migrating to /clr:pure
- migration [C++], pure MSIL
- pure MSIL [C++], porting to
ms.assetid: 5ffb1184-2095-4ade-84aa-4fa6324bc764
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b8d49ee233167c02570408ba091c2a99b78487d5
ms.sourcegitcommit: fa7a6dccddce3747389c91277a53e296f905305c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="how-to-migrate-to-clrpure-ccli"></a>Procedura: migrare a /clr:pure (C++/CLI)
In questo argomento vengono illustrati i problemi che possono sorgere durante la migrazione a MSIL puro mediante l'opzione **/clr: pure** (vedere [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) per altre informazioni). Questo argomento si presuppone che il codice viene eseguita la migrazione sia stato compilato come assembly misto utilizzando il **/clr** opzione, il percorso di migrazione da codice non gestito in MSIL pure non è diretto. Per codice non gestito, vedere [procedura: migrare a /clr](../dotnet/how-to-migrate-to-clr.md) prima di tentare di eseguire la migrazione a MSIL pure.  
  
## <a name="basic-changes"></a>Modifiche di base  
 MSIL puro è costituita da istruzioni MSIL, in modo da codice che contengono funzioni che non possono essere espressi in MSIL impedirà la compilazione. In questo esempio funzioni definite mediante le convenzioni di chiamata diverse da [clrcall](../cpp/clrcall.md). (Le funzioni clrcall non possono essere richiamate in un componente MSIL puro, ma non è definite.)  
  
 Per evitare errori di runtime, è necessario abilitare l'avviso C4412. Abilitare C4412 aggiungendo `#pragma warning (default : 4412)` a ciascun modulo che si compila con **/clr: pure** e che passa tipi C++ da e verso IJW (**/clr)** o codice nativo. Vedere [avviso del compilatore (livello 2) C4412](../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md) per ulteriori informazioni.  
  
## <a name="architectural-considerations"></a>Considerazioni sull'architetturale  
 Alcune delle limitazioni degli assembly MSIL puri elencate [codice Pure e verificabile (C + + CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md) implicazioni di alto livello per la strategia di migrazione e progettazione di applicazioni. In particolare, a differenza di assembly misti, gli assembly MSIL pure non garantiscono la piena compatibilità con i moduli non gestiti.  
  
 Gli assembly MSIL pure possono chiamare funzioni non gestite, ma possono essere chiamati da funzioni non gestite. Di conseguenza, MSIL puro è adatto per il codice client che Usa funzioni non gestite, piuttosto che per il codice server utilizzato da funzioni non gestite. Se funzionalità contenuta in un assembly MSIL puro viene utilizzato da funzioni non gestite, un assembly misto deve essere utilizzato come un livello di interfaccia.  
  
 Le applicazioni che utilizzano ATL o MFC non sono buoni candidati per la migrazione a MSIL pure, poiché queste librerie non sono supportate in questa versione. Analogamente, il [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)] contiene i file di intestazione che devono essere compilati con **/clr: pure**.  
  
 Anche se gli assembly MSIL pure possono chiamare funzioni non gestite, questa possibilità è limitata alle funzioni di tipo C semplice. L'utilizzo di API non gestite più complesse è probabile che richiedono la funzionalità deve essere esposta sotto forma di un'interfaccia COM o un assembly misto che può fungere da un'interfaccia tra il codice MSIL pure e i componenti non gestiti non gestita. Utilizzo di un livello di assembly misti è l'unico modo per utilizzare le funzioni non gestite che accettano le funzioni di callback, ad esempio, come un assembly puro è in grado di fornire una funzione chiamabile nativa da utilizzare come un callback.  
  
## <a name="application-domains-and-calling-conventions"></a>Domini applicazione e convenzioni di chiamata  
 Sebbene sia possibile per MSIL puro assembly utilizzano la funzionalità non gestite, funzioni e dati statici vengono gestiti in modo diverso. Negli assembly puri le funzioni vengono implementate con i [clrcall](../cpp/clrcall.md) convenzione di chiamata e i dati statici viene archiviato per dominio di applicazione. Questo comportamento è diverso da quello predefinito per gli assembly misti e non gestiti che utilizzano il [cdecl](../cpp/cdecl.md) convenzione di chiamata per le funzioni e archiviare i dati statici in una base per ogni processo.  
  
 All'interno del contesto di MSIL puro (e codice verificabile compilato con /CLR: safe) sono trasparenti, poiché queste impostazioni predefinite [clrcall](../cpp/clrcall.md) è la convenzione di chiamata predefinita di CLR e i domini applicazione costituiscono l'ambito nativo per statico e dati globali in applicazioni .NET. Tuttavia, quando l'interazione con componenti non gestiti o misti, il trattamento delle funzioni e dati globali diverse può causare problemi.  
  
 Ad esempio, se un componente MSIL puro consiste nel chiamare funzioni in una DLL non gestita o mista, un file di intestazione per la DLL da utilizzare per compilare l'assembly pura. Tuttavia, a meno che la convenzione di chiamata per ogni funzione nell'intestazione è indicata in modo esplicito, verrà tutti considerati [clrcall](../cpp/clrcall.md). Ciò causerà successivamente errori di runtime, poiché queste funzioni sono state probabilmente implementate con i [cdecl](../cpp/cdecl.md) convenzione. Le funzioni nel file di intestazione non gestito possono essere contrassegnate in modo esplicito come [cdecl](../cpp/cdecl.md), o è necessario ricompilare l'intero codice sorgente della DLL in **/clr: pure**.  
  
 Analogamente, si presuppone che i puntatori a funzione in modo che punti a [clrcall](../cpp/clrcall.md) funzioni in **/clr: pure** compilazione. Questi troppo deve essere annotati in modo esplicito con la convenzione di chiamata corretta.  
  
 Per ulteriori informazioni, vedere [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md).  
  
## <a name="linking-limitations"></a>Limitazioni di collegamento  
 Il linker Visual C++ non tenterà di collegare file OBJ misti e puri, come le convenzioni di ambito e la chiamata di archiviazione sono diverse.  
  
## <a name="see-also"></a>Vedere anche  
 [Codice pure e verificabile (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)