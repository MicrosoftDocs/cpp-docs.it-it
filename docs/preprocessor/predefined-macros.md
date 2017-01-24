---
title: "Macro predefinite | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_ATL_VER"
  - "__ATOM__"
  - "__AVX__"
  - "__AVX2__"
  - "_CHAR_UNSIGNED"
  - "__CLR_VER"
  - "_CONTROL_FLOW_GUARD"
  - "__COUNTER__"
  - "__cplusplus"
  - "__cplusplus_cli"
  - "__cplusplus_winrt"
  - "_CPPRTTI"
  - "_CPPUNWIND"
  - "__DATE__"
  - "_DEBUG"
  - "_DLL"
  - "__FILE__"
  - "__FUNCDNAME__"
  - "__FUNCSIG__"
  - "__FUNCTION__"
  - "_INTEGRAL_MAX_BITS"
  - "_ISO_VOLATILE"
  - "_KERNEL_MODE"
  - "__LINE__"
  - "_M_AMD64"
  - "_M_ARM"
  - "_M_ARM_ARMV7VE"
  - "_M_ARM_FP"
  - "_M_ARM64"
  - "_M_CEE"
  - "_M_CEE_PURE"
  - "_M_CEE_SAFE"
  - "_M_FP_EXCEPT"
  - "_M_FP_FAST"
  - "_M_FP_PRECISE"
  - "_M_FP_STRICT"
  - "_M_IX86"
  - "_M_IX86_FP"
  - "_M_X64"
  - "_MANAGED"
  - "_MFC_VER"
  - "_MSC_BUILD"
  - "_MSC_EXTENSIONS"
  - "_MSC_FULL_VER"
  - "_MSC_VER"
  - "_MSVC_LANG"
  - "__MSVC_RUNTIME_CHECKS"
  - "_MT"
  - "_NATIVE_WCHAR_T_DEFINED"
  - "_NO_SIZED_DEALLOCATION"
  - "_OPENMP"
  - "_PREFAST_"
  - "_RESUMABLE_FUNCTIONS_SUPPORTED"
  - "_RTC_CONVERSION_CHECKS_ENABLED"
  - "__STDC__"
  - "__STDC_HOSTED__"
  - "__STDCPP_THREADS__"
  - "__TIME__"
  - "__TIMESTAMP__"
  - "__VA_ARGS__"
  - "_VC_NODEFAULTLIB"
  - "_WCHAR_T_DEFINED"
  - "_WIN32"
  - "_WIN64"
  - "_WINRT_DLL"
  - "__func__"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "timestamp, macro del preprocessore"
  - "compilatore CL.exe, numero di versione"
  - "numeri di versione, il compilatore C/C++ (cl.exe)"
  - "macro predefinite C++"
  - "macro del preprocessore,"
  - "macro predefinite"
  - "_ATL_VER (macro)"
  - "Macro __ATOM__"
  - "__AVX__ (macro)"
  - "__AVX2__ (macro)"
  - "_CHAR_UNSIGNED (macro)"
  - "__CLR_VER (macro)"
  - "Macro _CONTROL_FLOW_GUARD"
  - "__COUNTER__ (macro)"
  - "__cplusplus (macro)"
  - "__cplusplus_cli (macro)"
  - "__cplusplus_winrt (macro)"
  - "_CPPRTTI (macro)"
  - "_CPPUNWIND (macro)"
  - "__DATE__ (macro)"
  - "_DEBUG (macro)"
  - "_DLL (macro)"
  - "__FILE__ (macro)"
  - "__FUNCDNAME__ (macro)"
  - "__FUNCSIG__ (macro)"
  - "__FUNCTION__ (macro)"
  - "_INTEGRAL_MAX_BITS (macro)"
  - "Macro _ISO_VOLATILE"
  - "Macro _KERNEL_MODE"
  - "__LINE__ (macro)"
  - "_M_AMD64 (macro)"
  - "_M_ARM (macro)"
  - "_M_ARM_ARMV7VE (macro)"
  - "_M_ARM_FP (macro)"
  - "_M_ARM64 (macro)"
  - "_M_CEE (macro)"
  - "_M_CEE_PURE (macro)"
  - "_M_CEE_SAFE (macro)"
  - "Macro _M_FP_EXCEPT"
  - "Macro _M_FP_FAST"
  - "Macro _M_FP_PRECISE"
  - "Macro _M_FP_STRICT"
  - "_M_IX86 (macro)"
  - "_M_IX86_FP (macro)"
  - "_M_X64 (macro)"
  - "_MANAGED (macro)"
  - "_MFC_VER (macro)"
  - "_MSC_BUILD (macro)"
  - "_MSC_EXTENSIONS (macro)"
  - "_MSC_FULL_VER (macro)"
  - "_MSC_VER (macro)"
  - "Macro _MSVC_LANG"
  - "__MSVC_RUNTIME_CHECKS (macro)"
  - "_MT (macro)"
  - "_NATIVE_WCHAR_T_DEFINED (macro)"
  - "Macro _NO_SIZED_DEALLOCATION"
  - "_OPENMP (macro)"
  - "Macro _PREFAST_"
  - "Macro _RESUMABLE_FUNCTIONS_SUPPORTED"
  - "Macro _RTC_CONVERSION_CHECKS_ENABLED"
  - "__STDC__ (macro)"
  - "Macro __STDC_HOSTED__"
  - "Macro __STDCPP_THREADS__"
  - "__TIME__ (macro)"
  - "__TIMESTAMP__ (macro)"
  - "Macro __VA_ARGS__"
  - "_VC_NODEFAULTLIB (macro)"
  - "_WCHAR_T_DEFINED (macro)"
  - "_WIN32 (macro)"
  - "_WIN64 (macro)"
  - "Macro _WINRT_DLL"
  - "Identificatore __func__"
