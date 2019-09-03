---
title: Macro predefinite
ms.custom: update_every_version
ms.date: 04/05/2019
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
ms.openlocfilehash: ab478cd8ac51b5cb88cec38f80541df8a7be2789
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222291"
---
# <a name="predefined-macros"></a>Macro predefinite

Microsoft C/C++ Compiler (MSVC) predefinisce alcune macro del preprocessore, a seconda del linguaggio (C o C++), della destinazione di compilazione e delle opzioni del compilatore selezionate.

MSVC supporta le macro predefinite del preprocessore richieste dagli standard C99 ANSI/ISO e ISO C++ 14 e C++ 17. L'implementazione supporta inoltre diverse macro del preprocessore specifiche di Microsoft. Alcune macro sono definite solo per specifici ambienti di compilazione o opzioni del compilatore. Eccetto laddove indicato, le macro vengono definite in un'unità di conversione come se fossero specificate come argomenti dell'opzione del compilatore **/d** . Quando è definito, le macro vengono espanse in base ai valori specificati dal preprocessore prima della compilazione. Le macro predefinite non accettano argomenti e non possono essere ridefinite.

## <a name="standard-predefined-identifier"></a>Identificatore predefinito standard

Il compilatore supporta questo identificatore predefinito specificato da ISO C99 e ISO C++ 11.

- **&#95; funzione &#95; &#95;** Nome non qualificato e non decorato della funzione contenitore come matrice **const statica** della funzione locale di **char**.

    ```cpp
    void example(){
        printf("%s\n", __func__);
    } // prints "example"
    ```

## <a name="standard-predefined-macros"></a>Macro predefinite standard

Il compilatore supporta queste macro predefinite specificate dagli standard ISO C99 e ISO C++ 17.

- **&#95;cplusplus &#95;** Definito come valore letterale integer quando l'unità di conversione viene compilata come C++. In caso contrario, non definito.

- **Data di&#95; scadenza &#95; &#95;** Data di compilazione del file di origine corrente. La data è un valore letterale stringa di lunghezza costante nel formato *mmm gg aaaa*. Il nome del mese *mmm* corrisponde al nome abbreviato del mese generato dalla funzione [asctime](../c-runtime-library/reference/asctime-wasctime.md) della libreria di runtime C (CRT). Il primo carattere della data *GG* è uno spazio se il valore è minore di 10. Questa macro è sempre definita.

- **&#95; File &#95; &#95;** Nome del file di origine corrente. Il file si espande in un valore letterale stringa di caratteri. **&#95; &#95;&#95;** Per assicurarsi che venga visualizzato il percorso completo del file, usare [/FC (percorso completo del file di codice sorgente nella diagnostica)](../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md). Questa macro è sempre definita.

- **&#95;Riga di &#95;&#95;** Definito come numero di riga integer nel file di origine corrente. Il valore della  **&#95; &#95;macro della&#95; riga** può essere modificato tramite una `#line` direttiva. Questa macro è sempre definita.

- **&#95; STDC &#95; &#95;** Definito come 1 solo quando viene compilato come C e se viene specificata l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) . In caso contrario, non definito.

- **&#95;&#95;STDC&#95;ospitato&#95;**  definito come 1 se l'implementazione è un' *implementazione ospitata*, una che supporta l'intera libreria standard richiesta. In caso contrario, viene definito come 0.

- **&#95;&#95;&#95; Thread&#95;STDCPP** definiti come 1 solo se un programma può avere più di un thread di esecuzione e compilato come. C++ In caso contrario, non definito.

- **&#95;Ora di &#95;&#95;** Ora di traduzione dell'unità di conversione pre-elaborata. L'ora è un valore letterale stringa di caratteri nel formato *hh: mm: SS*, uguale all'ora restituita dalla funzione [asctime](../c-runtime-library/reference/asctime-wasctime.md) CRT. Questa macro è sempre definita.

## <a name="microsoft-specific-predefined-macros"></a>Macro predefinite specifiche di Microsoft

MSVC supporta queste macro predefinite aggiuntive.

