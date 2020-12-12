---
description: 'Altre informazioni su: restrizioni/CLR'
title: Limitazioni di /clr
ms.date: 11/04/2016
helpviewer_keywords:
- /clr compiler option [C++], restrictions
ms.assetid: 385f6462-2c68-46d6-810e-469553ead447
ms.openlocfilehash: eb74aea8f1d6fcae4738f17f5fae2a4761350341
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193006"
---
# <a name="clr-restrictions"></a>Limitazioni di /clr

L'uso di **/clr** è soggetto alle limitazioni seguenti:

- In un gestore di eccezioni strutturato sono applicate alcune limitazioni all'uso di `_alloca` in caso di compilazione con **/clr**. Per altre informazioni, vedere [_alloca](../../c-runtime-library/reference/alloca.md).

- L'esecuzione di controlli degli errori di run-time non è supportata con **/clr**. Per altre informazioni, vedere [Procedura: Usare controlli run-time nativi](/visualstudio/debugger/how-to-use-native-run-time-checks).

- Quando **/clr** viene usato per compilare un programma che usa solo la sintassi standard di C++, all'uso dell'assembly inline si applicano le linee guida seguenti:

  - L'esecuzione del codice assembly inline che presuppone la conoscenza del layout pila nativo, delle convenzioni di chiamata all'esterno della funzione corrente o di altre informazioni di basso livello sul computer potrebbe non riuscire se tale codice viene applicato allo stack frame di una funzione gestita. Le funzioni che contengono codice assembly inline vengono generate come funzioni non gestite, come se fossero inserite in un modulo distinto compilato senza **/clr**.

  - Il codice assembly inline nelle funzioni che passano parametri di funzione creati tramite copy constructor non è supportato.

- Le [funzioni vprintf](../../c-runtime-library/vprintf-functions.md) non possono essere chiamate da un programma compilato con **/clr**.

- Il modificatore [naked](../../cpp/naked-cpp.md) [__declspec](../../cpp/declspec.md) viene ignorato in /clr.

- La funzione di conversione impostata da [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md) ha effetto solo sui catch nel codice non gestito. Per altre informazioni, vedere [Gestione delle eccezioni](../../extensions/exception-handling-cpp-component-extensions.md).

- Il confronto di puntatori a funzione non è consentito in **/clr**.

- L'uso di funzioni che non hanno un prototipo completo non è consentito in **/clr**.

- Le opzioni del compilatore seguenti non sono supportate con **/clr**:

  - **/EHsc** e **/EHs** (**/clr** implica **/EHa** (vedere [/EH (Modello di gestione delle eccezioni)](eh-exception-handling-model.md))

  - **/fp:strict** e **/fp:except** (vedere [/fp (Specifica il comportamento della virgola mobile)](fp-specify-floating-point-behavior.md))

  - [/Zd](z7-zi-zi-debug-information-format.md)

  - [/GM](gm-enable-minimal-rebuild.md)

  - [/MT](md-mt-ld-use-run-time-library.md)

  - [/RTC](rtc-run-time-error-checks.md)

  - [/ZI](z7-zi-zi-debug-information-format.md)

- La combinazione della definizione del preprocessore `_STATIC_CPPLIB` (`/D_STATIC_CPPLIB`) con l'opzione del compilatore **/clr** non è supportata. A causa della definizione, infatti, l'applicazione si collegherebbe con la libreria standard C++ statica multithreading e tale collegamento non è supportato. Per altre informazioni, vedere l'argomento [/MD, /MT, /LD (utilizzo della libreria di runtime)](md-mt-ld-use-run-time-library.md).

- L'uso di **/Zi** con **/clr** ha implicazioni a livello di prestazioni. Per altre informazioni, vedere [/Zi](z7-zi-zi-debug-information-format.md).

- Il passaggio di un carattere wide a una routine di output .NET Framework senza specificare anche [/Zc: wchar_t](zc-wchar-t-wchar-t-is-native-type.md) o senza eseguire il cast del carattere a **`__wchar_t`** comporterà la visualizzazione dell'output come `unsigned short int` . Ad esempio:

    ```cpp
    Console::WriteLine(L' ')              // Will output 32.
    Console::WriteLine((__wchar_t)L' ')   // Will output a space.
    ```

- [/GS](gs-buffer-security-check.md) viene ignorato in caso di compilazione con **/clr**, a meno che non sia presente una funzione in `#pragma` [non gestito](../../preprocessor/managed-unmanaged.md) o se la funzione deve essere compilata per il codice nativo, nel qual caso il compilatore genera l'avviso C4793, che è disattivato per impostazione predefinita.

- Vedere [/ENTRY](entry-entry-point-symbol.md) per i requisiti di firma della funzione di un'applicazione gestita.

- Le applicazioni compilate con **/openmp** e **/clr** possono essere eseguite solo in un singolo processo AppDomain.  Per altre informazioni, vedere [/openmp (Attiva supporto OpenMP 2.0)](openmp-enable-openmp-2-0-support.md).

- Le funzioni che accettano un numero variabile di argomenti (varargs) verranno generate come funzioni native. Se nella posizione dell'argomento variabile sono presenti tipi di dati gestiti, ne verrà eseguito il marshalling a tipi nativi. Si noti che i tipi <xref:System.String?displayProperty=fullName> sono effettivamente stringhe di caratteri wide, ma ne viene eseguito il marshalling a stringhe di caratteri a un byte. Se quindi un identificatore printf è %S (wchar_t*), ne verrà eseguito il marshalling a una stringa %s.

- L'uso della macro va_arg potrebbe generare risultati imprevisti in caso di compilazione con **/clr:pure**. Per altre informazioni, vedere [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md). Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017 e versioni successive. Il codice che deve essere "puro" o "sicuro" deve essere trasferito in C#.

- Non è consigliabile chiamare, da codice gestito, funzioni che percorrono lo stack per ottenere informazioni sui parametri (argomenti di funzione), in quanto a causa del livello P/Invoke queste informazioni si trovano più in basso nello stack.  Ad esempio, non compilare proxy/stub con **/clr**.

- Le funzioni vengono compilate in codice gestito dove possibile, ma non tutti i costrutti C++ possono essere convertiti in codice gestito.  Questa possibilità viene determinata da funzione a funzione. Se una qualsiasi parte di una funzione non può essere convertita in codice gestito, l'intera funzione viene convertita in codice nativo. Il compilatore non è in grado di generare codice gestito nei casi seguenti.

  - Funzioni helper o thunk generati dal compilatore. I thunk nativi vengono generati per qualsiasi chiamata di funzione tramite un puntatore a funzione, incluse le chiamate di funzioni virtuali.

  - Funzioni che chiamano `setjmp` o `longjmp`.

  - Funzioni che usano alcune routine intrinseche per modificare direttamente le risorse del computer. Ad esempio, l'uso di `__enable` e `__disable`, `_ReturnAddress` e `_AddressOfReturnAddress` o di intrinseci multimediali produrrà in tutti i casi codice nativo.

  - Funzioni che seguono la direttiva `#pragma unmanaged`. Si noti che è supportata anche la direttiva inversa, `#pragma managed`.

  - Una funzione che contiene riferimenti a tipi allineati, ossia tipi dichiarati tramite `__declspec(align(...))`.

## <a name="see-also"></a>Vedi anche

- [/CLR (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md)
