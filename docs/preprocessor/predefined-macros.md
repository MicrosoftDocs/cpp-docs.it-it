---
title: Macro predefinite | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _ATL_VER
- __ATOM__
- __AVX__
- __AVX2__
- _CHAR_UNSIGNED
- __CLR_VER
- _CONTROL_FLOW_GUARD
- __COUNTER__
- __cplusplus
- __cplusplus_cli
- __cplusplus_winrt
- _CPPRTTI
- _CPPUNWIND
- __DATE__
- _DEBUG
- _DLL
- __FILE__
- __FUNCDNAME__
- __FUNCSIG__
- __FUNCTION__
- _INTEGRAL_MAX_BITS
- _ISO_VOLATILE
- _KERNEL_MODE
- __LINE__
- _M_AMD64
- _M_ARM
- _M_ARM_ARMV7VE
- _M_ARM_FP
- _M_ARM64
- _M_CEE
- _M_CEE_PURE
- _M_CEE_SAFE
- _M_FP_EXCEPT
- _M_FP_FAST
- _M_FP_PRECISE
- _M_FP_STRICT
- _M_IX86
- _M_IX86_FP
- _M_X64
- _MANAGED
- _MFC_VER
- _MSC_BUILD
- _MSC_EXTENSIONS
- _MSC_FULL_VER
- _MSC_VER
- _MSVC_LANG
- __MSVC_RUNTIME_CHECKS
- _MT
- _NATIVE_WCHAR_T_DEFINED
- _NO_SIZED_DEALLOCATION
- _OPENMP
- _PREFAST_
- _RESUMABLE_FUNCTIONS_SUPPORTED
- _RTC_CONVERSION_CHECKS_ENABLED
- __STDC__
- __STDC_HOSTED__
- __STDCPP_THREADS__
- __TIME__
- __TIMESTAMP__
- __VA_ARGS__
- _VC_NODEFAULTLIB
- _WCHAR_T_DEFINED
- _WIN32
- _WIN64
- _WINRT_DLL
- __func__
dev_langs: C++
helpviewer_keywords:
- timestamps, preprocessor macro
- cl.exe compiler, version number
- version numbers, C/C++ compiler (cl.exe)
- macros, predefined C++
- preprocessor, macros
- predefined macros
- _ATL_VER macro
- __ATOM__ macro
- __AVX__ macro
- __AVX2__ macro
- _CHAR_UNSIGNED macro
- __CLR_VER macro
- _CONTROL_FLOW_GUARD macro
- __COUNTER__ macro
- __cplusplus macro
- __cplusplus_cli macro
- __cplusplus_winrt macro
- _CPPRTTI macro
- _CPPUNWIND macro
- __DATE__ macro
- _DEBUG macro
- _DLL macro
- __FILE__ macro
- __FUNCDNAME__ macro
- __FUNCSIG__ macro
- __FUNCTION__ macro
- _INTEGRAL_MAX_BITS macro
- _ISO_VOLATILE macro
- _KERNEL_MODE macro
- __LINE__ macro
- _M_AMD64 macro
- _M_ARM macro
- _M_ARM_ARMV7VE macro
- _M_ARM_FP macro
- _M_ARM64 macro
- _M_CEE macro
- _M_CEE_PURE macro
- _M_CEE_SAFE macro
- _M_FP_EXCEPT macro
- _M_FP_FAST macro
- _M_FP_PRECISE macro
- _M_FP_STRICT macro
- _M_IX86 macro
- _M_IX86_FP macro
- _M_X64 macro
- _MANAGED macro
- _MFC_VER macro
- _MSC_BUILD macro
- _MSC_EXTENSIONS macro
- _MSC_FULL_VER macro
- _MSC_VER macro
- _MSVC_LANG macro
- __MSVC_RUNTIME_CHECKS macro
- _MT macro
- _NATIVE_WCHAR_T_DEFINED macro
- _NO_SIZED_DEALLOCATION macro
- _OPENMP macro
- _PREFAST_ macro
- _RESUMABLE_FUNCTIONS_SUPPORTED macro
- _RTC_CONVERSION_CHECKS_ENABLED macro
- __STDC__ macro
- __STDC_HOSTED__ macro
- __STDCPP_THREADS__ macro
- __TIME__ macro
- __TIMESTAMP__ macro
- __VA_ARGS__ macro
- _VC_NODEFAULTLIB macro
- _WCHAR_T_DEFINED macro
- _WIN32 macro
- _WIN64 macro
- _WINRT_DLL macro
- __func__ identifier
ms.assetid: 1cc5f70a-a225-469c-aed0-fe766238e23f
caps.latest.revision: "75"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 86905a879abe9b81302a8f196e200c1d0c227bb7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="predefined-macros"></a>Macro predefinite

