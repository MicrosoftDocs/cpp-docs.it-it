---
title: "Limitazioni di /clr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/clr (opzione del compilatore) [C++], restrizioni"
ms.assetid: 385f6462-2c68-46d6-810e-469553ead447
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# Limitazioni di /clr
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'utilizzo di **\/clr** è soggetto alle restrizioni riportate di seguito:  
  
-   In un gestore eccezioni strutturate sono previste limitazioni sull'utilizzo di `_alloca` durante la compilazione con **\/clr**.  Per ulteriori informazioni, vedere [\_alloca](../../c-runtime-library/reference/alloca.md).  
  
-   Non è possibile eseguire il controllo degli errori di runtime con **\/clr**.  Per ulteriori informazioni, vedere [Controlli di runtime](../Topic/How%20to:%20Use%20Native%20Run-Time%20Checks.md).  
  
-   Quando si compila un programma che utilizza solo sintassi C\+\+ standard con **\/clr**, le indicazioni fornite di seguito sono valide per l'utilizzo di assembly inline:  
  
    -   Il codice assembly inline che presuppone la conoscenza del layout dello stack nativo, le convenzioni di chiamata al di fuori della funzione di chiamata o altre informazioni di basso livello sul computer potrebbero non essere eseguite correttamente se quella conoscenza viene applicata allo stack frame di una funzione gestita.  Le funzioni contenenti codice assembly inline vengono generate come funzioni non gestite, come se fossero inserite in un modulo separato compilato senza **\/clr**.  
  
    -   Il codice assembly inline nelle funzioni che passano parametri di funzione tramite costruttore copia non è supportato.  
  
-   Le funzioni [vprintf](../../c-runtime-library/vprintf-functions.md) non possono essere chiamate da un programma compilato con **\/clr**.  
  
-   Il modificatore [naked](../../cpp/naked-cpp.md) [\_\_declspec](../../cpp/declspec.md) è ignorato in \/clr.  
  
-   La funzione del traduttore impostata da [\_set\_se\_translator](../../c-runtime-library/reference/set-se-translator.md) influenzerà solo i catch nel codice non gestito.  Per ulteriori informazioni, vedere [Exception Handling](../../windows/exception-handling-cpp-component-extensions.md).  
  
-   Il confronto dei puntatori a funzione non è consentito in **\/clr**.  
  
-   L'utilizzo di funzioni senza prototipi completi non è consentito in **\/clr**.  
  
-   Le opzioni del compilatore seguenti non sono supportate con **\/clr**:  
  
    -   **\/EHsc** e **\/EHs** \(**\/clr** implica **\/EHa**. Al riguardo, vedere [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md)\)  
  
    -   **\/fp:strict** e **\/fp:except** \(vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../../build/reference/fp-specify-floating-point-behavior.md)\)  
  
    -   [\/Zd](../../build/reference/z7-zi-zi-debug-information-format.md)  
  
    -   [\/Gm](../../build/reference/gm-enable-minimal-rebuild.md)  
  
    -   [\/MT](../../build/reference/md-mt-ld-use-run-time-library.md)  
  
    -   [\/RTC](../../build/reference/rtc-run-time-error-checks.md)  
  
    -   **\/ZI**  
  
-   La combinazione della definizione del preprocessore `_STATIC_CPPLIB` \(`/D_STATIC_CPPLIB`\) e dell'opzione del compilatore **\/clr** o **\/clr:pure** non è supportata.  Ciò accade in quanto la definizione causerebbe il collegamento dell'applicazione alla Libreria standard di C\+\+ statica con multithreading che non è supportata.  Per ulteriori informazioni, vedere l'argomento [\/MD, \/MT, \/LD \(Utilizza la libreria di runtime\)](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
-   [\/J](../../build/reference/j-default-char-type-is-unsigned.md) non è supportata con **\/clr:safe** né con **\/clr:pure**.  
  
-   Le librerie MFC e ATL non sono supportate dalla compilazione in modalità pure \(**\/clr:pure**\).  È possibile utilizzare **\/clr:pure** con la libreria standard di C\+\+ e CRT se si compila anche con **\/MD** o **\/MDd**.  
  
