---
title: /OpenMP (Abilita supporto OpenMP)
ms.date: 04/15/2019
f1_keywords:
- /openmp
- VC.Project.VCCLCompilerTool.OpenMP
helpviewer_keywords:
- /openmp compiler option [C++]
- -openmp compiler option [C++]
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
ms.openlocfilehash: 6bd1ffcd9b21bfe22ed9424ee77edf43100abf6c
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921230"
---
# <a name="openmp-enable-openmp-support"></a>/OpenMP (Abilita supporto OpenMP)

Fa in modo che il compilatore elabori le [`#pragma omp`](../../preprocessor/omp.md) direttive in supporto di OpenMP.

## <a name="syntax"></a>Sintassi

::: moniker range=">= msvc-160"

> **/OpenMP** \[ **:**__sperimentale__ ]

::: moniker-end

::: moniker range="<= msvc-150"

> **/OpenMP**

::: moniker-end

## <a name="remarks"></a>Osservazioni

`#pragma omp` viene utilizzato per specificare le [direttive](../../parallel/openmp/reference/openmp-directives.md) e le [clausole](../../parallel/openmp/reference/openmp-clauses.md). Se **/OpenMP** non è specificato in una compilazione, il compilatore ignora le clausole OpenMP e le direttive. Le chiamate di [funzione OpenMP](../../parallel/openmp/reference/openmp-functions.md) vengono elaborate dal compilatore anche se **/OpenMP** non è specificato.

::: moniker range=">= msvc-160"

Il compilatore C++ supporta attualmente lo standard OpenMP 2,0. Tuttavia, Visual Studio 2019 ora offre anche la funzionalità SIMD. Per usare SIMD, compilare usando l'opzione **/OpenMP: Experimental** . Questa opzione Abilita sia le funzionalità OpenMP usuali che le funzionalità SIMD OpenMP aggiuntive non disponibili quando si usa l'opzione **/OpenMP** .

::: moniker-end

Le applicazioni compilate con **/OpenMP** e **/CLR** possono essere eseguite solo in un singolo processo del dominio dell'applicazione. Non sono supportati più domini applicazione. Ovvero, quando viene eseguito il costruttore del modulo ( `.cctor` ), viene rilevato se il processo viene compilato con **/OpenMP** e se l'app viene caricata in un runtime non predefinito. Per altre informazioni, vedere [AppDomain](../../cpp/appdomain.md), [/CLR (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md)e [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).

Se si tenta di caricare un'app compilata con **/OpenMP** e **/CLR** in un dominio applicazione non predefinito, <xref:System.TypeInitializationException> viene generata un'eccezione all'esterno del debugger e `OpenMPWithMultipleAppdomainsException` viene generata un'eccezione nel debugger.

Queste eccezioni possono inoltre essere generate nelle situazioni seguenti:

- Se l'applicazione viene compilata usando **/CLR** ma non **/OpenMP** e viene caricata in un dominio applicazione non predefinito, in cui il processo include un'app compilata con **/OpenMP** .

- Se si passa l'app **/CLR** a un'utilità, ad esempio [regasm.exe](/dotnet/framework/tools/regasm-exe-assembly-registration-tool), che carica gli assembly di destinazione in un dominio applicazione non predefinito.

La sicurezza dall'accesso di codice di Common Language Runtime non funziona nelle aree OpenMP. Se si applica un attributo di sicurezza per l'accesso di codice CLR all'esterno di un'area parallela, non sarà attivo nell'area parallela.

Microsoft non consiglia di scrivere app **/OpenMP** che consentano chiamanti parzialmente attendibili. Non usare <xref:System.Security.AllowPartiallyTrustedCallersAttribute> o qualsiasi attributo di sicurezza per l'accesso di codice CLR.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere la **Configuration Properties**  >  pagina delle proprietà del linguaggio **C/C++** delle proprietà di configurazione  >  **Language** .

1. Modificare la proprietà di **supporto OpenMP** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrati alcuni effetti dell'avvio del pool di thread rispetto all'utilizzo del pool di thread dopo che è stato avviato. Supponendo un processore dual x64, Single Core, il pool di thread richiede circa 16 ms per l'avvio. Successivamente, il pool di thread ha un costo aggiuntivo.

Quando si esegue la compilazione con **/OpenMP** , la seconda chiamata a test2 non viene mai eseguita più a lungo rispetto a quando si esegue la compilazione usando **/OpenMP-** , perché non è presente alcun avvio del pool di thread. A un milione di iterazioni, la versione di **/OpenMP** è più veloce della versione di **/OpenMP-** per la seconda chiamata a test2. Con 25 iterazioni, entrambe le versioni di **/OpenMP-** e **/OpenMP** registrano meno della granularità dell'orologio.

Se nell'applicazione è presente un solo ciclo e viene eseguito in meno di 15 ms (regolato per l'overhead approssimativo nel computer), **/OpenMP** potrebbe non essere appropriato. Se è più elevata, è consigliabile usare **/OpenMP** .

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
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md) \
[OpenMP in MSVC](../../parallel/openmp/openmp-in-visual-cpp.md)
