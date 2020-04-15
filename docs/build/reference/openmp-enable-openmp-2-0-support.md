---
title: /openmp (Abilita supporto OpenMP)
ms.date: 04/15/2019
f1_keywords:
- /openmp
- VC.Project.VCCLCompilerTool.OpenMP
helpviewer_keywords:
- /openmp compiler option [C++]
- -openmp compiler option [C++]
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
ms.openlocfilehash: d3454650bfaaacd756e5cfc73df056441a39f5ac
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336200"
---
# <a name="openmp-enable-openmp-support"></a>/openmp (Abilita supporto OpenMP)

Fa sì che [`#pragma omp`](../../preprocessor/omp.md) il compilatore elabori le direttive a supporto di OpenMP.

## <a name="syntax"></a>Sintassi

::: moniker range=">= vs-2019"

> **/openmp**\[**: sperimentale**__experimental__]

::: moniker-end

::: moniker range="<= vs-2017"

> **/openmp**

::: moniker-end

## <a name="remarks"></a>Osservazioni

`#pragma omp`viene utilizzato per specificare [direttive](../../parallel/openmp/reference/openmp-directives.md) e [clausole](../../parallel/openmp/reference/openmp-clauses.md). Se **/openmp** non è specificato in una compilazione, il compilatore ignora le clausole e le direttive OpenMP. Le chiamate [di funzione OpenMP](../../parallel/openmp/reference/openmp-functions.md) vengono elaborate dal compilatore anche se **/openmp** non è specificato.

::: moniker range=">= vs-2019"

Attualmente lo standard DiMP 2.0 è supportato. Tuttavia, Visual Studio 2019 offre anche ora funzionalità SIMD. Per utilizzare SIMD, compilare utilizzando l'opzione **/openmp:experimental.** Questa opzione abilita sia le normali funzioni OpenMP, sia altre funzioni SIMD OpenMP non disponibili quando si utilizza l'opzione **/openmp.**

::: moniker-end

Le applicazioni compilate utilizzando entrambe le applicazioni **/openmp** e **/clr** possono essere eseguite solo in un singolo processo di dominio applicazione. Più domini applicazione non sono supportati. Ovvero, quando viene eseguito il costruttore del modulo (`.cctor`) , rileva se il processo viene compilato utilizzando **/openmp**e se l'app viene caricata in un runtime non predefinito. Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md), [/clr (Compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md)e [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).

Se si tenta di caricare un'app compilata utilizzando sia **/openmp** che <xref:System.TypeInitializationException> **/clr** in un dominio `OpenMPWithMultipleAppdomainsException` applicazione non predefinito, viene generata un'eccezione all'esterno del debugger e nel debugger viene generata un'eccezione.

Queste eccezioni possono essere generate anche nelle situazioni seguenti:These exceptions can also be raised in the following situations:

- Se l'applicazione viene compilata utilizzando **/clr** ma non **con /openmp**e viene caricata in un dominio applicazione non predefinito, dove il processo include un'app compilata con **/openmp**.

- Se si passa l'app **/clr** a un'utilità, ad esempio [regasm.exe](/dotnet/framework/tools/regasm-exe-assembly-registration-tool), che carica gli assembly di destinazione in un dominio applicazione non predefinito.

La sicurezza dall'accesso di codice di Common Language Runtime non funziona nelle aree OpenMP. Se si applica un attributo di sicurezza dall'accesso di codice CLR all'esterno di un'area parallela, non sarà attivo nell'area parallela.

Microsoft non consiglia di scrivere **/openmp** app che consentono chiamanti parzialmente attendibili. Non utilizzare <xref:System.Security.AllowPartiallyTrustedCallersAttribute>, o qualsiasi attributo di sicurezza dall'accesso di codice CLR.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere la pagina delle proprietà **Proprietà** > di configurazione del**linguaggio** **C/C.** > 

1. Modificare la proprietà **Supporto OpenMP.**

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrati alcuni degli effetti dell'avvio del pool di thread rispetto all'utilizzo del pool di thread dopo l'avvio. Supponendo che un x64, single core, doppio processore, il pool di thread richiede circa 16 ms per l'avvio. Dopo di che, c'è poco costo aggiuntivo per il pool di thread.

Quando si esegue la compilazione utilizzando **/openmp**, la seconda chiamata a test2 non viene mai eseguita più a lungo rispetto a quando si esegue la compilazione utilizzando **/openmp-**, in quanto non è presente alcun avvio del pool di thread. A un milione di iterazioni, la versione **/openmp** è più veloce della versione **/openmp-** per la seconda chiamata a test2. A 25 iterazioni, entrambe le versioni **/openmp-** e **/openmp** registrano meno della granularità del clock.

Se si dispone di un solo ciclo nell'applicazione e viene eseguito in meno di 15 ms (regolato per l'overhead approssimativo del computer), **/openmp** potrebbe non essere appropriato. Se è più alto, si consiglia di utilizzare **/openmp**.

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
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md) \
[OpenMP in MSVC](../../parallel/openmp/openmp-in-visual-cpp.md)
