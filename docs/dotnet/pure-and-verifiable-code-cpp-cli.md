---
title: "Codice pure e verificabile (C++/CLI) | Microsoft Docs"
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
  - "..NET Framework [C++], codice di tipo puro e verificabile"
  - "/clr (opzione del compilatore) [C++], assembly misti"
  - "/clr (opzione del compilatore) [C++], assembly puri [C++]"
  - "/clr (opzione del compilatore) [C++], assembly verificabili"
  - "assembly [C++], codice misto"
  - "assembly [C++], codice di tipo puro"
  - "assembly [C++], codice verificabile"
  - "assembly misti [C++]"
  - "assembly misti [C++], informazioni"
  - "MSIL puro [C++]"
  - "MSIL puro [C++], informazioni sul codice di tipo puro"
  - "assembly verificabili [C++]"
  - "assembly verificabili [C++], informazioni"
  - "codice type-safe verificabile [C++]"
ms.assetid: 9050e110-fa11-4356-b56c-665187ff871c
caps.latest.revision: 31
caps.handback.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Codice pure e verificabile (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'ambito della programmazione .NET, Visual C\+\+ supporta la creazione di tre diversi tipi di applicazioni e componenti: misti, pure e verificabili.  Tutti e tre i tipi sono disponibili con l'opzione del compilatore [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Note  
 Per ulteriori informazioni sugli assembly verificabili, vedere:  
  
-   [Confronto tra le modalità mista, pura e verificabile](../dotnet/mixed-pure-and-verifiable-feature-comparison-cpp-cli.md)  
  
-   [Procedura: migrare a \/clr:pure](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)  
  
-   [Procedura: creare progetti C\+\+ verificabili](../dotnet/how-to-create-verifiable-cpp-projects-cpp-cli.md)  
  
-   [Procedura: migrare a \/clr:safe](../dotnet/how-to-migrate-to-clr-safe-cpp-cli.md)  
  
-   [Utilizzo di assembly verificabili con SQL Server](../dotnet/using-verifiable-assemblies-with-sql-server-cpp-cli.md)  
  
-   [Procedure di sicurezza consigliate](../top/security-best-practices-for-cpp.md)  
  
-   [Conversione di progetti da modalità mista a linguaggio intermedio \(IL\) puro](../dotnet/converting-projects-from-mixed-mode-to-pure-intermediate-language.md)  
  
## Misto \(\/clr\)  
 Gli assembly misti \(compilati con **\/clr**\) contengono parti sia gestite che non gestite, in modo da poter utilizzare le funzionalità .NET. Tuttavia, contengono ancora codice non gestito.  Questo consente di aggiornare applicazioni e componenti per l'utilizzo delle funzionalità .NET senza dover riscrivere l'intero progetto.  L'utilizzo di Visual C\+\+ per combinare codice gestito e non gestito nel modo descritto viene definito interoperabilità C\+\+.  Per ulteriori informazioni, vedere [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md) e [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md).  
  
## Pure \(\/clr:pure\)  
 Gli assembly pure \(compilati con **\/clr:pure**\) possono contenere tipi di dati sia nativi che gestiti, ma solo funzioni gestite.  Analogamente agli assembly misti, gli assembly pure consentono l'interoperabilità con DLL native tramite P\/Invoke \(vedere [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)\), ma le funzionalità di interoperabilità C\+\+ non sono disponibili.  Questi tipi di assembly non sono inoltre in grado di esportare funzioni richiamabili da funzioni native, poiché i punti di ingresso di un assembly pure utilizzano la convenzione di chiamata [\_\_clrcall](../cpp/clrcall.md).  
  
### Vantaggi offerti da \/clr:pure  
  
-   Migliori prestazioni: poiché gli assembly pure contengono solo codice MSIL e di conseguenza non sono presenti funzioni native, le transizioni gestite\/non gestite non sono necessarie \(le chiamate di funzione effettuate tramite P\/Invoke rappresentano un'eccezione a questa regola\).  
  
-   Compatibilità con AppDomain: le funzioni gestite e i tipi di dati CLR sono presenti all'interno di `Application Domains` e questo influisce sulla relativa visibilità e accessibilità.  Poiché gli assembly pure tengono conto dei domini \(\_\_declspec\([appdomain](../cpp/appdomain.md)\) è implicito in ogni tipo\), l'accesso ai relativi tipi e funzionalità da altri componenti .NET risulta più semplice e sicuro.  Di conseguenza, gli assembly pure interagiscono con altri componenti .NET più facilmente rispetto agli assembly misti.  
  
-   Caricamento non su disco: gli assembly pure possono essere caricati in memoria o trasmessi.  Questa caratteristica è essenziale per poter utilizzare gli assembly .NET come stored procedure.  Per poter essere eseguiti, gli assembly misti devono invece essere memorizzati su disco, a causa di una dipendenza dai meccanismi di caricamento di Windows.  
  
-   Reflection: non è possibile effettuare la reflection di eseguibili misti, mentre gli assembly pure forniscono il supporto completo della reflection.  Per ulteriori informazioni, vedere [Reflection](../dotnet/reflection-cpp-cli.md).  
  
-   Controllabilità dell'host: poiché contengono solo codice MSIL, gli assembly pure presentano un comportamento più prevedibile e flessibile rispetto a quello degli assembly misti quando vengono utilizzati in applicazioni che ospitano il CLR e possono modificarne il comportamento predefinito.  
  
### Limitazioni di \/clr:pure  
 In questa sezione vengono illustrate le funzionalità attualmente non supportate da **\/clr:pure**.  
  
-   Gli assembly pure non possono essere chiamati da funzioni non gestite.  Di conseguenza, non possono implementare interfacce COM o esporre callback nativi.  Agli assembly pure non è consentito esportare funzioni mediante file DEF o \_\_declspec\(dllexport\).  Non è inoltre possibile utilizzare \_\_declspec\(dllimport\) per importare le funzioni dichiarate tramite la convenzione \_\_clrcall.  Le funzioni di un modulo nativo possono essere chiamate dagli assembly pure, che non possono, tuttavia, esporre funzioni chiamabili native. Di conseguenza, l'esposizione di funzionalità in un assembly pure deve essere eseguita mediante funzioni gestite di un assembly misto.  Per ulteriori informazioni, vedere [Procedura: migrare a \/clr:pure](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md).  
  
-   Le librerie ATL e MFC non sono supportate da una compilazione in modalità pure in Visual C\+\+.  
  
-   I file .netmodule puri non sono accettati come input dal linker Visual C\+\+.  che invece accetta i file obj pure. I file obj contengono un superset di informazioni presenti nei file netmodule.  Per ulteriori informazioni, vedere [.File con estensione netmodule come input del linker](../build/reference/netmodule-files-as-linker-input.md).  
  
-   Il supporto del compilatore COM \(\#import\) non viene fornito, poiché questo introdurrebbe istruzioni non gestite nell'assembly pure.  
  
-   Le opzioni di virgola mobile per l'allineamento e la gestione delle eccezioni non sono modificabili per gli assembly pure.  Di conseguenza, non è possibile utilizzare \_\_declspec\(align\).  Questo rende alcuni file di intestazione, ad esempio fpieee.h, incompatibili con \/clr:pure.  
  
-   La funzione GetLastError di PSDK può presentare un comportamento indefinito durante la compilazione con **\/clr:pure**.  
  
## Verificabile \(\/clr:safe\)  
 L'opzione del compilatore **\/clr:safe** genera assembly verificabili, analoghi a quelli scritti in Visual Basic e C\#, e conformi ai requisiti che consentono a CLR \(Common Language Runtime\) di garantire che il codice non violi le impostazioni di sicurezza correnti.  Se ad esempio le impostazioni di sicurezza proibiscono a un componente di eseguire la scrittura su disco, CLR è in grado di controllare se un componente verificabile soddisfa tale criterio prima di eseguire qualsiasi parte del codice.  Gli assembly verificabili non supportano CRT \(tale supporto è disponibile per gli assembly pure grazie a una versione MSIL pure della libreria di runtime C\).  
  
 Rispetto agli assembly pure e misti, gli assembly verificabili offrono i vantaggi seguenti:  
  
-   Maggiore sicurezza.  
  
-   In alcune situazioni, ad esempio per i componenti SQL, una maggiore sicurezza risulta necessaria.  
  
-   Le versioni future di Windows richiederanno una sempre maggiore verificabilità di componenti e applicazioni.  
  
 Uno svantaggio è rappresentato dal fatto che le funzionalità di interoperabilità C\+\+ non sono disponibili.  Gli assembly verificabili non possono infatti contenere alcuna funzione non gestita o tipi di dati nativi, anche se il codice gestito non fa riferimento a essi.  
  
 Nonostante l'utilizzo del termine "safe" \(sicura\), la compilazione di applicazioni con **\/clr:safe** non implica l'assenza di bug, ma significa solo che CLR è in grado di controllare le impostazioni di sicurezza in fase di esecuzione.  
  
 Indipendentemente dal tipo di assembly, le chiamate a DLL native eseguite da assembly gestiti tramite P\/Invoke verranno compilate ma, a seconda delle impostazioni di sicurezza, potrebbero non riuscire in fase di esecuzione.  
  
> [!NOTE]
>  In un determinato scenario di codifica il passaggio del compilatore viene eseguito, ma viene generato un assembly non verificabile. Tale scenario è rappresentato dalla chiamata di una funzione virtuale tramite l'istanza di un oggetto utilizzando l'operatore di risoluzione dell'ambito.  Ad esempio: `MyObj -> A::VirtualFunction();`.  
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)