-   L'utilizzo di **\/Zi** con **\/clr** influisce sulle prestazioni.  Per ulteriori informazioni, vedere [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
-   Se si passa un carattere di tipo "wide" a una routine di output di .NET Framework senza specificare anche [\/Zc:wchar\_t](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) o senza eseguire il cast del carattere a `__wchar_t`, l'output viene visualizzato come `unsigned short int`.  Di seguito è riportato un esempio.  
  
    ```  
    Console::WriteLine(L' ')              // Will output 32.  
    Console::WriteLine((__wchar_t)L' ')   // Will output a space.  
    ```  
  
-   [\/GS](../../build/reference/gs-buffer-security-check.md) viene ignorato durante la compilazione con **\/clr**, a meno che una funzione non sia in `#pragma` [unmanaged](../../preprocessor/managed-unmanaged.md) o debba essere compilata come nativa. In questo caso, il compilatore genererà l'avviso C4793, disattivato per impostazione predefinita.  
  
-   Per i requisiti relativi alle firme di funzioni di un'applicazione gestita, vedere [\/ENTRY](../../build/reference/entry-entry-point-symbol.md).  
  
-   Le applicazioni compilate con **\/openmp** e **\/clr** possono essere eseguite solo in un singolo processo di dominio applicazione.  Per ulteriori informazioni, vedere [\/openmp \(Attiva supporto OpenMP 2.0\)](../../build/reference/openmp-enable-openmp-2-0-support.md).  
  
-   Le funzioni che accettano un numero variabile di argomenti \(varargs\) saranno generate come funzioni native.  Verrà eseguito il marshalling fra qualsiasi tipo di dati gestito nella posizione dell'argomento variabile e i tipi nativi.  Benché i tipi <xref:System.String?displayProperty=fullName> siano in realtà stringhe di caratteri estesi, ne viene eseguito il marshalling in stringhe di caratteri a byte singolo.  Verrà, ad esempio, eseguito il marshalling fra un identificatore printf %S \(wchar\_t\*\) e una stringa %s.  
  
-   Quando si utilizza la macro va\_arg, è possibile che la compilazione con **\/clr:pure** generi risultati imprevisti.  Per ulteriori informazioni, vedere [va\_arg, va\_copy, va\_end, va\_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md).  
  
-   Se l'applicazione passa un argomento di tipo [va\_list](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) a una funzione dichiarata per accettare [numero variabile di argomenti](../../misc/variable-argument-lists.md), e l'applicazione viene compilata con **\/clr:pure**, il CLR genera <xref:System.NotSupportedException>.  Se **\/clr**  viene utilizzato invece le funzioni interessate sono compilate in codice nativo ed eseguono correttamente.  Se viene utilizzato **\/clr:safe**, viene generata una diagnostica degli errori.  
  
-   Dal codice gestito non deve essere chiamata alcuna funzione che analizza lo stack per ottenere informazioni sui parametri \(argomenti di funzione\): il livello P\/Invoke fa sì che tali informazioni si trovino più in basso nello stack.  Ad esempio, non compilare proxy\/stub con **\/clr**.  
  
-   Se possibile, le funzioni verranno sempre compilate in codice gestito, ma non tutti i costrutti C\+\+ possono essere convertiti in codice gestito.  Questo viene determinato in base a ogni singola funzione.  Se non è possibile convertire in codice gestito una parte qualsiasi della funzione, l'intera funzione verrà convertita in codice nativo.  Nei casi indicati di seguito verrà impedito al compilatore di generare codice gestito.  
  
    -   Funzioni di supporto o thunk generati dal compilatore.  I thunk nativi vengono generati per ciascuna chiamata di funzione eseguita tramite un puntatore a funzione, incluse le chiamate di funzioni virtuali.  
  
    -   Funzioni che chiamano `setjmp` o `longjmp`.  
  
    -   Funzioni che utilizzano determinate routine intrinseche per gestire direttamente le risorse del computer.  Ad esempio, l'utilizzo di `__enable` e `__disable`, di `_ReturnAddress` e `_AddressOfReturnAddress` o di intrinseci multimediali fa sì che la compilazione venga eseguita in codice nativo.  
  
    -   Funzioni che seguono la direttiva `#pragma unmanaged`. È anche supportata la direttiva opposta, `#pragma managed`.  
  
    -   Funzioni contenenti riferimenti a tipi allineati, ovvero dichiarati tramite `__declspec(align(...))`.  
  
-   Non è possibile utilizzare le classi [Supporto COM del compilatore](../../cpp/compiler-com-support.md) con **\/clr:pure** né con **\/clr:safe**.  
  
## Vedere anche  
 [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)