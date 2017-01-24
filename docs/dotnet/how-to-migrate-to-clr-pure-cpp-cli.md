---
title: "Procedura: migrare a /clr:pure (C++/CLI) | Microsoft Docs"
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
  - "/clr (opzione del compilatore) [C++], migrazione a /clr:pure"
  - "migrazione [C++], MSIL puro"
  - "MSIL puro [C++], porting"
ms.assetid: 5ffb1184-2095-4ade-84aa-4fa6324bc764
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: migrare a /clr:pure (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono illustrati i problemi che possono sorgere durante la migrazione a MSIL puro mediante l'opzione **\/clr:pure**. Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  In questo argomento si presuppone che il codice da migrare sia stato compilato come assembly misto utilizzando l'opzione **\/clr**, poiché non esiste un percorso di migrazione diretto da codice non gestito a MSIL puro.  Per il codice non gestito, vedere [Procedura: eseguire la migrazione a \/clr](../dotnet/how-to-migrate-to-clr.md) prima di tentare la migrazione a MSIL puro.  
  
## Modifiche di base  
 Poiché MSIL puro è costituito da istruzioni MSIL, non sarà possibile compilare codice contenente funzioni che non possono essere espresse in MSIL,  ad esempio funzioni definite mediante convenzioni di chiamata diverse da [\_\_clrcall](../cpp/clrcall.md) \(le funzioni non \_\_clrcall possono essere richiamate in un componente MSIL puro ma non definite\).  
  
 Per evitare errori di runtime, si consiglia di abilitare l'avviso C4412.  A questo scopo, è necessario aggiungere `#pragma warning (default : 4412)` a ciascun modulo che deve essere compilato con **\/clr:pure** e che passa o riceve tipi C\+\+ a\/da codice IJW \(**\/clr\)** o nativo.  Per ulteriori informazioni, vedere [Avviso del compilatore \(livello 2\) C4412](../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md).  
  
## Considerazioni sull'architettura  
 Alcune delle limitazioni degli assembly MSIL puri elencate in [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md) hanno implicazioni generali sulla strategia di migrazione e progettazione delle applicazioni.  Ma soprattutto, a differenza degli assembly misti, gli assembly MSIL puri non garantiscono la totale compatibilità con i moduli non gestiti.  
  
 Gli assembly MSIL puri possono chiamare funzioni non gestite ma non possono essere chiamati da funzioni non gestite.  Di conseguenza, MSIL puro è adatto per un codice client che utilizza funzioni non gestite ma non per un codice server che viene utilizzato da funzione non gestite.  Se le funzionalità contenute in un assembly MSIL puro devono essere utilizzate da funzioni non gestite, è necessario utilizzare un assembly misto come livello di interfaccia.  
  
 Le applicazioni che utilizzano librerie ATL o MFC non dovrebbero essere migrate a MSIL puro, poiché tali librerie non sono supportate in questa versione.  Analogamente, in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)] sono contenuti file di intestazione che non devono essere compilati con **\/clr:pure**.  
  
 Anche se gli assembly MSIL puri possono chiamare funzioni non gestite, questa capacità è limitata a semplici funzioni di tipo C.  L'utilizzo di API non gestite più complesse potrebbe richiedere l'esposizione della funzionalità non gestita sotto forma di interfaccia COM o un assembly misto che possa fungere da interfaccia tra i componenti non gestiti e quelli in MSIL puro.  L'utilizzo di un livello assembly misto, ad esempio, è l'unico modo per utilizzare funzioni non gestite che accettano funzioni di callback, poiché un assembly puro non è in grado di fornire una funzione chiamabile nativa da utilizzare come callback.  
  
## Domini applicazioni e convenzioni di chiamata  
 Anche se gli assembly MSIL puri possono utilizzare funzionalità non gestite, le funzioni e i dati statici vengono gestiti in modo differente.  Negli assembly puri le funzioni vengono implementate con la convenzione di chiamata [\_\_clrcall](../cpp/clrcall.md), mentre i dati statici vengono archiviati a livello di dominio applicazione.  Questo comportamento differisce da quello previsto per gli assembly misti e non gestiti, che utilizzano la convenzione di chiamata [\_\_cdecl](../cpp/cdecl.md) per le funzioni e archiviano i dati statici a livello di singolo processo.  
  
 Nel contesto di MSIL puro \(e di codice verificabile compilato con l'opzione \/clr:safe\) queste impostazioni predefinite sono trasparenti, poiché [\_\_clrcall](../cpp/clrcall.md) è la convenzione di chiamata predefinita di CLR, e i domini applicazioni costituiscono l'ambito nativo per i dati statici e globali nelle applicazioni .NET.  Tuttavia, se è presente un livello di interfaccia con i componenti misti o non gestiti, il differente trattamento delle funzioni e dei dati globali può causare problemi.  
  
 Se ad esempio un componente MSIL puro deve chiamare funzioni contenute in una DLL mista o non gestita, per compilare l'assembly puro verrà utilizzato un file di intestazione della DLL.  Tuttavia, a meno che non sia indicata esplicitamente la convenzione di chiamata per ciascuna funzione nel file di intestazione, si presupporrà che tutte le funzioni siano [\_\_clrcall](../cpp/clrcall.md).  Questo causerà successivamente errori di runtime, poiché queste funzioni sono state probabilmente implementate con la convenzione [\_\_cdecl](../cpp/cdecl.md).  Le funzioni nel file di intestazione non gestito possono essere contrassegnate esplicitamente come [\_\_cdecl](../cpp/cdecl.md). In caso contrario, l'intero codice sorgente della DLL deve essere ricompilato con l'opzione **\/clr:pure**.  
  
 In modo analogo, si presupporrà che i puntatori a funzione facciano riferimento a funzioni [\_\_clrcall](../cpp/clrcall.md) compilate con **\/clr:pure**.  Anche queste funzioni devono essere contrassegnate esplicitamente con la convenzione di chiamata corretta.  
  
 Per ulteriori informazioni, vedere [Domini applicazione e Visual C\+\+](../dotnet/application-domains-and-visual-cpp.md).  
  
## Limitazioni di collegamento  
 Il linker di Visual C\+\+ non tenterà di collegare file OBL misti e puri, poiché l'ambito di archiviazione e le convenzioni di chiamata sono differenti.  
  
## Vedere anche  
 [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md)