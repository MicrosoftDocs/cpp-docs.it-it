---
title: Macro predefinite
description: Elenca e descrive le macro del preprocessore predefinite del compilatore Microsoft C++.
ms.custom: update_every_version
ms.date: 06/08/2020
f1_keywords:
- ':::no-loc(_ATL_VER):::'
- ':::no-loc(__ATOM__):::'
- ':::no-loc(__AVX__):::'
- ':::no-loc(__AVX2__):::'
- ':::no-loc(__AVX512BW__):::'
- ':::no-loc(__AVX512CD__):::'
- ':::no-loc(__AVX512DQ__):::'
- ':::no-loc(__AVX512F__):::'
- ':::no-loc(__AVX512VL__):::'
- ':::no-loc(_CHAR_UNSIGNED):::'
- ':::no-loc(__CLR_VER):::'
- ':::no-loc(_CONTROL_FLOW_GUARD):::'
- ':::no-loc(__COUNTER__):::'
- ':::no-loc(__cplusplus):::'
- ':::no-loc(__cplusplus_cli):::'
- ':::no-loc(__cplusplus_winrt):::'
- ':::no-loc(_CPPRTTI):::'
- ':::no-loc(_CPPUNWIND):::'
- ':::no-loc(__DATE__):::'
- ':::no-loc(_DEBUG):::'
- ':::no-loc(_DLL):::'
- ':::no-loc(__FILE__):::'
- ':::no-loc(__FUNCDNAME__):::'
- ':::no-loc(__FUNCSIG__):::'
- ':::no-loc(__FUNCTION__):::'
- ':::no-loc(_INTEGRAL_MAX_BITS):::'
- ':::no-loc(_ISO_VOLATILE):::'
- ':::no-loc(_KERNEL_MODE):::'
- ':::no-loc(__LINE__):::'
- ':::no-loc(_M_AMD64):::'
- ':::no-loc(_M_ARM):::'
- ':::no-loc(_M_ARM_ARMV7VE):::'
- ':::no-loc(_M_ARM_FP):::'
- ':::no-loc(_M_ARM64):::'
- ':::no-loc(_M_CEE):::'
- ':::no-loc(_M_CEE_PURE):::'
- ':::no-loc(_M_CEE_SAFE):::'
- ':::no-loc(_M_FP_EXCEPT):::'
- ':::no-loc(_M_FP_FAST):::'
- ':::no-loc(_M_FP_PRECISE):::'
- ':::no-loc(_M_FP_STRICT):::'
- ':::no-loc(_M_IX86):::'
- ':::no-loc(_M_IX86_FP):::'
- ':::no-loc(_M_X64):::'
- ':::no-loc(_MANAGED):::'
- ':::no-loc(_MFC_VER):::'
- ':::no-loc(_MSC_BUILD):::'
- ':::no-loc(_MSC_EXTENSIONS):::'
- ':::no-loc(_MSC_FULL_VER):::'
- ':::no-loc(_MSC_VER):::'
- ':::no-loc(_MSVC_LANG):::'
- ':::no-loc(__MSVC_RUNTIME_CHECKS):::'
- ':::no-loc(_MT):::'
- ':::no-loc(_NATIVE_WCHAR_T_DEFINED):::'
- ':::no-loc(_NO_SIZED_DEALLOCATION):::'
- ':::no-loc(_OPENMP):::'
- ':::no-loc(_PREFAST_):::'
- ':::no-loc(_RESUMABLE_FUNCTIONS_SUPPORTED):::'
- ':::no-loc(_RTC_CONVERSION_CHECKS_ENABLED):::'
- ':::no-loc(__STDC__):::'
- ':::no-loc(__STDC_HOSTED__):::'
- ':::no-loc(__STDCPP_THREADS__):::'
- ':::no-loc(__TIME__):::'
- ':::no-loc(__TIMESTAMP__):::'
- ':::no-loc(__VA_ARGS__):::'
- ':::no-loc(_VC_NODEFAULTLIB):::'
- ':::no-loc(_WCHAR_T_DEFINED):::'
- ':::no-loc(_WIN32):::'
- ':::no-loc(_WIN64):::'
- ':::no-loc(_WINRT_DLL):::'
helpviewer_keywords:
- timestamps, preprocessor macro
- cl.exe compiler, version number
- version numbers, C/C++ compiler (cl.exe)
- macros, predefined C++
- preprocessor, macros
- predefined macros
- ':::no-loc(_ATL_VER)::: macro'
- ':::no-loc(__ATOM__)::: macro'
- ':::no-loc(__AVX__)::: macro'
- ':::no-loc(__AVX2__)::: macro'
- ':::no-loc(__AVX512BW__)::: macro'
- ':::no-loc(__AVX512CD__)::: macro'
- ':::no-loc(__AVX512DQ__)::: macro'
- ':::no-loc(__AVX512F__)::: macro'
- ':::no-loc(__AVX512VL__)::: macro'
- ':::no-loc(_CHAR_UNSIGNED)::: macro'
- ':::no-loc(__CLR_VER)::: macro'
- ':::no-loc(_CONTROL_FLOW_GUARD)::: macro'
- ':::no-loc(__COUNTER__)::: macro'
- ':::no-loc(__cplusplus)::: macro'
- ':::no-loc(__cplusplus_cli)::: macro'
- ':::no-loc(__cplusplus_winrt)::: macro'
- ':::no-loc(_CPPRTTI)::: macro'
- ':::no-loc(_CPPUNWIND)::: macro'
- ':::no-loc(__DATE__)::: macro'
- ':::no-loc(_DEBUG)::: macro'
- ':::no-loc(_DLL)::: macro'
- ':::no-loc(__FILE__)::: macro'
- ':::no-loc(__FUNCDNAME__)::: macro'
- ':::no-loc(__FUNCSIG__)::: macro'
- ':::no-loc(__FUNCTION__)::: macro'
- ':::no-loc(_INTEGRAL_MAX_BITS)::: macro'
- ':::no-loc(_ISO_VOLATILE)::: macro'
- ':::no-loc(_KERNEL_MODE)::: macro'
- ':::no-loc(__LINE__)::: macro'
- ':::no-loc(_M_AMD64)::: macro'
- ':::no-loc(_M_ARM)::: macro'
- ':::no-loc(_M_ARM_ARMV7VE)::: macro'
- ':::no-loc(_M_ARM_FP)::: macro'
- ':::no-loc(_M_ARM64)::: macro'
- ':::no-loc(_M_CEE)::: macro'
- ':::no-loc(_M_CEE_PURE)::: macro'
- ':::no-loc(_M_CEE_SAFE)::: macro'
- ':::no-loc(_M_FP_EXCEPT)::: macro'
- ':::no-loc(_M_FP_FAST)::: macro'
- ':::no-loc(_M_FP_PRECISE)::: macro'
- ':::no-loc(_M_FP_STRICT)::: macro'
- ':::no-loc(_M_IX86)::: macro'
- ':::no-loc(_M_IX86_FP)::: macro'
- ':::no-loc(_M_X64)::: macro'
- ':::no-loc(_MANAGED)::: macro'
- ':::no-loc(_MFC_VER)::: macro'
- ':::no-loc(_MSC_BUILD)::: macro'
- ':::no-loc(_MSC_EXTENSIONS)::: macro'
- ':::no-loc(_MSC_FULL_VER)::: macro'
- ':::no-loc(_MSC_VER)::: macro'
- ':::no-loc(_MSVC_LANG)::: macro'
- ':::no-loc(__MSVC_RUNTIME_CHECKS)::: macro'
- ':::no-loc(_MT)::: macro'
- ':::no-loc(_NATIVE_WCHAR_T_DEFINED)::: macro'
- ':::no-loc(_NO_SIZED_DEALLOCATION)::: macro'
- ':::no-loc(_OPENMP)::: macro'
- ':::no-loc(_PREFAST_)::: macro'
- ':::no-loc(_RESUMABLE_FUNCTIONS_SUPPORTED)::: macro'
- ':::no-loc(_RTC_CONVERSION_CHECKS_ENABLED)::: macro'
- ':::no-loc(__STDC__)::: macro'
- ':::no-loc(__STDC_HOSTED__)::: macro'
- ':::no-loc(__STDCPP_THREADS__)::: macro'
- ':::no-loc(__TIME__)::: macro'
- ':::no-loc(__TIMESTAMP__)::: macro'
- ':::no-loc(__VA_ARGS__)::: macro'
- ':::no-loc(_VC_NODEFAULTLIB)::: macro'
- ':::no-loc(_WCHAR_T_DEFINED)::: macro'
- ':::no-loc(_WIN32)::: macro'
- ':::no-loc(_WIN64)::: macro'
- ':::no-loc(_WINRT_DLL)::: macro'
- ':::no-loc(__func__)::: identifier'
ms.assetid: 1cc5f70a-a225-469c-aed0-fe766238e23f
no-loc:
- ':::no-loc(_ATL_VER):::'
- ':::no-loc(__ATOM__):::'
- ':::no-loc(__AVX__):::'
- ':::no-loc(__AVX2__):::'
- ':::no-loc(__AVX512BW__):::'
- ':::no-loc(__AVX512CD__):::'
- ':::no-loc(__AVX512DQ__):::'
- ':::no-loc(__AVX512F__):::'
- ':::no-loc(__AVX512VL__):::'
- ':::no-loc(_CHAR_UNSIGNED):::'
- ':::no-loc(__CLR_VER):::'
- ':::no-loc(_CONTROL_FLOW_GUARD):::'
- ':::no-loc(__COUNTER__):::'
- ':::no-loc(__cplusplus):::'
- ':::no-loc(__cplusplus_cli):::'
- ':::no-loc(__cplusplus_winrt):::'
- ':::no-loc(_CPPRTTI):::'
- ':::no-loc(_CPPUNWIND):::'
- ':::no-loc(__DATE__):::'
- ':::no-loc(_DEBUG):::'
- ':::no-loc(_DLL):::'
- ':::no-loc(__FILE__):::'
- ':::no-loc(__FUNCDNAME__):::'
- ':::no-loc(__FUNCSIG__):::'
- ':::no-loc(__FUNCTION__):::'
- ':::no-loc(_INTEGRAL_MAX_BITS):::'
- ':::no-loc(_ISO_VOLATILE):::'
- ':::no-loc(_KERNEL_MODE):::'
- ':::no-loc(__LINE__):::'
- ':::no-loc(_M_AMD64):::'
- ':::no-loc(_M_ARM):::'
- ':::no-loc(_M_ARM_ARMV7VE):::'
- ':::no-loc(_M_ARM_FP):::'
- ':::no-loc(_M_ARM64):::'
- ':::no-loc(_M_CEE):::'
- ':::no-loc(_M_CEE_PURE):::'
- ':::no-loc(_M_CEE_SAFE):::'
- ':::no-loc(_M_FP_EXCEPT):::'
- ':::no-loc(_M_FP_FAST):::'
- ':::no-loc(_M_FP_PRECISE):::'
- ':::no-loc(_M_FP_STRICT):::'
- ':::no-loc(_M_IX86):::'
- ':::no-loc(_M_IX86_FP):::'
- ':::no-loc(_M_X64):::'
- ':::no-loc(_MANAGED):::'
- ':::no-loc(_MFC_VER):::'
- ':::no-loc(_MSC_BUILD):::'
- ':::no-loc(_MSC_EXTENSIONS):::'
- ':::no-loc(_MSC_FULL_VER):::'
- ':::no-loc(_MSC_VER):::'
- ':::no-loc(_MSVC_LANG):::'
- ':::no-loc(__MSVC_RUNTIME_CHECKS):::'
- ':::no-loc(_MT):::'
- ':::no-loc(_NATIVE_WCHAR_T_DEFINED):::'
- ':::no-loc(_NO_SIZED_DEALLOCATION):::'
- ':::no-loc(_OPENMP):::'
- ':::no-loc(_PREFAST_):::'
- ':::no-loc(_RESUMABLE_FUNCTIONS_SUPPORTED):::'
- ':::no-loc(_RTC_CONVERSION_CHECKS_ENABLED):::'
- ':::no-loc(__STDC__):::'
- ':::no-loc(__STDC_HOSTED__):::'
- ':::no-loc(__STDCPP_THREADS__):::'
- ':::no-loc(__TIME__):::'
- ':::no-loc(__TIMESTAMP__):::'
- ':::no-loc(__VA_ARGS__):::'
- ':::no-loc(_VC_NODEFAULTLIB):::'
- ':::no-loc(_WCHAR_T_DEFINED):::'
- ':::no-loc(_WIN32):::'
- ':::no-loc(_WIN64):::'
- ':::no-loc(_WINRT_DLL):::'
- ':::no-loc(__func__):::'
ms.openlocfilehash: 1c7b2f18aede84d8067c36537f33261554c16c17
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222641"
---
# <a name="predefined-macros"></a>Macro predefinite