Il compilatore Visual C++ sono disponibili alcune macro del preprocessore, a seconda della lingua (C o C++), la destinazione di compilazione e le opzioni del compilatore scelto.

Visual C++ supporta la macro del preprocessore predefinite obbligatorie specificate dallo standard ANSI/ISO C99 e C++ 14 standard ISO. L'implementazione supporta anche diverse altre macro del preprocessore specifiche di Microsoft. Alcune macro è definiti solo per ambienti di compilazione specifica o le opzioni del compilatore. Se non specificato diversamente, le macro vengono definite in un'unità di conversione come se sono stati specificati come **/D** argomenti dell'opzione del compilatore. Quando viene definito, le macro vengono espanse per i valori specificati dal preprocessore prima della compilazione. Macro predefinite non accettano argomenti e non possono essere ridefinite.

## <a name="standard-predefined-identifier"></a>Identificatore predefinito standard

Il compilatore supporta questo identificatore predefinito specificato da ISO C99 e ISO C++ 11.

- **&#95; &#95; func &#95; &#95;**  Il nome non qualificato e non decorato della funzione contenitore come una funzione locale `static const` matrice `char`.

    ```cpp
    void example(){
        printf("%s\n", __func__);
    } // prints "example"
    ```

## <a name="standard-predefined-macros"></a>Macro predefinite standard

Il compilatore supporta queste macro predefinite specificate da ISO C99 e C++ 17 standard ISO.

- **&#95; &#95; cplusplus** definito come un valore letterale integer quando l'unità di conversione viene compilato come C++. In caso contrario, non è definito.

- **&#95; &#95; data &#95; &#95;**  La data di compilazione del file di origine corrente. La data è una stringa di lunghezza costante letterale nel formato *Mmm gg aaaa*. Il nome del mese *Mmm* è lo stesso come il nome abbreviato del mese in date generate dalla libreria di Runtime C [asctime](../c-runtime-library/reference/asctime-wasctime.md) (funzione). Il primo carattere della data *gg* è uno spazio, se il valore è inferiore a 10. Questa macro viene sempre definita.

- **&#95; &#95; FILE &#95; &#95;**  Il nome del file di origine corrente. **&#95; &#95; FILE &#95; &#95;**  si espande in una stringa di caratteri letterale. Per garantire che venga visualizzato il percorso completo del file, utilizzare [/FC (completo percorso del File di codice sorgente nella diagnostica)](../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md). Questa macro viene sempre definita.

- **&#95; &#95; RIGA &#95; &#95;**  Definita come numero intero riga nel file di origine corrente. Il valore di **&#95; &#95; RIGA &#95; &#95;**  macro può essere modificata utilizzando un `#line` direttiva. Questa macro viene sempre definita.

- **&#95; &#95; STDC &#95; &#95;**  Definito come 1 solo quando compilato come C e se il [/Za](../build/reference/za-ze-disable-language-extensions.md) è specificata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; &#95; STDC &#95; OSPITATO &#95; &#95;**  Definito come 1 se l'implementazione è un *ospitato implementazione*, che supporta l'intera libreria standard obbligatorio. In caso contrario, è definito come 0.

- **&#95; &#95; STDCPP &#95; THREAD &#95; &#95;**  Definito come 1 se e solo se un programma può avere più di un thread di esecuzione e compilato come C++. In caso contrario, non è definito.

- **&#95; &#95; TEMPO &#95; &#95;**  L'ora di conversione dell'unità di conversione pre-elaborato. Il tempo è una stringa di caratteri letterali nel formato *hh: mm:*, lo stesso come il periodo di tempo restituito dalla libreria di Runtime C [asctime](../c-runtime-library/reference/asctime-wasctime.md) (funzione). Questa macro viene sempre definita.

## <a name="microsoft-specific-predefined-macros"></a>Macro predefinite specifiche di Microsoft

Microsoft Visual C++ supporta queste macro predefinite aggiuntive.

- **&#95; &#95; ATOM &#95; &#95;**  Definito come 1 quando la [/favor:ATOM](../build/reference/favor-optimize-for-architecture-specifics.md) è impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non è definito.