- **&#95; Atom &#95; &#95;** Definito come 1 quando viene impostata l'opzione del compilatore [/favor: Atom](../build/reference/favor-optimize-for-architecture-specifics.md) e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- **&#95; AVX &#95; &#95;** Definito come 1 quando sono impostate le opzioni del compilatore [/Arch: AVX](../build/reference/arch-x86.md) o [/Arch: AVX2](../build/reference/arch-x86.md) e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- **&#95; AVX2 &#95; &#95;** Definito come 1 quando viene impostata l'opzione del compilatore [/Arch: AVX2](../build/reference/arch-x86.md) e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- **&#95;CHAR&#95;senza segno** definito come 1 se il tipo **char** predefinito è senza segno. Questo valore viene definito quando viene impostata l'opzione del compilatore [/J (valore predefinito di tipo char non firmato)](../build/reference/j-default-char-type-is-unsigned.md) . In caso contrario, non definito.

- **&#95;&#95;ver &#95;CLR** Definito come valore letterale integer che rappresenta la versione di Common Language Runtime (CLR) usata per compilare l'app. Il `Mmmbbbbb`valore è codificato nel formato, dove `M` è la versione principale del runtime, `mm` è la versione secondaria del runtime e `bbbbb` è il numero di Build. **&#95;&#95;CLR&#95;ver** viene definito se è impostata l'opzione [/CLR](../build/reference/clr-common-language-runtime-compilation.md) del compilatore. In caso contrario, non definito.

    ```cpp
    // clr_ver.cpp
    // compile with: /clr
    using namespace System;
    int main() {
       Console::WriteLine(__CLR_VER);
    }
    ```

- **&#95;Guard&#95;flusso&#95;di controllo** definito come 1 quando viene impostata l'opzione del compilatore [/Guard: CF (Abilita Guard flusso di controllo)](../build/reference/guard-enable-control-flow-guard.md) . In caso contrario, non definito.

- **&#95;Contatore di &#95;&#95;** Si espande in un valore letterale integer che inizia da 0. Il valore viene incrementato di 1 ogni volta che viene usato in un file di origine o nelle intestazioni incluse del file di origine. Il contatore ricorda lo stato quando si utilizzano le intestazioni precompilate. **&#95; &#95;&#95;** Questa macro è sempre definita.

  In questo esempio `__COUNTER__` viene usato per assegnare identificatori univoci a tre oggetti diversi dello stesso tipo. Il `exampleClass` costruttore accetta un Integer come parametro. In `main`, l'applicazione dichiara tre oggetti di tipo `exampleClass`, usando `__COUNTER__` come parametro identificatore univoco:

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

- **&#95;&#95;interfaccia&#95;** della riga di comando cplusplus definita come valore letterale integer C++ 200406 quando viene compilato come e l'opzione del compilatore [/CLR](../build/reference/clr-common-language-runtime-compilation.md) è impostata. In caso contrario, non definito. Quando definito,  **&#95; &#95;l'&#95;interfaccia** della riga di comando di cplusplus è attiva nell'unità di conversione.

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

- **&#95;&#95;cplusplus&#95;WinRT** definito come valore letterale integer 201009 quando viene compilato C++ come e l'opzione del compilatore [/ZW (Windows Runtime compilazione)](../build/reference/zw-windows-runtime-compilation.md) è impostata. In caso contrario, non definito.

- **&#95;CPPRTTI** Definito come 1 se è impostata l'opzione del compilatore [/gr (Abilita informazioni sui tipi in fase di esecuzione)](../build/reference/gr-enable-run-time-type-information.md) . In caso contrario, non definito.

- **&#95;CPPUNWIND** Definito come 1 se sono impostate una o più opzioni del compilatore [/GX (Abilita gestione eccezioni)](../build/reference/gx-enable-exception-handling.md), [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md)o [/eh (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md) . In caso contrario, non definito.

- **&#95;Esegui debug** Definito come 1 quando viene impostata l'opzione del compilatore [/ldd crea un](../build/reference/md-mt-ld-use-run-time-library.md), [/MDD](../build/reference/md-mt-ld-use-run-time-library.md)o [/MTD](../build/reference/md-mt-ld-use-run-time-library.md) . In caso contrario, non definito.

