---
title: "Procedura: eseguire la migrazione a /clr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/clr (opzione del compilatore) [C++], porting"
  - "compilazione di codice nativo [C++]"
  - "interoperabilità [C++], opzione del compilatore /clr"
  - "interoperabilità [C++], opzione del compilatore /clr"
  - "migrazione [C++], opzione del compilatore /clr"
  - "Visual C++ (aggiornamento di applicazioni), opzione del compilatore /clr"
ms.assetid: c9290b8b-436a-4510-8b56-eae51f4a9afc
caps.latest.revision: 37
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 37
---
# Procedura: eseguire la migrazione a /clr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono analizzati i problemi derivanti durante la compilazione di codice nativo con **\/clr** \(per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md)\).  **\/clr** consente ai moduli Visual C\+\+ di richiamare ed essere richiamati dagli assembly .NET durante il mantenimento di compatibilità con i moduli non gestiti.  Per ulteriori informazioni sui vantaggi offerti dalla compilazione con **\/clr**, vedere [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md) e [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md).  
  
## Problemi noti relativi alla compilazione di progetti di librerie con \/clr  
 Visual Studio presenta alcuni problemi noti durante la compilazione di progetti di librerie con **\/clr**:  
  
-   Il codice può eseguire query nei tipi in fase di esecuzione con [CRuntimeClass::FromName](../Topic/CRuntimeClass::FromName.md).  Tuttavia, se un tipo è incluso in un file con estensione dll MSIL \(compilato con **\/clr**\), la chiamata a [CRuntimeClass::FromName](../Topic/CRuntimeClass::FromName.md) potrebbe avere esito negativo se si verifica prima dei costruttori statici eseguiti nel file con estensione dll gestito \(questo problema non si verifica se la chiamata a FromName si verifica dopo che il codice è stato eseguito nel file con estensione dll gestito\).  Per aggirare questo problema è possibile imporre la costruzione del costruttore statico gestito definendo una funzione nel file con estensione dll gestito, esportandolo e richiamandolo dall'applicazione MFC nativa.  Di seguito è riportato un esempio.  
  
    ```  
    // Extension DLL Header file:  
    __declspec( dllexport ) void EnsureManagedInitialization () {  
       // managed code that won't be optimized away  
       System::GC::KeepAlive(System::Int32::MaxValue);  
    }  
    ```  
  
## Eseguire la compilazione con Visual C\+\+  
 Prima di utilizzare **\/clr** su un qualsiasi modulo del progetto, compilare e collegare il progetto nativo tramite Visual Studio 2010.  
  
 I passaggi riportati di seguito, da eseguire nell'ordine indicato, rappresentano la procedura più semplice per una compilazione con **\/clr**.  È importante che il progetto venga compilato ed eseguito dopo ognuno di questi passaggi.  
  
### Versioni precedenti a Visual C\+\+ 2003  
 Se si esegue l'aggiornamento in Visual Studio 2010 da una versione precedente a Visual C\+\+ 2003, è possibile riscontrare errori del compilatore connessi alla conformità standard C\+\+ avanzata di Visual C\+\+ 2003.  
  
### Aggiornamento da Visual C\+\+ 2003  
 È consigliabile che i progetti compilati in precedenza con Visual C\+\+ 2003 vengano inizialmente compilati senza **\/clr**, poiché in Visual Studio ora è stata incrementata la conformità agli standard ANSI\/ISO e sono state introdotte alcune modifiche che possono determinare interruzioni.  La modifica che sembra richiedere maggiore attenzione è illustrata nell'argomento [Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md).  È estremamente probabile che il codice che utilizza CRT produca avvisi negativi.  Sebbene sia possibile eliminare tali avvisi, è tuttavia preferibile eseguire una migrazione alle nuove [Versioni con sicurezza avanzata delle funzioni CRT](../c-runtime-library/security-enhanced-versions-of-crt-functions.md), che sono in grado di fornire una maggiore sicurezza e di individuare problemi di sicurezza all'interno del codice.  
  
### Aggiornamento dalle estensioni gestite per C\+\+  
 I progetti compilati con Visual C\+\+ .NET o Visual C\+\+ 2003 che hanno utilizzato le estensioni gestite per C\+\+ richiederanno almeno una modifica alle impostazioni di progetto, poiché tali estensioni sono ormai deprecate.  Di conseguenza, il codice scritto con le estensioni gestite per C\+\+ non verrà compilato in **\/clr**.  In alternativa, utilizzare **\/clr:oldSyntax**.  
  