Il compilatore Microsoft C/C++ (MSVC) predefinisce alcune macro del preprocessore, a seconda del linguaggio (C o C++), della destinazione di compilazione e delle opzioni del compilatore selezionate.

MSVC supporta le macro predefinite del preprocessore richieste dagli standard C99 ANSI/ISO e ISO C++ 14 e C++ 17. L'implementazione supporta inoltre diverse macro del preprocessore specifiche di Microsoft. Alcune macro sono definite solo per specifici ambienti di compilazione o opzioni del compilatore. Eccetto laddove indicato, le macro vengono definite in un'unità di conversione come se fossero specificate come **`/D`** argomenti di opzioni del compilatore. Quando è definito, le macro vengono espanse in base ai valori specificati dal preprocessore prima della compilazione. Le macro predefinite non accettano argomenti e non possono essere ridefinite.

## <a name="standard-predefined-identifier"></a>Identificatore predefinito standard

Il compilatore supporta questo identificatore predefinito specificato da ISO C99 e ISO C++ 11.

- `:::no-loc(__func__):::`Nome non qualificato e non decorato della funzione contenitore come matrice **const statica** locale della funzione di **`char`** .

    ```cpp
    void example(){
        printf("%s\n", :::no-loc(__func__):::);
    } // prints "example"
    ```