- DLL definita come 1 quando è impostata l'opzione del compilatore [/MD](../build/reference/md-mt-ld-use-run-time-library.md) o [/MDD](../build/reference/md-mt-ld-use-run-time-library.md) (DLL multithread).  **&#95;** In caso contrario, non definito.

- **&#95; FUNCDNAME &#95; &#95;** Definito come valore letterale stringa che contiene il [nome decorato](../build/reference/decorated-names.md) della funzione contenitore. La macro viene definita solo all'interno di una funzione. **&#95;La &#95;macro&#95; FUNCDNAME** non viene espansa se si usa l'opzione del compilatore [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) .

   Questo esempio usa le `__FUNCDNAME__`macro `__FUNCSIG__`, e `__FUNCTION__` per visualizzare le informazioni sulle funzioni.

   [!code-cpp[NVC_Predefined_Macros_Examples#1](../preprocessor/codesnippet/CPP/predefined-macros_1.cpp)]

- **&#95; FUNCSIG &#95; &#95;** Definito come valore letterale stringa che contiene la firma della funzione contenitore. La macro viene definita solo all'interno di una funzione. **&#95;La &#95;macro&#95; FUNCSIG** non viene espansa se si usa l'opzione del compilatore [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) . Quando viene compilato per una destinazione a 64 bit, la convenzione di `__cdecl` chiamata è per impostazione predefinita. Per un esempio di utilizzo, vedere la `__FUNCDNAME__` macro.

- **&#95; Funzione &#95; &#95;** Definito come valore letterale stringa che contiene il nome non decorato della funzione contenitore. La macro viene definita solo all'interno di una funzione. La macro della  **&#95; &#95;&#95; funzione** non viene espansa se si usa l'opzione del compilatore [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) . Per un esempio di utilizzo, vedere la `__FUNCDNAME__` macro.

- **bit massimi&#95;integrali&#95; &#95;** Definito come valore letterale integer 64, dimensione massima (in bit) per un tipo integrale non vettoriale. Questa macro è sempre definita.

   ```cpp
   // integral_max_bits.cpp
   #include <stdio.h>
   int main() {
      printf("%d\n", _INTEGRAL_MAX_BITS);
   }
   ```

- **&#95; INTELLISENSE &#95; &#95;** Definito come 1 durante un passaggio del compilatore IntelliSense nell'IDE di Visual Studio. In caso contrario, non definito. È possibile utilizzare questa macro per sorvegliare il codice che il compilatore IntelliSense non riconosce oppure utilizzarlo per passare da un compilatore di compilazione a un compilatore IntelliSense e viceversa. Per ulteriori informazioni, vedere [Suggerimenti per la risoluzione dei problemi relativi a IntelliSense lentezza](https://devblogs.microsoft.com/cppblog/troubleshooting-tips-for-intellisense-slowness/).

- **&#95;ISO&#95;volatile** definito come 1 se è impostata l'opzione del compilatore [/volatile: ISO](../build/reference/volatile-volatile-keyword-interpretation.md) . In caso contrario, non definito.

- **&#95;Modalità&#95;kernel** definita come 1 se è impostata l'opzione del compilatore [/kernel (create kernel mode Binary)](../build/reference/kernel-create-kernel-mode-binary.md) . In caso contrario, non definito.

- **&#95;Amd64&#95;M** Definito come valore letterale integer 100 per le compilazioni destinate a processori x64. In caso contrario, non definito.

- **&#95;M&#95;ARM** Definito come valore letterale integer 7 per le compilazioni destinate a processori ARM. In caso contrario, non definito.

- **&#95;M&#95;ARMV7VE&#95;ARM** definito come 1 quando l'opzione del compilatore [/Arch: ARMV7VE](../build/reference/arch-arm.md) è impostata per le compilazioni destinate a processori ARM. In caso contrario, non definito.

- **&#95;M&#95;ARM&#95;FP** definito come valore letterale integer che indica quale opzione del compilatore [/Arch](../build/reference/arch-arm.md) è stata impostata per le destinazioni del processore ARM. In caso contrario, non definito.

  - Valore compreso nell'intervallo 30-39 se non è `/arch` stata specificata alcuna opzione ARM, che indica l'architettura predefinita per ARM è`VFPv3`stata impostata ().

  - Valore compreso nell'intervallo 40-49 se `/arch:VFPv4` è stato impostato.

  - Per altre informazioni, vedere [/Arch (ARM)](../build/reference/arch-arm.md).

- **&#95;Arm64&#95;M** Definito come 1 per le compilazioni destinate a processori ARM a 64 bit. In caso contrario, non definito.

- **&#95;M&#95;CEE** definito come 001 Se è impostata l'opzione del compilatore [/CLR (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) . In caso contrario, non definito.

- **M&#95;CEE&#95;pure &#95;** Obsoleto a partire da Visual Studio 2015. Definito come 001 Se è impostata l'opzione del compilatore [/CLR: pure](../build/reference/clr-common-language-runtime-compilation.md) . In caso contrario, non definito.

- **M&#95;CEE&#95;sicuro &#95;** Obsoleto a partire da Visual Studio 2015. Definito come 001 Se è impostata l'opzione del compilatore [/CLR: safe](../build/reference/clr-common-language-runtime-compilation.md) . In caso contrario, non definito.

- **&#95;M&#95;FP&#95;eccetto** definito come 1 se è impostata l'opzione del compilatore [/FP: except](../build/reference/fp-specify-floating-point-behavior.md) o [/FP: Strict](../build/reference/fp-specify-floating-point-behavior.md) . In caso contrario, non definito.

- **&#95;M&#95;FP&#95;veloce** definito come 1 se è impostata l'opzione del compilatore [/FP: Fast](../build/reference/fp-specify-floating-point-behavior.md) . In caso contrario, non definito.

- **&#95;M&#95;FP&#95;preciso** definito come 1 se è impostata l'opzione del compilatore [/FP: precise](../build/reference/fp-specify-floating-point-behavior.md) . In caso contrario, non definito.

- **&#95;M&#95;FP&#95;Strict** definito come 1 se è impostata l'opzione del compilatore [/FP: Strict](../build/reference/fp-specify-floating-point-behavior.md) . In caso contrario, non definito.

- **&#95;Ix86&#95;M** Definito come valore letterale integer 600 per le compilazioni destinate a processori x86. Questa macro non è definita per le destinazioni di compilazione ARM o x64.

- **&#95;M&#95;ix86&#95;FP** definito come valore letterale integer che indica l'opzione del compilatore [/Arch](../build/reference/arch-arm.md) impostata o l'impostazione predefinita. Questa macro viene sempre definita quando la destinazione di compilazione è un processore x86. In caso contrario, non definito. Se definito, il valore è:

  - 0 se è `/arch:IA32` stata impostata l'opzione del compilatore.

  - 1 se è `/arch:SSE` stata impostata l'opzione del compilatore.

  - 2 se è `/arch:SSE2`stata `/arch:AVX`impostata l' `/arch:AVX2` opzione del compilatore, o. Questo valore è l'impostazione predefinita se `/arch` non è stata specificata un'opzione del compilatore. Quando `/arch:AVX` si specifica, viene definita anche la macro **&#95; &#95;AVX&#95;** . Quando `/arch:AVX2` si specifica, **&#95; &#95;&#95;** vengono definiti anche AVX e **&#95; &#95;AVX2&#95;** .

  - Per altre informazioni, vedere [/arch (x86)](../build/reference/arch-x86.md).

- **&#95;M&#95;x64** Definito come valore letterale integer 100 per le compilazioni destinate a processori x64. In caso contrario, non definito.

- **&#95;Gestione** di Definito come 1 quando viene impostata l'opzione del compilatore [/CLR](../build/reference/clr-common-language-runtime-compilation.md) . In caso contrario, non definito.

- **&#95;compilazione&#95;MSC** Definito come valore letterale integer che contiene l'elemento numero di revisione del numero di versione del compilatore. Il numero di revisione è il quarto elemento del numero di versione separato dal punto. Se, ad esempio, il numero di versione di Microsoft CC++ /Compiler è 15.00.20706.01, la  **&#95;macro di compilazione MSC&#95;** restituisce 1. Questa macro è sempre definita.

- **&#95;Estensioni&#95;MSC** definite come 1 se è impostata l'opzione del compilatore on-by-default [/Ze (Enable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) . In caso contrario, non definito.

- **versione completa&#95;di MSC&#95; &#95;** Definito come valore letterale integer che codifica gli elementi principale, secondario e numero di build del numero di versione del compilatore. Il numero principale è il primo elemento del numero di versione separato dal punto, il numero secondario è il secondo elemento e il numero di build è il terzo elemento. Se, ad esempio, il numero di versione di Microsoft CC++ /Compiler è 15.00.20706.01, la  **&#95;&#95;macro&#95;versione completa MSC** restituisce 150020706. Immettere `cl /?` nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro è sempre definita.

- **&#95;versione&#95;MSC** Definito come valore letterale integer che codifica gli elementi numerici principali e secondari del numero di versione del compilatore. Il numero principale è il primo elemento del numero di versione separato dal punto e il numero secondario è il secondo elemento. Se, ad esempio, il numero di versione di Microsoft CC++ /Compiler è 17.00.51106.1, la  **&#95;macro MSC&#95;ver** restituisce 1700. Immettere `cl /?` nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro è sempre definita.

   |Versione di Visual Studio|**&#95;VERSIONE&#95;MSC**|
   |-|-|
   |Visual Studio 6.0|1200|
   |Visual Studio .NET 2002 (7,0)|1300|
   |Visual Studio .NET 2003 (7,1)|1310|
   |Visual Studio 2005 (8.0)|1400|
   |Visual Studio 2008 (9.0)|1500|
   |Visual Studio 2010 (10.0)|1600|
   |Visual Studio 2012 (11.0)|1700|
   |Visual Studio 2013 (12.0)|1800|
   |Visual Studio 2015 (14.0)|1900|
   |Visual Studio 2017 RTW (15.0)|1910|
   |Visual Studio 2017 versione 15.3|1911|
   |Visual Studio 2017 versione 15.5|1912|
   |Visual Studio 2017 versione 15.6|1913|
   |Visual Studio 2017 versione 15.7|1914|
   |Visual Studio 2017 versione 15.8|1915|
   |Visual Studio 2017 versione 15,9|1916|
   |Visual Studio 2019 RTW (16.0)|1920|
   |Visual Studio 2019 versione 16.1|1921|
   |Visual Studio 2019 versione 16.2|1922|
   |Visual Studio 2019 versione 16,3|1923|

   Per testare le versioni del compilatore o gli aggiornamenti in una determinata versione di Visual Studio o dopo, **>=** usare l'operatore. È possibile usarlo in una direttiva condizionale per  **&#95;confrontare&#95;MSC ver** con la versione nota. Se si dispone di diverse versioni che si escludono a vicenda, ordinare i confronti in ordine decrescente in base al numero di versione. Questo codice, ad esempio, consente di verificare la presenza di compilatori rilasciati in Visual Studio 2017 e versioni successive. Quindi, verifica i compilatori rilasciati in o dopo Visual Studio 2015. Verifica quindi la presenza di tutti i compilatori rilasciati prima di Visual Studio 2015:

   ```cpp
   #if _MSC_VER >= 1910
   // . . .
   #elif _MSC_VER >= 1900
   // . . .
   #else
   // . . .
   #endif
   ```

   Per ulteriori informazioni, vedere [versione C++ del compilatore visuale](https://devblogs.microsoft.com/cppblog/visual-c-compiler-version/) nel C++ Blog del team Microsoft.

- **&#95;MSVC&#95;lang** definito come valore letterale integer che specifica C++ lo standard del linguaggio di destinazione del compilatore. Viene impostato solo nel codice compilato come C++. La macro è il valore letterale integer 201402L per impostazione predefinita o quando viene specificata l'opzione del compilatore [/std: c++ 14](../build/reference/std-specify-language-standard-version.md) . La macro è impostata su 201703L se è specificata l'opzione del compilatore [/std: c++ 17](../build/reference/std-specify-language-standard-version.md) . Viene impostato su un valore superiore e non specificato quando si specifica l'opzione [/std: c + + Latest più recente](../build/reference/std-specify-language-standard-version.md) . In caso contrario, la macro non è definita. Le  **&#95;opzioni&#95;del compilatore MSVC lang** e [/STD (specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md) sono disponibili a partire da Visual Studio 2015 Update 3.

- **&#95;&#95;I&#95;controlli&#95;di runtime MSVC** definiti come 1 quando viene impostata una delle opzioni del compilatore [/RTC](../build/reference/rtc-run-time-error-checks.md) . In caso contrario, non definito.

- **&#95;Mt** Definito come 1 quando viene specificato [/MD o/MDD](../build/reference/md-mt-ld-use-run-time-library.md) (DLL multithread) o [/mt o/MTD](../build/reference/md-mt-ld-use-run-time-library.md) (multithreading). In caso contrario, non definito.

- **&#95;&#95;WCHAR&#95;T&#95;nativo definito** definito come 1 quando è impostata l'opzione del compilatore [/Zc: wchar_t](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) . In caso contrario, non definito.

- **&#95;OpenMP** Definito come valore letterale integer 200203, se è impostata l'opzione del compilatore [/OpenMP (Abilita supporto openmp 2,0)](../build/reference/openmp-enable-openmp-2-0-support.md) . Questo valore rappresenta la data della specifica OpenMP implementata da MSVC. In caso contrario, non definito.

   ```cpp
   // _OPENMP_dir.cpp
   // compile with: /openmp
   #include <stdio.h>
   int main() {
      printf("%d\n", _OPENMP);
   }
   ```

- **&#95;Prefast&#95;** Definito come 1 quando viene impostata l'opzione del compilatore [/Analyze](../build/reference/analyze-code-analysis.md) . In caso contrario, non definito.

- **&#95; Timestamp &#95; &#95;** Definito come valore letterale stringa che contiene la data e l'ora dell'Ultima modifica del file di origine corrente, nel formato di lunghezza costante abbreviato restituito dalla funzione [ASCTIME](../c-runtime-library/reference/asctime-wasctime.md) CRT, ad esempio `Fri 19 Aug 13:32:58 2016`. Questa macro è sempre definita.

- **&#95;NODEFAULTLIB&#95;VC** definito come 1 quando viene impostata l'opzione del compilatore [/Zl (omette il nome della libreria predefinita)](../build/reference/zl-omit-default-library-name.md) . In caso contrario, non definito.

- **&#95;WCHAR&#95;T&#95;definito** definito come 1 quando viene impostata l'opzione predefinita [/Zc: wchar_t](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) del compilatore. Se è impostata l'`/Zc:wchar_t-` opzione del compilatore e wchar_t è definito in un file di intestazione di sistema incluso nel progetto, la  **&#95;macro definita&#95;WCHAR T&#95;** viene definita, ma non presenta alcun valore. In caso contrario, non definito.

- **&#95;Win32** Definito come 1 quando la destinazione di compilazione è ARM a 32 bit, ARM a 64 bit, x86 o x64. In caso contrario, non definito.

- **&#95;Win64** Definito come 1 quando la destinazione di compilazione è ARM a 64 bit o x64. In caso contrario, non definito.

- **&#95;WINRT&#95;dll** definita come 1 se compilata come C++ ed entrambe le opzioni del compilatore [/ZW (Windows Runtime Compilation)](../build/reference/zw-windows-runtime-compilation.md) e [/LD o/ldd crea un](../build/reference/md-mt-ld-use-run-time-library.md) sono impostate. In caso contrario, non definito.

Nessuna macro del preprocessore che identifichi la versione della libreria MFC o ATL è predefinita dal compilatore. Le intestazioni ATL e MFC definiscono le macro della versione internamente. Non sono definite nelle direttive per il preprocessore eseguite prima dell'inclusione dell'intestazione richiesta.

- **&#95;ATL&#95;ver** definito in \<atldef. h > come valore letterale integer che codifica il numero di versione ATL.

- **&#95;La&#95;versione MFC** definita \<in afxver_. h > come valore letterale integer che codifica il numero di versione di MFC.

## <a name="see-also"></a>Vedere anche

[Macro (C/C++)](../preprocessor/macros-c-cpp.md)<br/>
[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)<br/>
[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)