ms.assetid: 1cc5f70a-a225-469c-aed0-fe766238e23f
caps.latest.revision: 75
caps.handback.revision: 75
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro predefinite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore Visual C++ sono disponibili alcune macro del preprocessore, a seconda del linguaggio (C o C++), la destinazione di compilazione e le opzioni del compilatore scelto.  
  
 Visual C++ supporta la necessarie macro predefinite del preprocessore specificate dallo standard ANSI/ISO C99 e ISO standard C++ 14. L'implementazione supporta anche diverse altre macro del preprocessore specifiche di Microsoft. Alcune macro sono definite solo per ambienti di compilazione specifica o le opzioni del compilatore. Se non specificato diversamente, le macro vengono definite in un'unità di conversione come se fossero stati specificati come **/D** argomenti dell'opzione del compilatore. Quando viene definito, le macro vengono espanse sui valori specificati per il preprocessore prima della compilazione. Le macro predefinite non accettano argomenti e non possono essere ridefinite.  
  
## <a name="standard-predefined-identifier"></a>Identificatore standard predefiniti  
 Il compilatore supporta questo identificatore predefinito specificato da ISO C99 e ISO C++ 11.  
  
-   **__func\_\_** il nome non qualificato e non decorato della funzione contenitore come una funzione locale `static``const` matrice `char`.  
  
    ```cpp  
    void example(){  
        printf("%s\n", __func__);  
    } // prints "example"  
    ```  
  
## <a name="standard-predefined-macros"></a>Macro predefinite standard  
 Il compilatore supporta queste macro predefinite specificate da ISO C99 e C + + 14 standard ISO.  
  
-   **cplusplus** definito come un valore letterale integer quando l'unità di conversione viene compilato come C++. In caso contrario, non definito.  
  
-   **__DATE\_\_** la data di compilazione del file di origine corrente. La data è una stringa di lunghezza costante letterale nel formato *gg Mmm aaaa*. Il nome del mese *Mmm* è lo stesso nome del mese abbreviato in date generate dalla libreria di Runtime C [asctime](../c-runtime-library/reference/asctime-wasctime.md) (funzione). Il primo carattere della data *gg* è uno spazio se il valore è inferiore a 10. Questa macro è sempre definita.  
  
-   **__FILE\_\_** il nome del file di origine corrente. **__FILE\_\_** si espande in una stringa di caratteri letterale. Per assicurarsi che venga visualizzato il percorso completo del file, utilizzare [/FC (completo percorso del File di codice sorgente nella diagnostica)](../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md). Questa macro è sempre definita.  
  
-   **__LINE\_\_** definito come il numero di riga integer nel file di origine corrente. Il valore di **__LINE\_\_** macro può essere modificata utilizzando un `#line` (direttiva). Questa macro è sempre definita.  
  