## Convertire codice C in C\+\+  
 Sebbene Visual Studio sia in grado di compilare file C, è necessario convertirli in C\+\+ per una compilazione **\/clr**.  La modifica del nome file effettivo non è richiesta; è possibile utilizzare **\/Tp** \(vedere [\/Tc, \/Tp, \/TC, \/TP \(Specifica il tipo di file di origine\)](../build/reference/tc-tp-tc-tp-specify-source-file-type.md)\). Nonostante **\/clr** richieda i file di codice sorgente C\+\+, non è tuttavia necessario effettuare il refactoring del codice per utilizzare paradigmi orientati a oggetti.  
  
 È estremamente probabile che il codice C richieda modifiche se compilato come file C\+\+.  Le regole di indipendenza dai tipi C\+\+ sono rigorose, pertanto le conversioni dei tipi devono essere rese esplicite con i cast.  Ad esempio, malloc restituisce un puntatore void, ma può essere assegnato a un puntatore a qualsiasi tipo in C con un cast:  
  
```  
int* a = malloc(sizeof(int));   // C code  
int* b = (int*)malloc(sizeof(int));   // C++ equivalent  
```  
  
 Anche i puntatori a funzione sono rigorosamente indipendenti dai tipi in C\+\+ e quindi il codice C riportato di seguito richiede alcune modifiche.  In C\+\+ è consigliabile creare un `typedef` che definisca il tipo di puntatore a funzione e quindi utilizzare tale tipo per eseguire il cast dei puntatori a funzione:  
  
```  
NewFunc1 = GetProcAddress( hLib, "Func1" );   // C code  
typedef int(*MYPROC)(int);   // C++ equivalent  
NewFunc2 = (MYPROC)GetProcAddress( hLib, "Func2" );  
```  
  
 C\+\+ richiede inoltre che tali funzioni siano con prototipo o completamente definite per potervi fare riferimento o per essere richiamate.  
  
 Gli identificatori utilizzati nel codice C che risultano essere parole chiave in C\+\+ \(ad esempio `virtual`, `new`, `delete`, `bool`, `true`, `false` e così via\) devono essere rinominati.  Per eseguire questa operazione, è generalmente sufficiente eseguire semplici operazioni di ricerca e sostituzione.  
  
 Infine, mentre le chiamate COM di tipo C richiedono l'utilizzo esplicito di v\-table e del puntatore `this`, in C\+\+ questi non risultano necessari:  
  
```  
COMObj1->lpVtbl->Method(COMObj, args);  // C code  
COMObj2->Method(args);  // C++ equivalent  
```  
  
## Riconfigurare le impostazioni del progetto  
 Dopo aver compilato ed eseguito il progetto in Visual Studio 2010 è consigliabile creare nuove configurazioni di progetto per **\/clr** piuttosto che modificare le configurazioni predefinite.  **\/clr** è incompatibile con alcune opzioni del compilatore e la creazione di configurazioni separate consente di compilare il progetto come nativo o gestito.  Quando si seleziona **\/clr** nella finestra di dialogo delle pagine delle proprietà, le impostazioni del progetto non compatibili con **\/clr** vengono disabilitate \(e il ripristino delle opzioni disabilitate non avviene automaticamente quando si deseleziona **\/clr** in un secondo momento\).  
  
### Creare nuove configurazioni del progetto  
 È possibile utilizzare l'opzione **Copia impostazioni da** della [New Project Configuration Dialog Box](http://msdn.microsoft.com/it-it/cca616dc-05a6-4fe3-bdc1-40c72a66f2be) per creare una configurazione del progetto basata sulle relative impostazioni esistenti.  Questa operazione deve essere eseguita una volta per la configurazione per il debug e una per la configurazione per il rilascio.  Le modifiche successive possono quindi essere applicate esclusivamente alle configurazioni specifiche di **\/clr**, lasciando inalterate quelle originali relative al progetto.  
  
 I progetti che utilizzano regole di compilazione personalizzate potrebbero richiedere particolare attenzione.  
  
 Questo passaggio presenta implicazioni diverse per i progetti che utilizzano i makefile.  In questo caso è possibile configurare una destinazione di generazione separata o creare una versione specifica della compilazione **\/clr** a partire da una copia dell'originale.  
  
### Modificare le impostazioni del progetto  
 Per selezionare **\/clr** nell'ambiente di sviluppo, è sufficiente seguire le istruzioni fornite in [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  Come accennato in precedenza, questo passaggio consente di disabilitare automaticamente le impostazioni di progetto in conflitto.  
  
