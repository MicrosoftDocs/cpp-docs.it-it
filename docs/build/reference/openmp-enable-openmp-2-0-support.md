---
title: /OpenMP (Attiva supporto OpenMP)
ms.date: 04/15/2019
f1_keywords:
- /openmp
- VC.Project.VCCLCompilerTool.OpenMP
helpviewer_keywords:
- /openmp compiler option [C++]
- -openmp compiler option [C++]
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
ms.openlocfilehash: caa06d89c590abd2b3a74a5a6b118d6ba4acd910
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320214"
---
# <a name="openmp-enable-openmp-support"></a>/OpenMP (Attiva supporto OpenMP)

Indica al compilatore di elaborare [ `#pragma omp` ](../../preprocessor/omp.md) direttive per il supporto OpenMP.

## <a name="syntax"></a>Sintassi

::: moniker range=">= vs-2019"

> **/openmp**\[**:**__experimental__]

::: moniker-end

::: moniker range="<= vs-2017"

> **/openmp**

::: moniker-end

## <a name="remarks"></a>Note

`#pragma omp` Consente di specificare [direttive](../../parallel/openmp/reference/openmp-directives.md) e [clausole](../../parallel/openmp/reference/openmp-clauses.md). Se **/openmp** non è specificato in una compilazione, il compilatore ignora direttive e clausole OpenMP. [Funzioni OpenMP](../../parallel/openmp/reference/openmp-functions.md) chiamate vengono elaborate dal compilatore anche se **/openmp** non è specificato.

::: moniker range=">= vs-2019"

Il C++ compilatore supporta attualmente lo standard di OpenMP 2.0. Tuttavia, Visual Studio 2019 offre ora anche funzionalità SIMD. Per usare SIMD, esegue la compilazione usando il **/openmp: sperimentale** opzione. Questa opzione consente a entrambe le consuete funzionalità di OpenMP e OpenMP SIMD funzionalità aggiuntive non disponibili quando si usa la **/openmp** passare.

::: moniker-end

Le applicazioni compilate usando le **/openmp** e **/clr** può essere eseguito solo in un processo di dominio di sola applicazione. Non sono supportati più domini dell'applicazione. Ovvero, quando il costruttore del modulo (`.cctor`) viene eseguito, rileva se il processo viene compilato usando **/openmp**, e se l'app viene caricata in un runtime diverso. Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md), [/clr (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md), e [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md).

Se si tenta di caricare un'app compilata usando entrambe **/openmp** e **/clr** in un dominio applicazione non predefinito, una <xref:System.TypeInitializationException> all'esterno del debugger, viene generata l'eccezione e un `OpenMPWithMultipleAppdomainsException` eccezione viene generata nel debugger.

Queste eccezioni possono essere generate anche nelle situazioni seguenti:

- Se l'applicazione viene compilata usando **/clr** ma non **/openmp**e viene caricato in un dominio dell'applicazione non predefinito, in cui il processo include un'app compilata usando **/openmp**.

- Se si passa il **/clr** app a un'utilità, ad esempio [regasm.exe](/dotnet/framework/tools/regasm-exe-assembly-registration-tool), che carica i relativi assembly di destinazione in un dominio dell'applicazione non predefinito.

Sicurezza dall'accesso di codice di common language runtime non funziona nelle aree di OpenMP. Se si applica un attributo di sicurezza CLR accesso di codice all'esterno di un'area parallela, non sarà attivo in tale area.

Microsoft non consiglia di scrivere **/openmp** chiamanti di App che consentono parzialmente attendibili. Non usare <xref:System.Security.AllowPartiallyTrustedCallersAttribute>, o qualsiasi attributo di protezione accesso di codice CLR.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere la **le proprietà di configurazione** > **C /C++** > **linguaggio** pagina delle proprietà.

1. Modificare il **supporto OpenMP** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.

## <a name="example"></a>Esempio

L'esempio seguente illustra alcuni degli effetti dell'avvio del thread del pool invece di pool di thread, dopo averlo avviato. Supponendo che x64, singolo core, processore doppio, il pool di thread richiede circa 16 ms per l'avvio. In seguito, vi sono leggermente costi aggiuntivi per il pool di thread.

Quando si esegue la compilazione usando **/openmp**, la seconda chiamata a test2 non viene mai eseguito un tempo superiore è la compilazione con **/openmp-**, poiché non vi è alcun avvio del pool di thread. Un milione di iterazioni, il **/openmp** versione è più veloce il **/openmp-** versione per la seconda chiamata a test2. 25 iterazioni, entrambe **/openmp-** e **/openmp** register di versioni inferiori alla granularità di orologio.

Se si dispone di un solo ciclo nell'applicazione e viene eseguita in meno di 15 ms (regolati per il sovraccarico approssimativo sul computer), **/openmp** potrebbe non essere appropriato. Se è superiore, è possibile provare a usare **/openmp**.

```cpp
// cpp_compiler_options_openmp.cpp
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

volatile DWORD dwStart;
volatile int global = 0;

double test2(int num_steps) {
   int i;
   global++;
   double x, pi, sum = 0.0, step;

   step = 1.0 / (double) num_steps;

   #pragma omp parallel for reduction(+:sum) private(x)
   for (i = 1; i <= num_steps; i++) {
      x = (i - 0.5) * step;
      sum = sum + 4.0 / (1.0 + x*x);
   }

   pi = step * sum;
   return pi;
}

int main(int argc, char* argv[]) {
   double   d;
   int n = 1000000;

   if (argc > 1)
      n = atoi(argv[1]);

   dwStart = GetTickCount();
   d = test2(n);
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);

   dwStart = GetTickCount();
   d = test2(n);
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);
}
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md) \
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md) \
[OpenMP in MSVC](../../parallel/openmp/openmp-in-visual-cpp.md)