## <a name="standard-predefined-macros"></a>Macro predefinite standard

Il compilatore supporta queste macro predefinite specificate dagli standard ISO C99 e ISO C++ 17.

- `:::no-loc(__cplusplus):::`Definito come valore letterale integer quando l'unità di conversione viene compilata come C++. In caso contrario, non definito.

- `:::no-loc(__DATE__):::`Data di compilazione del file di origine corrente. La data è un valore letterale stringa di lunghezza costante nel formato *mmm gg aaaa*. Il nome del mese *mmm* corrisponde al nome abbreviato del mese generato dalla funzione [asctime](../c-runtime-library/reference/asctime-wasctime.md) della libreria di runtime C (CRT). Il primo carattere della data *GG* è uno spazio se il valore è minore di 10. Questa macro è sempre definita.

- `:::no-loc(__FILE__):::`Nome del file di origine corrente. `:::no-loc(__FILE__):::`si espande in un valore letterale stringa di caratteri. Per assicurarsi che venga visualizzato il percorso completo del file, usare [ **`/FC`** (percorso completo del file di codice sorgente nella diagnostica)](../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md). Questa macro è sempre definita.

- `:::no-loc(__LINE__):::`Definito come numero di riga integer nel file di origine corrente. Il valore della `:::no-loc(__LINE__):::` macro può essere modificato tramite una `#line` direttiva. Questa macro è sempre definita.