> [!NOTE]
>  Quando si aggiorna una libreria gestita o un progetto di servizi Web da Visual C\+\+ 2003, l'opzione del compilatore **\/Zl** viene aggiunta alla pagina delle proprietà **Riga di comando**.  Ciò determina l'errore LNK2001.  Per risolverlo, rimuovere **\/Zl** dalla pagina delle proprietà **Riga di comando**.  Per ulteriori informazioni, vedere [\/Zl \(Omette il nome della libreria predefinita\)](../build/reference/zl-omit-default-library-name.md) e [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md).  In alternativa, aggiungere msvcrt.lib e msvcmrt.lib alla proprietà **Dipendenze aggiuntive** del linker.  
  
 Nei progetti creati con makefile, le opzioni non compatibili del compilatore devono essere disabilitate manualmente dopo aver aggiunto **\/clr**.  Per informazioni sulle opzioni del compilatore non compatibili con **\/clr**, vedere \/[Limitazioni di \/clr](../build/reference/clr-restrictions.md).  
  
### Intestazioni precompilate  
 Le intestazioni precompilate sono supportate in **\/clr**.  Tuttavia, se si compilano alcuni dei file CPP con **\/clr** e i restanti come nativi, sarà necessario apportare determinate modifiche, poiché le intestazioni precompilate generate con **\/clr** non sono compatibili con quelle generate senza **\/clr**.  Tale incompatibilità è dovuta al fatto che **\/clr** genera e richiede metadati.  I moduli **\/clr** compilati non possono quindi utilizzare intestazioni precompilate che non includono metadati e i moduli non **\/clr** non possono utilizzare file di intestazione precompilati che contengono metadati.  
  
 Il modo più semplice per compilare un progetto in cui alcuni moduli sono **\/clr** compilati consiste nel disabilitare completamente le intestazioni precompilate \(nella finestra di dialogo Pagine delle proprietà del progetto aprire il nodo C\/C\+\+ e selezionare Intestazioni precompilate,  quindi modificare la proprietà Crea\/usa intestazioni precompilate in "Senza intestazioni precompilate"\).  
  
 Tuttavia, soprattutto per quanto riguarda i progetti di grandi dimensioni, le intestazioni precompilate garantiscono una più elevata velocità di compilazione e pertanto disabilitare questa funzionalità non è sempre consigliabile.  In questo caso la soluzione migliore consiste nel configurare i file **\/clr** e non **\/clr** in modo da utilizzare intestazioni precompilate separate.  Questo risultato può essere ottenuto con un unico passaggio, selezionando i moduli **\/clr** da compilare in Esplora soluzioni, facendo clic con il pulsante destro del mouse sul gruppo e scegliendo Proprietà.  A questo punto modificare entrambe le proprietà "Crea\/Usa PCH tramite file" e "File di intestazione precompilato" in modo da ricorrere a un diverso nome del file di intestazione e a un altro file PCH, rispettivamente.  
  
## Correzione degli errori  
 La compilazione con **\/clr** potrebbe provocare errori del compilatore, del linker o di runtime.  In questa sezione vengono illustrati i problemi più comuni.  
  
### Unione di metadati  
 Versioni diverse dei tipi di dati possono causare errori del linker dovuti al fatto che i metadati generati per i due tipi non corrispondono \(questo si verifica, in genere, quando i membri di un tipo vengono definiti in base a determinate condizioni, che tuttavia non sono le stesse per tutti i file CPP che utilizzano il tipo\). Questo provoca un errore del linker, che segnala solo il nome del simbolo e il nome del secondo file OBJ in cui il tipo è stato definito.  Spesso risulta utile alternare l'ordine di invio dei file OBJ al linker in modo da individuare la posizione dell'altra versione del tipo di dati.  
  
### Deadlock del blocco del caricatore  
 In Visual C\+\+ .NET e Visual C\+\+ 2003, l'inizializzazione in **\/clr** era suscettibile di deadlock non deterministico.  Il problema è noto come "deadlock del blocco del caricatore".  In Visual Studio 2010, il deadlock è più semplice da evitare, viene rilevato e segnalato al momento del runtime e non è più non deterministico.  Riscontrare il problema del blocco del caricatore è ancora possibile, ma ora risulta più facile evitarlo e risolverlo.  Per informazioni dettagliate, istruzioni e soluzioni, vedere [Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md).  
  