- **&#95; &#95; AVX &#95; &#95;**  Definito come 1 quando la [/arch: AVX](../build/reference/arch-x86.md) o [/arch: avx2](../build/reference/arch-x86.md) vengono impostate le opzioni del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non è definito.

- **&#95; &#95; AVX2 &#95; &#95;**  Definito come 1 quando la [/arch: avx2](../build/reference/arch-x86.md) è impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non è definito.

- **&#95; CHAR &#95; Senza segno** definito come 1 se il valore predefinito `char` tipo è senza segno. Quando viene impostato il [/J (char predefinito è di tipo unsigned)](../build/reference/j-default-char-type-is-unsigned.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; &#95; Common Language Runtime &#95; VER** definito come un valore letterale integer che rappresenta la versione di common language runtime utilizzato quando è stata compilata l'applicazione. Il valore è codificato in formato `Mmmbbbbb`, dove `M` indica la versione principale del runtime, `mm` indica la versione secondaria del runtime e `bbbbb` è il numero di build. **&#95; &#95; Common Language Runtime &#95; VER** è definito se il [/clr](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

    ```cpp
    // clr_ver.cpp
    // compile with: /clr
    using namespace System;
    int main() {
       Console::WriteLine(__CLR_VER);
    }
    ```

- **&#95; CONTROLLO &#95; FLUSSO &#95; PROTEZIONE** definito come 1 quando la [/Guard: CF (Abilita Guard flusso di controllo)](../build/reference/guard-enable-control-flow-guard.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; &#95; CONTATORE &#95; &#95;**  Viene espansa per un valore letterale integer che inizia da 0 e viene incrementato di 1 ogni volta che viene utilizzata in un file di origine o incluso nelle intestazioni del file di origine. **&#95; &#95; CONTATORE &#95; &#95;**  memorizza il rispettivo stato quando si usano intestazioni precompilate. Questa macro viene sempre definita.

  Questo esempio viene utilizzato `__COUNTER__` per assegnare identificatori univoci a tre oggetti diversi dello stesso tipo. Il `exampleClass` costruttore accetta un valore integer come parametro. In `main`, l'applicazione dichiara tre oggetti di tipo `exampleClass`, utilizzando `__COUNTER__` come parametro dell'identificatore univoco:

    ```cpp
    // macro__COUNTER__.cpp
    // Demonstration of __COUNTER__, assigns unique identifiers to
    // different objects of the same type.
    // Compile by using: cl /EHsc /W4 macro__COUNTER__.cpp
    #include <stdio.h>

    class exampleClass {
        int m_nID;
    public:
        // initialize object with a read-only unique ID
        exampleClass(int nID) : m_nID(nID) {}
        int GetID(void) { return m_nID; }
    };

    int main()
    {
        // __COUNTER__ is initially defined as 0
        exampleClass e1(__COUNTER__);

        // On the second reference, __COUNTER__ is now defined as 1
        exampleClass e2(__COUNTER__);

        // __COUNTER__ is now defined as 2
        exampleClass e3(__COUNTER__);

        printf("e1 ID: %i\n", e1.GetID());
        printf("e2 ID: %i\n", e2.GetID());
        printf("e3 ID: %i\n", e3.GetID());

        // Output
        // ------------------------------
        // e1 ID: 0
        // e2 ID: 1
        // e3 ID: 2

        return 0;
    }
    ```

- **&#95; &#95; cplusplus &#95; cli** definito come il valore letterale integer 200406 quando viene compilato come C++ e un [/clr](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito. Quando viene definito, **&#95; &#95; cplusplus &#95; cli** è attivo nell'unità di conversione.

    ```cpp
    // cplusplus_cli.cpp
    // compile by using /clr
    #include "stdio.h"
    int main() {
       #ifdef __cplusplus_cli
          printf("%d\n", __cplusplus_cli);
       #else
          printf("not defined\n");
       #endif
    }
    ```

- **&#95; &#95; cplusplus &#95; winrt** definito come il valore letterale integer 201009 quando viene compilato come C++ e [/ZW (compilazione di Windows Runtime)](../build/reference/zw-windows-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; CPPRTTI** definito come 1 se il [/GR (Attiva informazioni sui tipi in fase di esecuzione)](../build/reference/gr-enable-run-time-type-information.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; CPPUNWIND** definito come 1, se uno o più di [/GX (Attiva gestione eccezioni)](../build/reference/gx-enable-exception-handling.md), [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), o [/EH (modello di gestione delle eccezioni) ](../build/reference/eh-exception-handling-model.md) vengono impostate le opzioni del compilatore. In caso contrario, non è definito.