- `:::no-loc(__STDC__):::`Definito come 1 solo quando viene compilato come C e se [**`/Za`**](../build/reference/za-ze-disable-language-extensions.md) viene specificata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(__STDC_HOSTED__):::`Definito come 1 se l'implementazione di è un' *implementazione ospitata*, una che supporta l'intera libreria standard richiesta. In caso contrario, viene definito come 0.

- `:::no-loc(__STDCPP_THREADS__):::`Definito come 1 se e solo se un programma può avere più di un thread di esecuzione e compilato come C++. In caso contrario, non definito.

- `:::no-loc(__TIME__):::`Ora di traduzione dell'unità di conversione pre-elaborata. L'ora è un valore letterale stringa di caratteri nel formato *hh: mm: SS*, uguale all'ora restituita dalla funzione [asctime](../c-runtime-library/reference/asctime-wasctime.md) CRT. Questa macro è sempre definita.

## <a name="microsoft-specific-predefined-macros"></a>Macro predefinite specifiche di Microsoft

MSVC supporta queste macro predefinite aggiuntive.

- `:::no-loc(__ATOM__):::`Definito come 1 quando [**`/favor:ATOM`**](../build/reference/favor-optimize-for-architecture-specifics.md) viene impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(__AVX__):::`Definito come 1 quando [**`/arch:AVX`**](../build/reference/arch-x86.md) [**`/arch:AVX2`**](../build/reference/arch-x86.md) [**`/arch:AVX512`**](../build/reference/arch-x86.md) sono impostate le opzioni del compilatore, o e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(__AVX2__):::`Definito come 1 quando [**`/arch:AVX2`**](../build/reference/arch-x86.md) [**`/arch:AVX512`**](../build/reference/arch-x86.md) viene impostata l'opzione del compilatore o e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(__AVX512BW__):::`Definito come 1 quando [**`/arch:AVX512`**](../build/reference/arch-x86.md) viene impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(__AVX512CD__):::`Definito come 1 quando [**`/arch:AVX512`**](../build/reference/arch-x86.md) viene impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(__AVX512DQ__):::`Definito come 1 quando [**`/arch:AVX512`**](../build/reference/arch-x86.md) viene impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(__AVX512F__):::`Definito come 1 quando [**`/arch:AVX512`**](../build/reference/arch-x86.md) viene impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(__AVX512VL__):::`Definito come 1 quando [**`/arch:AVX512`**](../build/reference/arch-x86.md) viene impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.

- `:::no-loc(_CHAR_UNSIGNED):::`Definito come 1 se il **`char`** tipo predefinito è senza segno. Questo valore viene definito quando viene impostata l'opzione del compilatore [ **`/J`** (tipo char predefinito senza segno)](../build/reference/j-default-char-type-is-unsigned.md) . In caso contrario, non definito.

- `:::no-loc(__CLR_VER):::`Definito come valore letterale integer che rappresenta la versione di Common Language Runtime (CLR) usata per compilare l'app. Il valore è codificato nel formato `Mmmbbbbb` , dove `M` è la versione principale del runtime, `mm` è la versione secondaria del runtime e `bbbbb` è il numero di Build. `:::no-loc(__CLR_VER):::`viene definito se [**`/clr`**](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.

    ```cpp
    // clr_ver.cpp
    // compile with: /clr
    using namespace System;
    int main() {
       Console::WriteLine(:::no-loc(__CLR_VER):::);
    }
    ```

- `:::no-loc(_CONTROL_FLOW_GUARD):::`Definito come 1 quando viene impostata l'opzione del compilatore [ **`/guard:cf`** (Abilita Guard flusso di controllo)](../build/reference/guard-enable-control-flow-guard.md) . In caso contrario, non definito.

