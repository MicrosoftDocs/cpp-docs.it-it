---
title: limitazioni di /CLR | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- /clr compiler option [C++], restrictions
ms.assetid: 385f6462-2c68-46d6-810e-469553ead447
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 34d21939f51fc3d4800d5cdd887b283b7e690db6
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704269"
---
# <a name="clr-restrictions"></a>Limitazioni di /clr

Tenere presente le restrizioni seguenti sull'utilizzo di **/clr**:

- In un gestore eccezioni strutturate, sono presenti restrizioni relative all'utilizzo `_alloca` durante la compilazione con **/clr**. Per ulteriori informazioni, vedere [alloca](../../c-runtime-library/reference/alloca.md).

- L'utilizzo di controlli degli errori di runtime non è valida con **/clr**. Per altre informazioni, vedere [Procedura: Usare controlli run-time nativi](/visualstudio/debugger/how-to-use-native-run-time-checks).

- Quando **/clr** viene utilizzato per compilare un programma che utilizza solo la sintassi C++ standard, le linee guida seguenti si applicano all'utilizzo di assembly inline:

  - Codice assembly inline che presuppone la conoscenza del layout dello stack nativo convenzioni all'esterno della funzione corrente o di altre informazioni di basso livello relative al computer di chiamata potrebbero non riuscire se knowledge applicato al frame dello stack per una funzione gestita. Le funzioni contenenti codice assembly inline vengono generate come funzioni non gestite, come se fossero inserite in un modulo separato che è stato compilato senza **/clr**.

  - Il codice assembly inline nelle funzioni che passano i parametri della funzione di copia costruita non è supportato.

- Il [funzioni vprintf](../../c-runtime-library/vprintf-functions.md) non può essere chiamato da un programma compilato con **/clr**.

- Il [naked](../../cpp/naked-cpp.md) [declspec](../../cpp/declspec.md) modificatore ignorato in /clr.

- Imposta la funzione di conversione [set_se_translator](../../c-runtime-library/reference/set-se-translator.md) influirà solo catch nel codice non gestito. Vedere [eccezioni](../../windows/exception-handling-cpp-component-extensions.md) per ulteriori informazioni.

- Il confronto dei puntatori a funzione non è consentito in **/clr**.

- Non è consentito l'utilizzo di funzioni senza prototipi completi in **/clr**.

- Le opzioni del compilatore seguenti non sono supportate con **/clr**:

  - **/ /EHsc** e **/EHs** (**/clr** implica **/EHa** (vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md))

  - **/fp: strict** e **/fp: tranne** (vedere [/fp (specifica il comportamento a virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md))

  - [/Zd](../../build/reference/z7-zi-zi-debug-information-format.md)

  - [/Gm](../../build/reference/gm-enable-minimal-rebuild.md)

  - [/MT](../../build/reference/md-mt-ld-use-run-time-library.md)

  - [/RTC](../../build/reference/rtc-run-time-error-checks.md)

  - [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md)

- La combinazione del `_STATIC_CPPLIB` definizione del preprocessore (`/D_STATIC_CPPLIB`) e **/clr** opzione del compilatore non è supportata. Ciò accade in quanto la definizione causerebbe l'applicazione a cui collegare lo statica multithread della libreria Standard C++, che non è supportato. Per ulteriori informazioni, vedere il [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md) argomento.

- Quando si utilizza **/Zi** con **/clr**, sono presenti le implicazioni sulle prestazioni. Per ulteriori informazioni, vedere [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).

- Il passaggio di un carattere wide a .NET Framework di routine di output senza specificare anche [/Zc: wchar_t](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) o senza eseguire il cast di carattere da `__wchar_t` determinerà l'output viene visualizzato come un `unsigned short int`. Ad esempio:

    ```cpp
    Console::WriteLine(L' ')              // Will output 32.
    Console::WriteLine((__wchar_t)L' ')   // Will output a space.
    ```

- [/GS](../../build/reference/gs-buffer-security-check.md) viene ignorato durante la compilazione con **/clr**, a meno che non è una funzione in `#pragma` [non gestito](../../preprocessor/managed-unmanaged.md) o se la funzione deve essere compilata come nativa, nel qual caso il compilatore genererà avviso C4793, che è disattivato per impostazione predefinita.

- Vedere [/ENTRY](../../build/reference/entry-entry-point-symbol.md) per i requisiti di firma di funzione di un'applicazione gestita.

- Le applicazioni compilate con **/openmp** e **/clr** può essere eseguito solo in un processo solo appdomain.  Vedere [/openmp (Attiva supporto OpenMP 2.0)](../../build/reference/openmp-enable-openmp-2-0-support.md) per ulteriori informazioni.

- Funzioni che accettano un numero variabile di argomenti (varargs) verranno generate come funzioni native. Verrà effettuato il marshalling di qualsiasi tipo di dati gestiti nella posizione dell'argomento variabile per i tipi nativi. Si noti che <xref:System.String?displayProperty=fullName> tipi sono stringhe a caratteri wide in realtà, ma viene effettuato il marshalling di stringhe di caratteri a byte singolo. Pertanto se un identificatore printf %S (wchar_t *), effettuerà il marshalling in una stringa %s invece.

- Quando si usa la macro va_arg, si potrebbero ottenere risultati imprevisti durante la compilazione con **/clr: pure**. Per ulteriori informazioni, vedere [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017. Codice che deve essere "pure" o "sicura" deve essere trasferito a c#.

- Deve essere chiamata da codice gestito, qualsiasi funzione che analizzare lo stack per ottenere informazioni sui parametri (argomenti); il livello di P/Invoke provoca tali informazioni per essere ulteriormente verso il basso dello stack.  Ad esempio, non compilare proxy/stub con **/clr**.

- Funzioni verranno compilate in codice gestito quando possibile, ma non tutti i costrutti C++ possono essere convertiti in codice gestito.  Questa operazione viene eseguita in base a una funzione dalla funzione. Se qualsiasi parte di una funzione non può essere convertito in codice gestito, l'intera funzione verrà convertito in codice nativo. I casi seguenti impediscono al compilatore di generare codice gestito.

  - Funzioni di supporto o thunk generato dal compilatore. I thunk nativi vengono generati per qualsiasi chiamata di funzione tramite un puntatore a funzione, incluse le chiamate di funzione virtuale.

  - Le funzioni che chiamano `setjmp` o `longjmp`.

  - Funzioni che utilizzano determinate routine intrinseche di modificare direttamente le risorse del computer. Ad esempio, l'utilizzo di `__enable` e `__disable`, `_ReturnAddress` e `_AddressOfReturnAddress`, o intrinseci multimediali verranno eseguita in codice nativo.

  - Le funzioni che seguono il `#pragma unmanaged` direttiva. (Si noti che l'operazione inversa, `#pragma managed`, è anche supportata.)

  - Una funzione che contiene riferimenti a tipi allineati, ovvero tipi dichiarati utilizzando `__declspec(align(...))`.

## <a name="see-also"></a>Vedere anche

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)