### Esportazioni di dati  
 L'esportazione di dati DLL è suscettibile di errori e non è pertanto consigliabile.  Questo si verifica perché non esiste alcuna garanzia che la sezione di dati di una DLL venga inizializzata fino a quando una parte gestita della DLL stessa risulta completamente eseguita.  Per fare riferimento ai metadati, utilizzare la [Direttiva \#using](../preprocessor/hash-using-directive-cpp.md).  
  
### Visibilità del tipo  
 I tipi nativi sono ora privati per impostazione predefinita,  mentre in Visual C\+\+ .NET 2002 e Visual C\+\+ 2003 erano pubblici.  Per questo motivo, un tipo nativo potrebbe non risultare visibile al di fuori della DLL.  L'errore può essere risolto aggiungendo `public` a tali tipi.  Per ulteriori informazioni, vedere [Visibilità di tipi e membri](../misc/type-and-member-visibility.md).  
  
### Problemi di allineamento e virgola mobile  
 `__controlfp` non è supportato in Common Language Runtime \(per ulteriori informazioni, vedere [\_control87, \_controlfp, \_\_control87\_2](../c-runtime-library/reference/control87-controlfp-control87-2.md)\).  CLR non rispetta inoltre [align](../cpp/align-cpp.md).  
  
### Inizializzazione COM  
 Common Language Runtime inizializza COM automaticamente quando viene inizializzato un modulo \(l'inizializzazione automatica di COM ne comporta la trasformazione in MTA\).  Di conseguenza, l'inizializzazione esplicita di COM genera codici restituiti a indicare che COM è già stato inizializzato.  Se si tenta di inizializzare COM in modo esplicito con un modello di threading quando CLR lo ha già inizializzato con un altro modello di threading, può verificarsi l'arresto dell'applicazione.  
  
 Common Language Runtime avvia COM come MTA per impostazione predefinita. Per modificare questa situazione, utilizzare [\/CLRTHREADATTRIBUTE \(Imposta l'attributo thread CLR\)](../build/reference/clrthreadattribute-set-clr-thread-attribute.md).  
  
### Problemi relativi alle prestazioni  
 Le prestazioni potrebbero registrare un peggioramento quando i metodi C\+\+ nativi generati per MSIL vengono chiamati indirettamente \(chiamate di funzione virtuale o utilizzo di puntatori a funzione\).  Per ulteriori informazioni, vedere [Doppio thunk](../dotnet/double-thunking-cpp.md).  
  
 Nel passaggio dal formato nativo a MSIL, è possibile che le dimensioni del working set aumentino.  Questo si verifica perché il Common Language Runtime fornisce numerose funzionalità che consentono di garantire la corretta esecuzione del programma.  Se l'applicazione **\/clr** non viene eseguita correttamente, è possibile attivare C4793 \(disattivato per impostazione predefinita\). Per ulteriori informazioni, vedere [Avviso del compilatore \(livelli 1 e 3\) C4793](../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md).  
  
### Arresti anomali al momento della chiusura  
 In alcuni casi CLR potrebbe chiudersi prima che il codice gestito abbia completato l'esecuzione.  Questo problema può verificarsi quando si utilizzano `std::set_terminate` e `SIGTERM`.  Per ulteriori informazioni, vedere [Costanti signal](../c-runtime-library/signal-constants.md) e [set\_terminate](../Topic/set_terminate%20\(%3Cexception%3E\).md).  
  
## Utilizzo di nuove funzionalità Visual C\+\+  
 Quando l'applicazione risulta compilata, collegata ed eseguita, è possibile iniziare a utilizzare le funzionalità .NET in qualsiasi modulo compilato con **\/clr**.  Per ulteriori informazioni, vedere [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).  
  
 Se sono state applicate le estensioni gestite per C\+\+, è possibile convertire il codice in modo da utilizzare la nuova sintassi.  Per un riepilogo delle differenze sintattiche, vedere [\(NOTINBUILD\)Managed Extensions for C\+\+ Syntax Upgrade Checklist](http://msdn.microsoft.com/it-it/edbded88-7ef3-4757-bd9d-b8f48ac2aada).  Per informazioni dettagliate sulla conversione delle estensioni gestite per C\+\+, vedere [Nozioni di base della migrazione in C\+\+\/CLI](../dotnet/cpp-cli-migration-primer.md).  
  
 Per informazioni sulla programmazione .NET in Visual C\+\+, vedere:  
  
-   [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)  
  
-   [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)  
  
-   [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)