-   **__STDC\_\_** definito come 1 solo quando compilato come C e se il [/Za](../build/reference/za-ze-disable-language-extensions.md) è specificata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **__STDC_HOSTED\_\_** definito come 1 se l'implementazione è un *ospitato implementazione*, uno che supporti l'intera libreria standard necessario. In caso contrario, definito come 0.  
  
-   **__STDCPP_THREADS\_\_** definito come 1 se e solo se un programma può avere più di un thread di esecuzione e compilato come C++. In caso contrario, non definito.  
  
-   **__TIME\_\_** l'ora di conversione dell'unità di conversione pre-elaborato. Il tempo è una stringa di caratteri letterali nel formato *hh: mm:*, come l'ora restituita dalla libreria di Runtime C [asctime](../c-runtime-library/reference/asctime-wasctime.md) (funzione). Questa macro è sempre definita.  
  
## <a name="microsoft-specific-predefined-macros"></a>Macro predefinite specifiche di Microsoft  
 Microsoft Visual C++ supporta queste macro predefinite aggiuntive.  
  
-   **__ATOM\_\_** definito come 1 quando il [/favor:ATOM](../build/reference/favor-optimize-for-architecture-specifics.md) è impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.  
  
-   **__AVX\_\_** definito come 1 quando il [: AVX](../build/reference/arch-x86.md) o [/arch: avx2](../build/reference/arch-x86.md) sono impostate le opzioni del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.  
  
-   **__AVX2\_\_** definito come 1 quando il [/arch: avx2](../build/reference/arch-x86.md) è impostata l'opzione del compilatore e la destinazione del compilatore è x86 o x64. In caso contrario, non definito.  
  