- `:::no-loc(__COUNTER__):::`Si espande in un valore letterale integer che inizia da 0. Il valore viene incrementato di 1 ogni volta che viene usato in un file di origine o nelle intestazioni incluse del file di origine. `:::no-loc(__COUNTER__):::` memorizza il rispettivo stato quando si usano intestazioni precompilate. Questa macro è sempre definita.

  In questo esempio viene usato `:::no-loc(__COUNTER__):::` per assegnare identificatori univoci a tre oggetti diversi dello stesso tipo. Il `exampleClass` costruttore accetta un Integer come parametro. In `main` , l'applicazione dichiara tre oggetti di tipo `exampleClass` , usando `:::no-loc(__COUNTER__):::` come parametro identificatore univoco:

    ```cpp
    // macro:::no-loc(__COUNTER__):::.cpp
    // Demonstration of :::no-loc(__COUNTER__):::, assigns unique identifiers to
    // different objects of the same type.
    // Compile by using: cl /EHsc /W4 macro:::no-loc(__COUNTER__):::.cpp
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
        // :::no-loc(__COUNTER__)::: is initially defined as 0
        exampleClass e1(:::no-loc(__COUNTER__):::);

        // On the second reference, :::no-loc(__COUNTER__)::: is now defined as 1
        exampleClass e2(:::no-loc(__COUNTER__):::);

        // :::no-loc(__COUNTER__)::: is now defined as 2
        exampleClass e3(:::no-loc(__COUNTER__):::);

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

- `:::no-loc(__cplusplus_cli):::`Definito come valore letterale integer 200406 quando viene compilato come C++ e [**`/clr`**](../build/reference/clr-common-language-runtime-compilation.md) viene impostata un'opzione del compilatore. In caso contrario, non definito. Quando è definito, `:::no-loc(__cplusplus_cli):::` è attivo nell'unità di conversione.

    ```cpp
    // cplusplus_cli.cpp
    // compile by using /clr
    #include "stdio.h"
    int main() {
       #ifdef :::no-loc(__cplusplus_cli):::
          printf("%d\n", :::no-loc(__cplusplus_cli):::);
       #else
          printf("not defined\n");
       #endif
    }
    ```

- `:::no-loc(__cplusplus_winrt):::`Definito come valore letterale integer 201009 quando viene compilato come C++ e l'opzione del compilatore [ **`/ZW`** (Windows Runtime compilazione)](../build/reference/zw-windows-runtime-compilation.md) è impostata. In caso contrario, non definito.

- `:::no-loc(_CPPRTTI):::`Definito come 1 se è impostata l'opzione del compilatore [ **`/GR`** (Abilita informazioni sui tipi in fase di esecuzione)](../build/reference/gr-enable-run-time-type-information.md) . In caso contrario, non definito.

- `:::no-loc(_CPPUNWIND):::`Definito come 1 se sono impostate una o più opzioni del compilatore ( [ **`/GX`** Abilita gestione eccezioni)](../build/reference/gx-enable-exception-handling.md), [ **`/clr`** (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md)o [ **`/EH`** (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md) . In caso contrario, non definito.

- `:::no-loc(_DEBUG):::`Definito come 1 quando [**`/LDd`**](../build/reference/md-mt-ld-use-run-time-library.md) [**`/MDd`**](../build/reference/md-mt-ld-use-run-time-library.md) [**`/MTd`**](../build/reference/md-mt-ld-use-run-time-library.md) viene impostata l'opzione del compilatore, o. In caso contrario, non definito.

- `:::no-loc(_DLL):::`Definito come 1 quando [**`/MD`**](../build/reference/md-mt-ld-use-run-time-library.md) [**`/MDd`**](../build/reference/md-mt-ld-use-run-time-library.md) è impostata l'opzione del compilatore o (DLL multithread). In caso contrario, non definito.

- `:::no-loc(__FUNCDNAME__):::`Definito come valore letterale stringa che contiene il [nome decorato](../build/reference/decorated-names.md) della funzione contenitore. La macro viene definita solo all'interno di una funzione. La `:::no-loc(__FUNCDNAME__):::` macro non viene espansa se si usa l' [**`/EP`**](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) [**`/P`**](../build/reference/p-preprocess-to-a-file.md) opzione del compilatore o.

   Questo esempio usa le `:::no-loc(__FUNCDNAME__):::` `:::no-loc(__FUNCSIG__):::` macro, e `:::no-loc(__FUNCTION__):::` per visualizzare le informazioni sulle funzioni.

   [!code-cpp[NVC_Predefined_Macros_Examples#1](../preprocessor/codesnippet/CPP/predefined-macros_1.cpp)]

- `:::no-loc(__FUNCSIG__):::`Definito come valore letterale stringa che contiene la firma della funzione contenitore. La macro viene definita solo all'interno di una funzione. La `:::no-loc(__FUNCSIG__):::` macro non viene espansa se si usa l' [**`/EP`**](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) [**`/P`**](../build/reference/p-preprocess-to-a-file.md) opzione del compilatore o. Quando viene compilato per una destinazione a 64 bit, la convenzione di chiamata è **`__cdecl`** per impostazione predefinita. Per un esempio di utilizzo, vedere la `:::no-loc(__FUNCDNAME__):::` macro.

- `:::no-loc(__FUNCTION__):::`Definito come valore letterale stringa che contiene il nome non decorato della funzione contenitore. La macro viene definita solo all'interno di una funzione. La `:::no-loc(__FUNCTION__):::` macro non viene espansa se si usa l' [**`/EP`**](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) [**`/P`**](../build/reference/p-preprocess-to-a-file.md) opzione del compilatore o. Per un esempio di utilizzo, vedere la `:::no-loc(__FUNCDNAME__):::` macro.

- `:::no-loc(_INTEGRAL_MAX_BITS):::`Definito come valore letterale integer 64, dimensione massima (in bit) per un tipo integrale non vettoriale. Questa macro è sempre definita.

   ```cpp
   // integral_max_bits.cpp
   #include <stdio.h>
   int main() {
      printf("%d\n", :::no-loc(_INTEGRAL_MAX_BITS):::);
   }
   ```

- `__INTELLISENSE__`Definito come 1 durante un passaggio del compilatore IntelliSense nell'IDE di Visual Studio. In caso contrario, non definito. È possibile utilizzare questa macro per sorvegliare il codice che il compilatore IntelliSense non riconosce oppure utilizzarlo per passare da un compilatore di compilazione a un compilatore IntelliSense e viceversa. Per ulteriori informazioni, vedere [Suggerimenti per la risoluzione dei problemi relativi a IntelliSense lentezza](https://devblogs.microsoft.com/cppblog/troubleshooting-tips-for-intellisense-slowness/).

- `:::no-loc(_ISO_VOLATILE):::`Definito come 1 se [**`/volatile:iso`**](../build/reference/volatile-volatile-keyword-interpretation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_KERNEL_MODE):::`Definito come 1 se è impostata l'opzione del compilatore [ **`/kernel`** (create kernel mode Binary)](../build/reference/kernel-create-kernel-mode-binary.md) . In caso contrario, non definito.