- **&#95; DEBUG** definito come 1 quando la [/LDd](../build/reference/md-mt-ld-use-run-time-library.md), [/MDd](../build/reference/md-mt-ld-use-run-time-library.md), o [/MTd](../build/reference/md-mt-ld-use-run-time-library.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; DLL** definito come 1 quando la [/MD](../build/reference/md-mt-ld-use-run-time-library.md) o [/MDd](../build/reference/md-mt-ld-use-run-time-library.md) è impostata l'opzione del compilatore (DLL con multithreading). In caso contrario, non è definito.

- **&#95; &#95; FUNCDNAME &#95; &#95;**  Definito come un valore letterale stringa che contiene il [nome decorato](../build/reference/decorated-names.md) della funzione contenitore. La macro viene definita solo all'interno di una funzione. Il **&#95; &#95; FUNCDNAME &#95; &#95;**  macro non viene espansa se si utilizza il [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore.

   Questo esempio viene utilizzato il `__FUNCDNAME__`, `__FUNCSIG__`, e `__FUNCTION__` macro per visualizzare informazioni sulla funzione.

   [!code-cpp[NVC_Predefined_Macros_Examples#1](../preprocessor/codesnippet/CPP/predefined-macros_1.cpp)]

- **&#95; &#95; FUNCSIG &#95; &#95;**  Definito come valore letterale stringa che contiene la firma della funzione contenitore. La macro viene definita solo all'interno di una funzione. Il **&#95; &#95; FUNCSIG &#95; &#95;**  macro non viene espansa se si utilizza il [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore. Quando viene compilato per una destinazione a 64 bit, la convenzione di chiamata è `__cdecl` per impostazione predefinita. Per un esempio di utilizzo, vedere il `__FUNCDNAME__` (macro).

- **&#95; &#95; FUNZIONE &#95; &#95;**  Definito come un valore letterale stringa che contiene il nome non decorato della funzione contenitore. La macro viene definita solo all'interno di una funzione. Il **&#95; &#95; FUNZIONE &#95; &#95;**  macro non viene espansa se si utilizza il [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore. Per un esempio di utilizzo, vedere il `__FUNCDNAME__` (macro).

- **&#95; integrale &#95; MAX &#95; BITS** definito come il valore letterale integer 64, la dimensione massima (in bit) per un tipo integrale non vettoriale. Questa macro viene sempre definita.

   ```cpp
   // integral_max_bits.cpp
   #include <stdio.h>
   int main() {
      printf("%d\n", _INTEGRAL_MAX_BITS);
   }
   ```

- **&#95; &#95; INTELLISENSE &#95; &#95;**  Definito come 1 durante un compilatore IntelliSense passare nell'IDE di Visual Studio. In caso contrario, non è definito. È possibile utilizzare questa macro per evitare il codice al compilatore di IntelliSense non comprendere o usarlo per alternare tra la compilazione e del compilatore IntelliSense. Per ulteriori informazioni, vedere [suggerimenti per la risoluzione dei problemi per IntelliSense lentezza](https://blogs.msdn.microsoft.com/vcblog/2011/03/29/troubleshooting-tips-for-intellisense-slowness/).

- **&#95; ISO &#95; VOLATILE** definito come 1 se il [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; KERNEL &#95; MODALITÀ** definito come 1 se il [/kernel (Crea Kernel modalità file binario)](../build/reference/kernel-create-kernel-mode-binary.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; AMD64** definito come valore letterale integer valore 100 per le compilazioni di processori x64. In caso contrario, non è definito.

- **&#95; M &#95; ARM** definito come il valore letterale integer 7 per le compilazioni destinate a processori ARM. In caso contrario, non è definito.

- **&#95; M &#95; ARM &#95; ARMV7VE** definito come 1 quando la [armv7ve](../build/reference/arch-arm.md) è impostata l'opzione del compilatore per le compilazioni destinate a processori ARM. In caso contrario, non è definito.

- **&#95; M &#95; ARM &#95; FP** definito come un valore letterale integer che indica quale [/arch](../build/reference/arch-arm.md) è stata impostata l'opzione del compilatore, se la destinazione di compilazione è un processore ARM. In caso contrario, non è definito.

  - Nell'intervallo di 30-39 se non **/arch** è stata specificata l'opzione ARM, che indica l'architettura predefinita per ARM è stata impostata (`VFPv3`).

  - Nell'intervallo di 40 49 se **vfpv4** è stata impostata.

  - Vedere [/arch (ARM)](../build/reference/arch-arm.md) per ulteriori informazioni.

- **&#95; M &#95; ARM64** definito come 1 per le compilazioni destinate a processori ARM a 64 bit. In caso contrario, non è definito.

- **&#95; M &#95; CEE** definito come 001 se qualsiasi [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; CEE &#95; PURE** deprecato a partire da Visual Studio 2015. Definito come 001 se il [/clr: pure](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; CEE &#95; SICURO** deprecato a partire da Visual Studio 2015. Definito come 001 se il [/CLR: safe](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; FP &#95; Ad eccezione di** definito come 1 se il [/fp: tranne](../build/reference/fp-specify-floating-point-behavior.md) o [/fp: strict](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; FP &#95; VELOCE** definito come 1 se il [Fast](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; FP &#95; PRECISA** definito come 1 se il [/fp: precise](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; FP &#95; STRICT** definito come 1 se il [/fp: strict](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; M &#95; IX86** definito come valore letterale integer valore 600 per le compilazioni di processori x86. Questa macro non è definita per destinazioni di compilazione di ARM o x64.

- **&#95; M &#95; IX86 &#95; FP** definito come un valore letterale integer che indica il [/arch](../build/reference/arch-arm.md) opzione del compilatore set o il valore predefinito. Questa macro viene sempre definita quando la destinazione di compilazione è x86 processore. In caso contrario, non è definito. Quando viene definito, il valore è:

  - 0 se il **/arch:IA32** è stata impostata l'opzione del compilatore.

  - 1 se il **/arch: SSE** è stata impostata l'opzione del compilatore.

  - 2 se il **/arch: SSE2**, **/arch: AVX** o **/arch: avx2** è stata impostata l'opzione del compilatore. Questo valore è il valore predefinito se un **/arch** non è stato specificato l'opzione del compilatore. Quando **/arch: AVX** è specificato, la macro **&#95; &#95; AVX &#95; &#95;**  è definita. Quando **/arch: avx2** è specificato, entrambi **&#95; &#95; AVX &#95; &#95;**  e **&#95; &#95; AVX2 &#95; &#95;**  sono inoltre definiti.

  - Vedere [/arch (x86)](../build/reference/arch-x86.md) per ulteriori informazioni.

- **&#95; M &#95; X64** definito come valore letterale integer valore 100 per le compilazioni di processori x64. In caso contrario, non è definito.

- **&#95; GESTITO** definito come 1 quando la [/clr](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; MSC &#95; Compilare** definito come un valore letterale integer che contiene l'elemento numero di revisione del numero di versione del compilatore. Il numero di revisione è il quarto elemento il numero di versione separato dal punto. Ad esempio, se il numero di versione del compilatore Visual C++ è 15.00.20706.01, la **&#95; MSC &#95; Compilare** macro restituisce 1. Questa macro viene sempre definita.

- **&#95; MSC &#95; ESTENSIONI** definito come 1 se il [/Ze (attiva le estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è impostata l'opzione del compilatore, ovvero l'impostazione predefinita. In caso contrario, non è definito.

- **&#95; MSC &#95; FULL &#95; VER** definito come valore letterale integer che codifica la versione principale, secondario e numero di elementi del numero di versione del compilatore di compilazione. Il numero principale è il primo elemento del numero di versione separato dal punto, il numero secondario è il secondo elemento e il numero di build è il terzo elemento. Ad esempio, se il numero di versione del compilatore Visual C++ è 15.00.20706.01, la **&#95; MSC &#95; FULL &#95; VER** macro restituisce 150020706. Immettere **cl /?** nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro viene sempre definita.

- **&#95; MSC &#95; VER** definito come un valore letterale integer che codifica il major e minor numero di elementi del numero di versione del compilatore. Il numero principale è il primo elemento del numero di versione separato dal punto e il numero secondario è il secondo elemento. Ad esempio, se il numero di versione del compilatore Visual C++ è 17.00.51106.1, la **&#95; MSC &#95; VER** macro restituisce 1700. Immettere **cl /?** nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro viene sempre definita.

- **&#95; Opzioni: MSVC &#95; LANG** definito come un valore letterale integer che specifica il linguaggio C++ standard di destinazione dal compilatore. Quando viene compilato come C++, la macro è il valore letterale integer 201402 se il [/std:c + + 14](../build/reference/std-specify-language-standard-version.md) è impostata l'opzione del compilatore, o per impostazione predefinita; è impostato su 201703 se il [/std:c + + 17](../build/reference/std-specify-language-standard-version.md) è impostata l'opzione del compilatore; e viene impostato su un non specificato, più valore quando il [/std:c + + più recente](../build/reference/std-specify-language-standard-version.md). In caso contrario, la macro non è definita. Il **&#95; Opzioni: MSVC &#95; LANG** macro e [/std (specificare Standard lingua)](../build/reference/std-specify-language-standard-version.md) opzioni del compilatore sono disponibili a partire da Visual Studio 2015 Update 3.

- **&#95; &#95; Opzioni: MSVC &#95; RUNTIME &#95; Controlla** definito come 1 quando uno del [/RTC](../build/reference/rtc-run-time-error-checks.md) opzioni del compilatore è impostata. In caso contrario, non è definito.

- **&#95; MT** definito come 1 quando [/MD o /MDd](../build/reference/md-mt-ld-use-run-time-library.md) (DLL con multithreading) o [/MT o /MTd](../build/reference/md-mt-ld-use-run-time-library.md) (multithreading) è specificato. In caso contrario, non è definito.

- **&#95; NATIVO &#95; WCHAR &#95; T &#95; definiti** definito come 1 quando la [/Zc: wchar_t](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; OPENMP** definita come numero intero 200203 letterale, che rappresenta la data della specifica OpenMP implementata da Visual C++, se il [/openmp (Attiva supporto OpenMP 2.0)](../build/reference/openmp-enable-openmp-2-0-support.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

   ```cpp
   // _OPENMP_dir.cpp
   // compile with: /openmp
   #include <stdio.h>
   int main() {
      printf("%d\n", _OPENMP);
   }
   ```

- **&#95; PREFAST &#95;**  Definito come 1 quando la [/ANALYZE](../build/reference/analyze-code-analysis.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; &#95; TIMESTAMP &#95; &#95;**  Definito come valore letterale stringa che contiene la data e ora dell'ultima modifica del file di origine corrente, nel formato abbreviato, costante lunghezza restituita dalla libreria di Runtime C [asctime](../c-runtime-library/reference/asctime-wasctime.md) funzione, ad esempio, `Fri 19 Aug 13:32:58 2016`. Questa macro viene sempre definita.

- **&#95; VC &#95; /NODEFAULTLIB** definito come 1 quando la [/Zl (omette nome della libreria predefinita)](../build/reference/zl-omit-default-library-name.md) è impostata l'opzione del compilatore. In caso contrario, non è definito.

- **&#95; WCHAR &#95; T &#95; definiti** definito come 1 se il valore predefinito [/Zc: wchar_t](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) è impostata l'opzione del compilatore. Il **&#95; WCHAR &#95; T &#95; definiti** macro è definito, ma non ha alcun valore se il **/Zc:wchar_t-** è impostata l'opzione del compilatore, e `wchar_t` è definito in un file di intestazione di sistema incluso nel progetto. In caso contrario, non è definito.

- **&#95; Win32** definito come 1 quando la destinazione di compilazione è ARM a 32 bit, 64-bit ARM, x86, o x64. In caso contrario, non è definito.

- **&#95; Win64** definito come 1 quando la destinazione di compilazione è a 64 bit ARM o x64. In caso contrario, non è definito.

- **&#95; WINRT &#95; DLL** definito come 1 quando compilato come C++ ed entrambi [/ZW (compilazione di Windows Runtime)](../build/reference/zw-windows-runtime-compilation.md) e [/LD o /LDd](../build/reference/md-mt-ld-use-run-time-library.md) vengono impostate le opzioni del compilatore. In caso contrario, non è definito.

 Le macro del preprocessore utilizzate per determinare la versione della libreria ATL o MFC non sono predefinite dal compilatore. Queste macro sono definite nelle intestazioni per la libreria, in modo che non sono definiti nelle direttive del preprocessore prima che l'intestazione richiesta è incluso.

- **&#95; ATL &#95; VER** definito in \<atldef.h > come valore letterale integer che codifica il numero di versione ATL.

- **&#95; MFC &#95; VER** definito in \<afxver . h > come valore letterale integer che codifica il numero di versione MFC.

## <a name="see-also"></a>Vedere anche

[Macro (C/C++)](../preprocessor/macros-c-cpp.md)   
[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)   
[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