-   **CHAR_UNSIGNED** definito come 1 se il valore predefinito `char` tipo è senza segno. Quando viene impostato il [/J (char predefinito è unsigned)](../build/reference/j-default-char-type-is-unsigned.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **CLR_VER** definito come valore letterale integer che rappresenta la versione di common language runtime utilizzata quando l'applicazione è stata compilata. Il valore viene codificato nel formato `Mmmbbbbb`, dove `M` è la versione principale del runtime, `mm` indica la versione secondaria del runtime e `bbbbb` è il numero di build. **CLR_VER** è definito se il [/clr](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
    ```cpp  
    // clr_ver.cpp  
    // compile with: /clr  
    using namespace System;  
    int main() {  
       Console::WriteLine(__CLR_VER);  
    }  
    ```  
  
-   **_CONTROL_FLOW_GUARD** definito come 1 quando il [/guard:cf (Abilita Guard flusso di controllo)](../build/reference/guard-enable-control-flow-guard.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **__COUNTER\_\_** Expands un valore letterale integer che inizia da 0 e viene incrementato di 1 ogni volta che viene utilizzata in un file di origine o incluso nelle intestazioni del file di origine. **__COUNTER\_\_** memorizza il rispettivo stato quando si utilizzano intestazioni precompilate. Questa macro è sempre definita.  
  
     Questo esempio viene utilizzato `__COUNTER__` per assegnare identificatori univoci a tre oggetti diversi dello stesso tipo. Il `exampleClass` costruttore accetta un integer come parametro. In `main`, l'applicazione dichiara tre oggetti di tipo `exampleClass`, utilizzando `__COUNTER__` come parametro dell'identificatore univoco:  
  
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
  
-   **cplusplus_cli** definito come il valore letterale integer 200406 quando compilato come C++ e [/clr](../build/reference/clr-common-language-runtime-compilation.md), [/clr: pure](../build/reference/clr-common-language-runtime-compilation.md), o [/clr: safe](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito. Quando viene definito, **cplusplus_cli** è attivo nell'unità di conversione.  
  
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
  
-   **cplusplus_winrt** definito come il valore letterale integer 201009 quando compilato come C++ e [/ZW (compilazione di Windows Runtime)](../build/reference/zw-windows-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **CPPRTTI** definito come 1 se la [/GR (Attiva informazioni sui tipi in fase di esecuzione)](../build/reference/gr-enable-run-time-type-information.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **Cppunwind** definito come 1 se uno o più di [/GX (Attiva gestione eccezioni)](../build/reference/gx-enable-exception-handling.md), [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), o [/EH (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md) vengono impostate le opzioni del compilatore. In caso contrario, non definito.  
  
-   **Debug** definito come 1 quando il [/LDd](../build/reference/md-mt-ld-use-run-time-library.md), [/MDd](../build/reference/md-mt-ld-use-run-time-library.md), o [/MTd](../build/reference/md-mt-ld-use-run-time-library.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **DLL** definito come 1 quando il [/MD](../build/reference/md-mt-ld-use-run-time-library.md) o [/MDd](../build/reference/md-mt-ld-use-run-time-library.md) è impostata l'opzione del compilatore (DLL con multithreading). In caso contrario, non definito.  
  
-   **__FUNCDNAME\_\_** definito come un valore letterale stringa che contiene il [nome decorato](../build/reference/decorated-names.md) della funzione contenitore. La macro viene definita solo all'interno di una funzione. Il **__FUNCDNAME\_\_** macro non viene espansa se si utilizza il [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore.  
  
     Questo esempio viene utilizzato il `__FUNCDNAME__`, `__FUNCSIG__`, e `__FUNCTION__` macro per visualizzare informazioni sulla funzione.  
  
     [!code-cpp[NVC_Predefined_Macros_Examples#1](../preprocessor/codesnippet/CPP/predefined-macros_1.cpp)]  
  
-   **__FUNCSIG\_\_** definito come valore letterale stringa che contiene la firma della funzione contenitore. La macro viene definita solo all'interno di una funzione. Il **__FUNCSIG\_\_** macro non viene espansa se si utilizza il [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore. Quando compilato per una destinazione a 64 bit, la convenzione di chiamata è `__cdecl` per impostazione predefinita. Per un esempio di utilizzo, vedere il `__FUNCDNAME__` (macro).  
  
-   **__FUNCTION\_\_** definito come un valore letterale stringa che contiene il nome non decorato della funzione contenitore. La macro viene definita solo all'interno di una funzione. Il **__FUNCTION\_\_** macro non viene espansa se si utilizza il [/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) o [/p](../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore. Per un esempio di utilizzo, vedere il `__FUNCDNAME__` (macro).  
  
-   **INTEGRAL_MAX_BITS** definito come il valore letterale integer 64, la dimensione massima (in bit) per un tipo integrale non vettoriale. Questa macro è sempre definita.  
  
    ```cpp  
    // integral_max_bits.cpp  
    #include <stdio.h>  
    int main() {  
       printf("%d\n", _INTEGRAL_MAX_BITS);  
    }  
    ```  
  
-   **__INTELLISENSE\_\_** definito al passaggio 1 durante un compilatore di IntelliSense nell'IDE di Visual Studio. In caso contrario, non definito. È possibile utilizzare questa macro per evitare codice al compilatore di IntelliSense non interpreta o utilizzarlo per passare tra la compilazione e del compilatore di IntelliSense. Per ulteriori informazioni, vedere [suggerimenti di risoluzione dei problemi per IntelliSense lentezza](https://blogs.msdn.microsoft.com/vcblog/2011/03/29/troubleshooting-tips-for-intellisense-slowness/).  
  
-   **_ISO_VOLATILE** definito come 1 se la [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **_KERNEL_MODE** definito come 1 se la [/kernel (Crea Kernel modalità file binario)](../build/reference/kernel-create-kernel-mode-binary.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **M_amd64** definito come il valore letterale integer valore 100 per le compilazioni che processori x64. In caso contrario, non definito.  
  
-   **M_arm** definito come il valore letterale integer 7 per le compilazioni destinate a processori ARM. In caso contrario, non definito.  
  
-   **_M_ARM_ARMV7VE** definito come 1 quando il [armv7ve](../build/reference/arch-arm.md) è impostata l'opzione del compilatore per le compilazioni destinate a processori ARM. In caso contrario, non definito.  
  
-   **M_arm_fp** definito come un valore letterale integer che indica quale [/arch](../build/reference/arch-arm.md) è stata impostata l'opzione del compilatore, se la destinazione di compilazione è un processore ARM. In caso contrario, non definito.  
  
    -   Nell'intervallo di 30 e 39 se non **/arch** è stata specificata l'opzione di gestione risorse di AZURE, che indica l'architettura predefinita per ARM è stata impostata (`VFPv3`).  
  
    -   Nell'intervallo se 40 49 **vfpv4** è stata impostata.  
  
    -   Vedere [/arch (ARM)](../build/reference/arch-arm.md) Per ulteriori informazioni.  
  
-   **_M_ARM64** definito come 1 per le compilazioni destinate a processori ARM a 64 bit. In caso contrario, non definito.  
  
-   **M_CEE** definito come 001 se qualsiasi [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **M_CEE_PURE** definito come 001 se il [/clr: pure](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **M_CEE_SAFE** definito come 001 se il [/clr: safe](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **_M_FP_EXCEPT** definito come 1 se la [/fp: tranne](../build/reference/fp-specify-floating-point-behavior.md) o [/fp: strict](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **_M_FP_FAST** definito come 1 se la [/fp: fast](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **_M_FP_PRECISE** definito come 1 se la [/fp: precise](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **_M_FP_STRICT** definito come 1 se la [/fp: strict](../build/reference/fp-specify-floating-point-behavior.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **M_IX86** definito come il valore letterale integer valore 600 per le compilazioni che processori x86. Questa macro non è definita per le destinazioni di compilazione ARM o x64.  
  
-   **_M_IX86_FP** definito come un valore letterale integer che indica il [/arch](../build/reference/arch-arm.md) opzione del compilatore impostato o il valore predefinito. Questa macro viene definita sempre quando la destinazione di compilazione è un x86 processore. In caso contrario, non definito. Quando viene definito, il valore è:  
  
    -   0 se il **/arch:IA32** è stata impostata l'opzione del compilatore.  
  
    -   1 se la **/arch** è stata impostata l'opzione del compilatore.  
  
    -   2 se il **/arch: SSE2**, **: AVX** o **/arch: avx2** è stata impostata l'opzione del compilatore. Questo valore è il valore predefinito se un **/arch** non è stato specificato l'opzione del compilatore. Quando **/arch: AVX** viene specificato, la macro **__AVX\_\_** è definita. Quando **/arch: avx2** è specificato, entrambi **__AVX\_\_** e **__AVX2\_\_** vengono inoltre definiti.  
  
    -   Vedere [/arch (x86)](../build/reference/arch-x86.md) Per ulteriori informazioni.  
  
-   **M_X64** definito come il valore letterale integer valore 100 per le compilazioni che processori x64. In caso contrario, non definito.  
  
-   **Managed** definito come 1 quando il [/clr](../build/reference/clr-common-language-runtime-compilation.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **Msc_build** definito come valore letterale integer che contiene l'elemento di numero di revisione del numero di versione del compilatore. Il numero di revisione è il quarto elemento il numero di versione separato dal punto. Ad esempio, se il numero di versione del compilatore Visual C++ è 15.00.20706.01, la **msc_build** (macro) restituisce 1. Questa macro è sempre definita.  
  
-   **Msc_extensions** definito come 1 se la [/Ze (attiva le estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) viene impostato l'opzione del compilatore, ovvero il valore predefinito. In caso contrario, non definito.  
  
-   **Msc_full_ver** definito come valore letterale integer che codifica la versione principale, secondario e build numero di elementi del numero di versione del compilatore. Il numero principale è il primo elemento del numero di versione separato dal punto, il numero secondario è il secondo elemento e il numero di build è il terzo elemento. Ad esempio, se il numero di versione del compilatore Visual C++ è 15.00.20706.01, la **msc_full_ver** macro restituisce 150020706. Immettere **cl /?** nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro è sempre definita.  
  
-   **Msc_ver** definito come valore letterale integer che codifica il major e minor numero di elementi del numero di versione del compilatore. Il numero principale è il primo elemento del numero di versione separato dal punto e il numero secondario è il secondo elemento. Ad esempio, se il numero di versione del compilatore Visual C++ è 17.00.51106.1, la **msc_ver** macro restituisce 1700. Immettere **cl /?** nella riga di comando per visualizzare il numero di versione del compilatore. Questa macro è sempre definita.  
  
-   **_MSVC_LANG** definito come valore letterale integer che specifica il linguaggio C++ standard di destinazione dal compilatore. Quando viene compilato come C++, la macro è il valore letterale integer 201402 se il [/std:c + + 14](../Topic/-std%20\(Specify%20Language%20Standard%20Version\).md) opzione del compilatore è impostata, o per impostazione predefinita e si è impostato su un livello più elevato, non è specificato valore quando il [/std:c + + più recente](../Topic/-std%20\(Specify%20Language%20Standard%20Version\).md) è impostata l'opzione del compilatore. In caso contrario, la macro non è definita. Il **_MSVC_LANG** macro e [/std (specifica di linguaggio Standard versione)](../Topic/-std%20\(Specify%20Language%20Standard%20Version\).md) Opzioni del compilatore sono disponibile a partire da Visual Studio 2015 Update 3.  
  
-   **MSVC_RUNTIME_CHECKS** definito come 1 quando uno del [/RTC](../build/reference/rtc-run-time-error-checks.md) Opzioni del compilatore è impostata. In caso contrario, non definito.  
  
-   **MT** definito come 1 quando [/MD o /MDd](../build/reference/md-mt-ld-use-run-time-library.md) (DLL con multithreading) o [/MT o /MTd](../build/reference/md-mt-ld-use-run-time-library.md) (multithreading) è specificato. In caso contrario, non definito.  
  
-   **NATIVE_WCHAR_T_DEFINED** definito come 1 quando il [/Zc: wchar_t](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **OpenMP** definito come integer letterali 200203, che rappresenta la data della specifica OpenMP implementata da Visual C++, se il [/openmp (Attiva supporto OpenMP 2.0)](../build/reference/openmp-enable-openmp-2-0-support.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
    ```cpp  
    // _OPENMP_dir.cpp  
    // compile with: /openmp   
    #include <stdio.h>   
    int main() {  
       printf("%d\n", _OPENMP);  
    }  
    ```  
  
-   **_PREFAST\_** definito come 1 quando il [/analyze](../build/reference/analyze-code-analysis.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **__TIMESTAMP\_\_** definito come valore letterale stringa che contiene la data e ora dell'ultima modifica del file di origine corrente, nel formato abbreviato, costante la lunghezza restituita dalla libreria di Runtime C [asctime](../c-runtime-library/reference/asctime-wasctime.md) funzione, ad esempio, `Fri 19 Aug 13:32:58 2016`. Questa macro è sempre definita.  
  
-   **VC_NODEFAULTLIB** definito come 1 quando il [/Zl (omette nome della libreria predefinita)](../build/reference/zl-omit-default-library-name.md) è impostata l'opzione del compilatore. In caso contrario, non definito.  
  
-   **WCHAR_T_DEFINED** definito come 1 quando il valore predefinito [/Zc: wchar_t](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) è impostata l'opzione del compilatore. Il **WCHAR_T_DEFINED** macro viene definita ma non prevede alcun valore se il **/Zc:wchar_t-** è impostata l'opzione del compilatore, e `wchar_t` è definito in un file di intestazione di sistema incluso nel progetto. In caso contrario, non definito.  
  
-   **Win32** definito come 1 quando la destinazione di compilazione è ARM a 32 bit, 64-bit ARM, x86, o x64. In caso contrario, non definito.  
  
-   **Win64** definito come 1 quando la destinazione di compilazione è x64 o ARM a 64 bit. In caso contrario, non definito.  
  
-   **_WINRT_DLL** definito come 1 quando compilato come C++ ed entrambi [/ZW (compilazione di Windows Runtime)](../build/reference/zw-windows-runtime-compilation.md) e [/LD o /LDd](../build/reference/md-mt-ld-use-run-time-library.md) vengono impostate le opzioni del compilatore. In caso contrario, non definito.  
  
 Le macro del preprocessore utilizzate per determinare la versione della libreria ATL o MFC non sono già definite dal compilatore. Queste macro sono definite nelle intestazioni per la libreria, in modo che non sono definite nelle direttive del preprocessore prima che l'intestazione richiesta è incluso.  
  
-   **Atl_ver** definito in \< atldef.h > come valore letterale integer che codifica il numero di versione ATL.  
  
-   **Mfc_ver** definito in \< afxver . h > come valore letterale integer che codifica il numero di versione MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro (C/C++)](../preprocessor/macros-c-cpp.md)   
 [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)   
 [Direttive del preprocessore](../preprocessor/preprocessor-directives.md)