- `:::no-loc(_M_AMD64):::`Definito come valore letterale integer 100 per le compilazioni destinate a processori x64. In caso contrario, non definito.

- `:::no-loc(_M_ARM):::`Definito come valore letterale integer 7 per le compilazioni destinate a processori ARM. In caso contrario, non definito.

- `:::no-loc(_M_ARM_ARMV7VE):::`Definito come 1 quando [**`/arch:ARMv7VE`**](../build/reference/arch-arm.md) viene impostata l'opzione del compilatore per le compilazioni destinate a processori ARM. In caso contrario, non definito.

- `:::no-loc(_M_ARM_FP):::`Definito come valore letterale integer che indica quale [**`/arch`**](../build/reference/arch-arm.md) opzione del compilatore è stata impostata per le destinazioni del processore ARM. In caso contrario, non definito.

  - Valore compreso nell'intervallo 30-39 se non **`/arch`** è stata specificata alcuna opzione ARM, che indica l'architettura predefinita per ARM è stata impostata ( `VFPv3` ).

  - Valore compreso nell'intervallo 40-49 se **`/arch:VFPv4`** è stato impostato.

  - Per ulteriori informazioni, vedere [ **`/arch`** (ARM)](../build/reference/arch-arm.md).

- `:::no-loc(_M_ARM64):::`Definito come 1 per le compilazioni destinate a processori ARM a 64 bit. In caso contrario, non definito.

- `:::no-loc(_M_CEE):::`Definito come 001 Se è impostata un'opzione del compilatore [ **`/clr`** (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) . In caso contrario, non definito.

