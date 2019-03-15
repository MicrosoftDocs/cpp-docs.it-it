---
title: /openmp (Attiva supporto OpenMP 2.0)
ms.date: 11/04/2016
f1_keywords:
- /openmp
- VC.Project.VCCLCompilerTool.OpenMP
helpviewer_keywords:
- /openmp compiler option [C++]
- -openmp compiler option [C++]
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
ms.openlocfilehash: f1edcc6d29a5b84106b3a5fd91d2446c34e0f7b9
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807468"
---
# <a name="openmp-enable-openmp-20-support"></a>/openmp (Attiva supporto OpenMP 2.0)

Indica al compilatore di elaborare `#pragma` [omp](../../preprocessor/omp.md).

## <a name="syntax"></a>Sintassi

```
/openmp
```

## <a name="remarks"></a>Note

`#pragma omp` Consente di specificare [direttive](../../parallel/openmp/reference/openmp-directives.md) e [clausole](../../parallel/openmp/reference/openmp-clauses.md). Se **/openmp** non è specificato in una compilazione, il compilatore ignora direttive e clausole OpenMP. [Funzioni OpenMP](../../parallel/openmp/reference/openmp-functions.md) chiamate vengono elaborate dal compilatore anche se **/openmp** non è specificato.

Le applicazioni compilate con **/openmp** e **/clr** può essere eseguito solo in un processo di dominio di sola applicazione; più domini dell'applicazione non sono supportati. Vale a dire, quando viene eseguito il costruttore del modulo (. cctor), verrà rilevato il processo viene compilato con **/openmp** e se l'applicazione viene caricata in un runtime diverso. Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md), [/clr (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md), e [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md).

Se si tenta di caricare un'applicazione compilata con **/openmp** e **/clr** in un dominio applicazione non predefinito, un <xref:System.TypeInitializationException> verrà generata l'eccezione all'esterno del debugger e un oggetto Verrà generata eccezione OpenMPWithMultipleAppdomainsException all'interno del debugger.

Queste eccezioni possono essere generate anche nelle situazioni seguenti:

- Se l'applicazione compilata con **/clr**, ma non con **/openmp**, viene caricata in un dominio dell'applicazione non predefinito, in cui il processo include un'applicazione che è stata compilata con **/ OpenMP**.

- Se si passa il **/clr** dell'applicazione a un'utilità, ad esempio regasm.exe ([Regasm.exe (strumento di registrazione di Assembly)](/dotnet/framework/tools/regasm-exe-assembly-registration-tool)), che carica i relativi assembly di destinazione in un dominio dell'applicazione non predefinito.

Sicurezza dall'accesso di codice di common language runtime non funziona nelle aree di OpenMP. Se si applica un attributo di sicurezza CLR accesso di codice all'esterno di un'area parallela, non sarà attivo in tale area.

Microsoft consiglia di non scrivere **/openmp** le applicazioni che consente parzialmente attendibili ai chiamanti, usando <xref:System.Security.AllowPartiallyTrustedCallersAttribute>, o qualsiasi attributo di protezione accesso di codice CLR.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **C/C++** nodo.

1. Selezionare il **linguaggio** pagina delle proprietà.

1. Modificare il **supporto OpenMP** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.

## <a name="example"></a>Esempio

L'esempio seguente illustra alcuni degli effetti dell'avvio di threadpool invece di threadpool dopo l'avvio. Supponendo che x64, singolo core, processore doppio threadpool richiede circa 16 ms all'avvio. Dopo che è tuttavia un costo minimo per il pool di thread.

Quando esegue la compilazione con **/openmp**, la seconda chiamata a test2 non viene mai eseguito un tempo superiore se esegue la compilazione con **/openmp-**, poiché non vi è alcun avvio threadpool. Un milione di iterazioni di **/openmp** versione è più veloce il **/openmp-** versione per la seconda chiamata test2 di 25 iterazioni **/openmp-** e **/openmp** register di versioni inferiori alla granularità di orologio.

Se si dispone di un solo ciclo nell'applicazione è in esecuzione in meno di 15 ms (regolati per il sovraccarico approssimativo sul computer), pertanto **/openmp** potrebbe non essere appropriato, ma se è tutto ciò che più, è possibile provare a usare **/openmp**.

```
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

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
