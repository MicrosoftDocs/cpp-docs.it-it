---
title: Limitazioni di /clr
ms.date: 11/04/2016
helpviewer_keywords:
- /clr compiler option [C++], restrictions
ms.assetid: 385f6462-2c68-46d6-810e-469553ead447
ms.openlocfilehash: 205345a4261f5db8eb80b3bda6e5ea55544a33d0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50639346"
---
# <a name="clr-restrictions"></a>Limitazioni di /clr

Tenere presente le restrizioni seguenti sull'utilizzo degli **/clr**:

- In un gestore di eccezioni strutturate, esistono restrizioni sull'utilizzo `_alloca` durante la compilazione con **/clr**. Per altre informazioni, vedere [alloca](../../c-runtime-library/reference/alloca.md).

- Non è valida con l'uso di controlli degli errori di run-time **/clr**. Per altre informazioni, vedere [Procedura: Usare controlli run-time nativi](/visualstudio/debugger/how-to-use-native-run-time-checks).

- Quando **/clr** viene usato per compilare un programma che usa solo la sintassi C++ standard, le linee guida seguenti si applicano all'utilizzo di assembly inline:

  - Codice assembly inline che presuppone la conoscenza del layout dello stack nativo, le convenzioni di fuori di funzione corrente, o altre informazioni di basso livello relative al computer di chiamata potrebbero non riuscire se knowledge applicato al frame dello stack per una funzione gestita. Le funzioni contenenti codice assembly inline vengono generate come funzioni non gestite, come se fossero inserite in un modulo separato che è stato compilato senza **/clr**.

  - Il codice assembly inline nelle funzioni che passano i parametri di funzione di copia costruita non è supportato.

- Il [funzioni vprintf](../../c-runtime-library/vprintf-functions.md) non può essere chiamato da un programma compilato con **/clr**.

- Il [naked](../../cpp/naked-cpp.md) [declspec](../../cpp/declspec.md) modificatore viene ignorato in /clr.

- La funzione di conversione l'impostazione [set_se_translator](../../c-runtime-library/reference/set-se-translator.md) influirà solo catch nel codice non gestito. Visualizzare [gestione delle eccezioni](../../windows/exception-handling-cpp-component-extensions.md) per altre informazioni.

- Il confronto dei puntatori a funzione non è consentito in **/clr**.

- L'uso delle funzioni che non sono con prototipo completo non è consentito in **/clr**.

- Le opzioni del compilatore seguenti non sono supportate con **/clr**:

  - **/ /EHsc** e **/EHs** (**/clr** implica **/EHa** (vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md))

  - **/fp: strict** e **/fp: tranne** (vedere [/fp (specifica il comportamento della virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md))

  - [/Zd](../../build/reference/z7-zi-zi-debug-information-format.md)

  - [/Gm](../../build/reference/gm-enable-minimal-rebuild.md)

  - [/MT](../../build/reference/md-mt-ld-use-run-time-library.md)

  - [/RTC](../../build/reference/rtc-run-time-error-checks.md)

  - [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md)

- La combinazione dei `_STATIC_CPPLIB` definizione del preprocessore (`/D_STATIC_CPPLIB`) e il **/clr** opzione del compilatore non è supportata. Ciò accade in quanto la definizione comporterebbe l'applicazione a cui collegare lo statica multithread della libreria Standard C++, che non è supportato. Per altre informazioni, vedere la [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md) argomento.

- Quando si usa **/Zi** con **/clr**, esistono implicazioni sulle prestazioni. Per altre informazioni, vedere [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).

- Il passaggio di un carattere wide a un Framework .NET di routine di output senza specificare anche [/Zc: wchar_t](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) o senza il carattere di eseguire il cast `__wchar_t` determinerà l'output venga visualizzato come un `unsigned short int`. Ad esempio:

    ```cpp
    Console::WriteLine(L' ')              // Will output 32.
    Console::WriteLine((__wchar_t)L' ')   // Will output a space.
    ```

- [/GS](../../build/reference/gs-buffer-security-check.md) viene ignorato durante la compilazione con **/clr**, a meno che una funzione si trova nella `#pragma` [non gestite](../../preprocessor/managed-unmanaged.md) o se la funzione deve essere compilata in codice nativo, nel qual caso il compilatore genererà avviso C4793, che è disattivata per impostazione predefinita.

- Visualizzare [/ENTRY](../../build/reference/entry-entry-point-symbol.md) per requisiti relativi alle firme di funzione di un'applicazione gestita.

- Le applicazioni compilate con **/openmp** e **/clr** può essere eseguito solo in un processo di appdomain singoli.  Visualizzare [/openmp (Attiva supporto OpenMP 2.0)](../../build/reference/openmp-enable-openmp-2-0-support.md) per altre informazioni.

- Le funzioni che accettano un numero variabile di argomenti (varargs) verranno generate come funzioni native. Verrà effettuato il marshalling di qualsiasi tipo di dati gestiti nella posizione dell'argomento variabile tipi nativi. Si noti che <xref:System.String?displayProperty=fullName> tipi sono stringhe a caratteri wide in realtà, ma viene effettuato il marshalling di stringhe di caratteri a byte singolo. Pertanto, se un identificatore di printf %S (wchar_t *), effettuerà il marshalling a una stringa %s invece.

- Quando si usa il va_arg (macro), si potrebbero ottenere risultati imprevisti durante la compilazione con **/clr: pure**. Per altre informazioni, vedere [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017. Il codice che deve essere "puro" o "sicura" deve essere trasferito a C#.

- Non chiamare, dal codice gestito, qualsiasi funzione che analizzare lo stack per ottenere informazioni sul parametro (argomenti di funzione;) il livello di P/Invoke fa in modo che tali informazioni per essere ulteriormente verso il basso dello stack.  Ad esempio, non compilare proxy/stub con **/clr**.

- Funzioni verranno compilate in codice gestito quando possibile, ma non tutti i costrutti C++ possono essere tradotta in codice gestito.  Questa determinazione viene effettuata in base a una funzione per funzione. Se qualsiasi parte di una funzione non può essere convertito in codice gestito, l'intera funzione verrà convertito in codice nativo. I seguenti casi impediscono al compilatore di generare codice gestito.

  - Thunk generato dal compilatore o funzioni di supporto. Thunk native vengono generate per qualsiasi chiamata di funzione tramite un puntatore a funzione, incluse le chiamate di funzione virtuale.

  - Le funzioni che chiamano `setjmp` o `longjmp`.

  - Funzioni che usano alcune routine intrinseci di modificare direttamente le risorse del computer. Ad esempio, l'uso del `__enable` e `__disable`, `_ReturnAddress` e `_AddressOfReturnAddress`, o intrinseci multimediali verranno eseguita in codice nativo.

  - Le funzioni che seguono il `#pragma unmanaged` direttiva. (Si noti che l'operazione inversa, `#pragma managed`, è anche supportato.)

  - Una funzione che contiene riferimenti a tipi allineati, vale a dire, tipi dichiarati utilizzando `__declspec(align(...))`.

## <a name="see-also"></a>Vedere anche

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)