- `:::no-loc(_M_CEE_PURE):::`Obsoleto a partire da Visual Studio 2015. Definito come 001 Se [**`/clr:pure`**](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_M_CEE_SAFE):::`Obsoleto a partire da Visual Studio 2015. Definito come 001 Se [**`/clr:safe`**](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_M_FP_EXCEPT):::`Definito come 1 se [**`/fp:except`**](../build/reference/fp-specify-floating-point-behavior.md) [**`/fp:strict`**](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore o. In caso contrario, non definito.

- `:::no-loc(_M_FP_FAST):::`Definito come 1 se [**`/fp:fast`**](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_M_FP_PRECISE):::`Definito come 1 se [**`/fp:precise`**](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_M_FP_STRICT):::`Definito come 1 se [**`/fp:strict`**](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_M_IX86):::`Definito come valore letterale integer 600 per le compilazioni destinate a processori x86. Questa macro non è definita per le destinazioni di compilazione ARM o x64.

- `:::no-loc(_M_IX86_FP):::`Definito come valore letterale integer che indica l' [**`/arch`**](../build/reference/arch-arm.md) opzione del compilatore impostata o l'oggetto predefinito. Questa macro viene sempre definita quando la destinazione di compilazione è un processore x86. In caso contrario, non definito. Se definito, il valore è:

  - 0 se `/arch:IA32` è stata impostata l'opzione del compilatore.

  - 1 se `/arch:SSE` è stata impostata l'opzione del compilatore.

  - 2 Se `/arch:SSE2` `/arch:AVX` `/arch:AVX2` `/arch:AVX512` è stata impostata l'opzione del compilatore,, o. Questo valore è l'impostazione predefinita se `/arch` non è stata specificata un'opzione del compilatore. Quando `/arch:AVX` si specifica, `:::no-loc(__AVX__):::` viene definita anche la macro. Quando `/arch:AVX2` si specifica, `:::no-loc(__AVX__):::` `:::no-loc(__AVX2__):::` vengono definiti anche e. Quando `/arch:AVX512` si specifica, `:::no-loc(__AVX__):::` `:::no-loc(__AVX2__):::` `:::no-loc(__AVX512BW__):::` `:::no-loc(__AVX512CD__):::` `:::no-loc(__AVX512DQ__):::` `:::no-loc(__AVX512F__):::` `:::no-loc(__AVX512VL__):::` vengono definiti anche,,,,,, e.

  - Per ulteriori informazioni, vedere [ **`/arch`** (x86)](../build/reference/arch-x86.md).

- `:::no-loc(_M_X64):::`Definito come valore letterale integer 100 per le compilazioni destinate a processori x64. In caso contrario, non definito.

- `:::no-loc(_MANAGED):::`Definito come 1 quando [**`/clr`**](../build/reference/clr-common-language-runtime-compilation.md) viene impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_MSC_BUILD):::`Definito come valore letterale integer che contiene l'elemento numero di revisione del numero di versione del compilatore. Il numero di revisione è il quarto elemento del numero di versione separato dal punto. Se, ad esempio, il numero di versione del compilatore Microsoft C/C++ è 15.00.20706.01, la `:::no-loc(_MSC_BUILD):::` macro restituisce 1. Questa macro è sempre definita.

- `:::no-loc(_MSC_EXTENSIONS):::`Definito come 1 se è impostata l'opzione del compilatore on-by-default [ **`/Ze`** (Enable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) . In caso contrario, non definito.

- `:::no-loc(_MSC_FULL_VER):::`Definito come valore letterale integer che codifica gli elementi principale, secondario e numero di build del numero di versione del compilatore. Il numero principale è il primo elemento del numero di versione separato dal punto, il numero secondario è il secondo elemento e il numero di build è il terzo elemento. Se, ad esempio, il numero di versione del compilatore Microsoft C/C++ è 15.00.20706.01, la `:::no-loc(_MSC_FULL_VER):::` macro restituisce 150020706. Immettere `cl /?` nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro è sempre definita.

- `:::no-loc(_MSC_VER):::`Definito come valore letterale integer che codifica gli elementi numerici principali e secondari del numero di versione del compilatore. Il numero principale è il primo elemento del numero di versione separato dal punto e il numero secondario è il secondo elemento. Se, ad esempio, il numero di versione del compilatore Microsoft C/C++ è 17.00.51106.1, la `:::no-loc(_MSC_VER):::` macro restituisce 1700. Immettere `cl /?` nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro è sempre definita.

   | Versione di Visual Studio | `:::no-loc(_MSC_VER):::` |
   |--|--|
   | Visual Studio 6.0 | 1200 |
   | Visual Studio .NET 2002 (7,0) | 1300 |
   | Visual Studio .NET 2003 (7,1) | 1310 |
   | Visual Studio 2005 (8,0) | 1400 |
   | Visual Studio 2008 (9,0) | 1500 |
   | Visual Studio 2010 (10,0) | 1600 |
   | Visual Studio 2012 (11,0) | 1700 |
   | Visual Studio 2013 (12,0) | 1800 |
   | Visual Studio 2015 (14,0) | 1900 |
   | Visual Studio 2017 RTW (15,0) | 1910 |
   | Visual Studio 2017 versione 15.3 | 1911 |
   | Visual Studio 2017 versione 15.5 | 1912 |
   | Visual Studio 2017 versione 15.6 | 1913 |
   | Visual Studio 2017 versione 15.7 | 1914 |
   | Visual Studio 2017 versione 15.8 | 1915 |
   | Visual Studio 2017 versione 15,9 | 1916 |
   | Visual Studio 2019 RTW (16,0) | 1920 |
   | Visual Studio 2019 versione 16.1 | 1921 |
   | Visual Studio 2019 versione 16.2 | 1922 |
   | Visual Studio 2019 versione 16,3 | 1923 |
   |  Visual Studio 2019 versione 16.4 | 1924 |
   | Visual Studio 2019 versione 16,5 | 1925 |
   | Visual Studio 2019 versione 16,6 | 1926 |
   | Visual Studio 2019 versione 16,7 | 1927 |

   Per testare le versioni del compilatore o gli aggiornamenti in una determinata versione di Visual Studio o dopo, usare l' `>=` operatore. È possibile usarlo in una direttiva condizionale per eseguire il confronto con `:::no-loc(_MSC_VER):::` la versione nota. Se si dispone di diverse versioni che si escludono a vicenda, ordinare i confronti in ordine decrescente in base al numero di versione. Questo codice, ad esempio, consente di verificare la presenza di compilatori rilasciati in Visual Studio 2017 e versioni successive. Quindi, verifica i compilatori rilasciati in o dopo Visual Studio 2015. Verifica quindi la presenza di tutti i compilatori rilasciati prima di Visual Studio 2015:

   ```cpp
   #if :::no-loc(_MSC_VER)::: >= 1910
   // . . .
   #elif :::no-loc(_MSC_VER)::: >= 1900
   // . . .
   #else
   // . . .
   #endif
   ```

   Per ulteriori informazioni, vedere [Visual C++ versione del compilatore](https://devblogs.microsoft.com/cppblog/visual-c-compiler-version/) nel Blog del team di Microsoft C++.

- `:::no-loc(_MSVC_LANG):::`Definito come valore letterale integer che specifica lo standard del linguaggio C++ di destinazione del compilatore. Viene impostato solo nel codice compilato come C++. La macro è il valore letterale integer 201402L per impostazione predefinita o quando [**`/std:c++14`**](../build/reference/std-specify-language-standard-version.md) viene specificata l'opzione del compilatore. Se [**`/std:c++17`**](../build/reference/std-specify-language-standard-version.md) è specificata l'opzione del compilatore, la macro viene impostata su 201703L. Viene impostato su un valore superiore non specificato quando [**`/std:c++latest`**](../build/reference/std-specify-language-standard-version.md) si specifica l'opzione. In caso contrario, la macro non è definita. Le `:::no-loc(_MSVC_LANG):::` Opzioni del compilatore macro e [ **`/std`** (specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md) sono disponibili a partire da Visual Studio 2015 Update 3.

- `:::no-loc(__MSVC_RUNTIME_CHECKS):::`Definito come 1 quando [**`/RTC`**](../build/reference/rtc-run-time-error-checks.md) viene impostata una delle opzioni del compilatore. In caso contrario, non definito.

- `_MSVC_TRADITIONAL`Definito come 0 quando [**`/experimental:preprocessor`**](../build/reference/experimental-preprocessor.md) viene impostata l'opzione del compilatore della modalità di conformità del preprocessore. Definito come 1 per impostazione predefinita o quando [**`/experimental:preprocessor-`**](../build/reference/experimental-preprocessor.md) è impostata l'opzione del compilatore, per indicare che il preprocessore tradizionale è in uso. L' `_MSVC_TRADITIONAL` opzione del compilatore macro e [ **`/experimental:preprocessor`** (Abilita modalità di conformità del preprocessore)](../build/reference/experimental-preprocessor.md) è disponibile a partire da Visual Studio 2017 versione 15,8.

   ```cpp
   #if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
   // Logic using the traditional preprocessor
   #else
   // Logic using cross-platform compatible preprocessor
   #endif
   ```

- `:::no-loc(_MT):::`Definito come 1 quando si specifica [ **`/MD`** o **`/MDd`** (DLL multithread)](../build/reference/md-mt-ld-use-run-time-library.md) o [ **`/MT`** o **`/MTd`** (multithread)](../build/reference/md-mt-ld-use-run-time-library.md) . In caso contrario, non definito.

- `:::no-loc(_NATIVE_WCHAR_T_DEFINED):::`Definito come 1 quando [**`/Zc:wchar_t`**](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) viene impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(_OPENMP):::`Definito come valore letterale integer 200203, se è impostata l'opzione del compilatore [ **`/openmp`** (Abilita supporto OpenMP 2,0)](../build/reference/openmp-enable-openmp-2-0-support.md) . Questo valore rappresenta la data della specifica OpenMP implementata da MSVC. In caso contrario, non definito.

   ```cpp
   // :::no-loc(_OPENMP):::_dir.cpp
   // compile with: /openmp
   #include <stdio.h>
   int main() {
      printf("%d\n", :::no-loc(_OPENMP):::);
   }
   ```

- `:::no-loc(_PREFAST_):::`Definito come 1 quando [**`/analyze`**](../build/reference/analyze-code-analysis.md) viene impostata l'opzione del compilatore. In caso contrario, non definito.

- `:::no-loc(__TIMESTAMP__):::`Definito come valore letterale stringa che contiene la data e l'ora dell'Ultima modifica del file di origine corrente, nel formato di lunghezza costante abbreviato restituito dalla [`asctime`](../c-runtime-library/reference/asctime-wasctime.md) funzione CRT, ad esempio `Fri 19 Aug 13:32:58 2016` . Questa macro è sempre definita.

- `:::no-loc(_VC_NODEFAULTLIB):::`Definito come 1 quando viene impostata l'opzione del compilatore [ **`/Zl`** (omettere il nome della libreria predefinita)](../build/reference/zl-omit-default-library-name.md) . In caso contrario, non definito.

- `:::no-loc(_WCHAR_T_DEFINED):::`Definito come 1 quando [**`/Zc:wchar_t`**](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) viene impostata l'opzione predefinita del compilatore. La `:::no-loc(_WCHAR_T_DEFINED):::` macro è definita, ma non ha alcun valore se l' **`/Zc:wchar_t-`** opzione del compilatore è impostata e **`wchar_t`** viene definita in un file di intestazione di sistema incluso nel progetto. In caso contrario, non definito.

- `:::no-loc(_WIN32):::`Definito come 1 quando la destinazione di compilazione è ARM a 32 bit, ARM a 64 bit, x86 o x64. In caso contrario, non definito.

- `:::no-loc(_WIN64):::`Definito come 1 quando la destinazione di compilazione è ARM a 64 bit o x64. In caso contrario, non definito.

- `:::no-loc(_WINRT_DLL):::`Definito come 1 quando viene compilato come C++ ed è impostata l'opzione [ **`/ZW`** (compilazione Windows Runtime)](../build/reference/zw-windows-runtime-compilation.md) [ **`/LD`** **`/LDd`** e le opzioni del compilatore](../build/reference/md-mt-ld-use-run-time-library.md) . In caso contrario, non definito.

Nessuna macro del preprocessore che identifichi la versione della libreria MFC o ATL è predefinita dal compilatore. Le intestazioni ATL e MFC definiscono le macro della versione internamente. Non sono definite nelle direttive per il preprocessore eseguite prima dell'inclusione dell'intestazione richiesta.

- `:::no-loc(_ATL_VER):::`Definito in \<atldef.h> come valore letterale integer che codifica il numero di versione ATL.

- `:::no-loc(_MFC_VER):::`Definito in \<afxver_.h> come valore letterale integer che codifica il numero di versione di MFC.

## <a name="see-also"></a>Vedere anche

[Macro (C/C++)](../preprocessor/macros-c-cpp.md)<br/>
[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)<br/>
[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
