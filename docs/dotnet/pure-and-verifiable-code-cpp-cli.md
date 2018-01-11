---
title: Codice pure e verificabile (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- /clr compiler option [C++], verifiable assemblies
- /clr compiler option [C++], mixed assemblies
- pure MSIL [C++]
- verifiable assemblies [C++]
- verifiably type-safe code [C++]
- /clr compiler option [C++], pure assemblies
- .NET Framework [C++], pure and verifiable code
- assemblies [C++], mixed code
- verifiable assemblies [C++], about verifiable assemblies
- mixed assemblies [C++], about mixed assemblies
- pure MSIL [C++], about pure code
- assemblies [C++], verifiable code
- mixed assemblies [C++]
- assemblies [C++], pure code
ms.assetid: 9050e110-fa11-4356-b56c-665187ff871c
caps.latest.revision: "31"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7bcaabb9f0a696a5eb7b01c4bd78757681e4e6a6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pure-and-verifiable-code-ccli"></a>Codice pure e verificabile (C++/CLI)
Per la programmazione .NET, Visual C++ supporta la creazione di tre tipi distinti di applicazioni e componenti: mista, pura e verificabile. Tutte e tre sono disponibili tramite il [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) l'opzione del compilatore.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sugli assembly verificabili, vedere:  
  
-   [Confronto tra le modalità mista, pura e verificabile (C++/CLI)](../dotnet/mixed-pure-and-verifiable-feature-comparison-cpp-cli.md)  
  
-   [Procedura: migrare a /clr: pure (C + c++ /CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)  
  
-   [Procedura: Creare progetti C++ verificabili (C++/CLI)](../dotnet/how-to-create-verifiable-cpp-projects-cpp-cli.md)  
  
-   [Procedura: eseguire la migrazione a /CLR: safe (C + c++ /CLI)](../dotnet/how-to-migrate-to-clr-safe-cpp-cli.md)  
  
-   [Uso di assembly verificabili con SQL Server (C++/CLI)](../dotnet/using-verifiable-assemblies-with-sql-server-cpp-cli.md)  
  
-   [Procedure di sicurezza consigliate](../security/security-best-practices-for-cpp.md)  
  
-   [Conversione di progetti da modalità mista a linguaggio intermedio puro](../dotnet/converting-projects-from-mixed-mode-to-pure-intermediate-language.md)  
  
## <a name="mixed-clr"></a>Misto (o clr)  
 Assembly misti (compilati con **/clr**), contengono entrambi non gestita e parti gestite, consentendo loro di utilizzare le funzionalità di .NET, ma contengono codice non gestito. In questo modo, applicazioni e componenti da aggiornare utilizzare le funzionalità .NET senza la necessità di riscrivere l'intero progetto. L'utilizzo di Visual C++ per combinare codice gestito e in questo modo viene definito l'interoperabilità C++. Per ulteriori informazioni, vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e Native](../dotnet/native-and-dotnet-interoperability.md).  
  
## <a name="pure-clrpure"></a>Pure (o /CLR: pure)  
 Assembly puri (compilati con **/clr: pure**) può contenere entrambi i tipi di dati gestiti e nativi, ma solo funzioni gestite. Analogamente agli assembly misti, gli assembly pure consentono l'interoperabilità con DLL native tramite P/Invoke (vedere [utilizzo esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)), ma non sono disponibili funzionalità di interoperabilità C++. Inoltre, gli assembly pure grado di esportare funzioni che possono essere chiamate da funzioni native perché un assembly pure utilizzano punti di ingresso di [clrcall](../cpp/clrcall.md) convenzione di chiamata.  
  
### <a name="advantages-of-clrpure"></a>Vantaggi offerti da /clr: pure  
  
-   Prestazioni migliori: Poiché gli assembly pure contengono solo codice MSIL, non sono presenti funzioni native, e pertanto non presenta alcuna transizione gestiti/non gestiti non sono necessaria. (Chiamate di funzione effettuate tramite P/Invoke sono un'eccezione a questa regola).  
  
-   Compatibilità con AppDomain: Le funzioni gestite e tipi di dati CLR presenti all'interno di `Application Domains`, che interessa la visibilità e accessibilità. Assembly puri sono compatibili con dominio ( declspec ([appdomain](../cpp/appdomain.md)) è implicita per ogni tipo) in modo l'accesso a funzionalità e i tipi relativi da altri componenti .NET è più semplice e sicura. Di conseguenza, gli assembly pure interagiscono più facilmente con altri componenti .NET rispetto agli assembly misti.  
  
-   Il caricamento non su disco: gli assembly Pure possono essere caricati in memoria e trasmessi. È essenziale per l'utilizzo di assembly .NET come stored procedure. Questo comportamento è diverso dall'assembly misti, che a causa di una dipendenza di Windows, meccanismi di caricamento deve essere presente sul disco per l'esecuzione.  
  
-   Attenzione: Non è possibile effettuare la reflection di eseguibili misti, mentre gli assembly pure forniscono il supporto completo di reflection. Per ulteriori informazioni, vedere [Reflection (C + + CLI)](../dotnet/reflection-cpp-cli.md).  
  
-   Controllabilità dell'host: Poiché gli assembly pure contengono solo codice MSIL, hanno un comportamento più prevedibile e flessibile di mista assembly quando sono utilizzati nelle applicazioni che ospitano Common Language Runtime e modificare il comportamento predefinito.  
  
### <a name="limitations-of-clrpure"></a>Limitazioni di /clr: pure  
 Questa sezione descrive le funzionalità attualmente non supportate da **/clr: pure**.  
  
-   Assembly puri non può essere chiamato da funzioni non gestite. Assembly puri pertanto non può implementare interfacce COM o esporre callback nativi. Tipi di assembly non è possibile esportare funzioni tramite dllexport o. DEF (file). Inoltre, le funzioni dichiarate con la \_convenzione clrcall non può essere importato tramite \__declspec(dllimport). Le funzioni in un modulo nativo possono essere chiamate da un assembly puro, ma gli assembly pure non possono esporre funzioni chiamabili native, in modo da esporre la funzionalità in un assembly pura devono essere eseguite tramite le funzioni gestite in un assembly misto. Vedere [procedura: migrare a /clr: pure (C + + CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md) per ulteriori informazioni.  
  
-   Librerie MFC e ATL non sono supportate dalla compilazione in modalità pure in Visual C++.  
  
-   I file .netmodule puri non sono accettati come input dal linker di Visual C++. Tuttavia, i file obj pure vengono accettati dal linker e i file obj contengono un superset di informazioni contenute nel file. Vedere [file con estensione netmodule come Input del Linker](../build/reference/netmodule-files-as-linker-input.md) per ulteriori informazioni.  
  
-   Supporto COM del compilatore (#import) non è supportato in questa situazione provocherebbe istruzioni non gestite nell'assembly pure.  
  
-   Opzioni per l'allineamento e la gestione delle eccezioni non sono modificabili per assembly puri virgola mobile. Di conseguenza, __declspec(align) non può essere utilizzato. Si esegue il rendering di alcuni file di intestazione, ad esempio fpieee. h, non è compatibile con /clr: pure.  
  
-   La funzione GetLastError di PSDK può presentare un comportamento indefinito durante la compilazione con **/clr: pure**.  
  
## <a name="verifiable-clrsafe"></a>Verificabili (o /CLR: safe)  
 Il **/CLR: safe** l'opzione del compilatore genera assembly verificabili, analoghi a quelli scritti in Visual Basic e c#, conformi ai requisiti che consentono a common language runtime (CLR) per garantire che il codice non violino corrente impostazioni di sicurezza. Ad esempio, se le impostazioni di sicurezza impediscono un componente di scrittura su disco, CLR può determinare se un componente verificabile soddisfa questo criterio prima di eseguire qualsiasi parte del codice. Non è presente alcun supporto CRT per assembly verificabili. (Supporto CRT è disponibile per gli assembly pure tramite una versione MSIL Pure della libreria di Runtime C).  
  
 Assembly verificabili offrono i vantaggi rispetto agli assembly misti e puri:  
  
-   Una maggiore sicurezza.  
  
-   Alcune situazioni richiedono (componenti SQL, ad esempio).  
  
-   Versioni future di Windows richiederà sempre più componenti e applicazioni per essere verificabile.  
  
 Uno svantaggio è che le funzionalità di interoperabilità C++ non sono disponibili. Assembly verificabili non può contenere qualsiasi funzione non gestita o tipi di dati nativi, anche se non viene fatto riferimento dal codice gestito.  
  
 Nonostante l'uso della parola "safe", la compilazione di applicazioni con **/CLR: safe** non significa che non sono non sono presenti errori, significa semplicemente che CLR è possibile verificare le impostazioni di sicurezza in fase di esecuzione.  
  
 Indipendentemente dal tipo di assembly, le chiamate effettuate da assembly gestiti DLL native tramite P/Invoke verranno compilato, ma potrebbero non riuscire in fase di esecuzione a seconda delle impostazioni di sicurezza.  
  
> [!NOTE]
>  È uno scenario di codifica che verrà passato al compilatore, ma viene generato un assembly non verificabile: chiamare una funzione virtuale con un'istanza dell'oggetto utilizzando l'operatore di risoluzione dell'ambito.  Ad esempio: `MyObj -> A::VirtualFunction();`.  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)